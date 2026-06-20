/**
 * @file tree-sitter parser for OpenDylan
 * @author Stefan Maaßen
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

export default grammar({
  name: "dylan",

  extras: ($) => [/\s+/, $.comment],

  word: ($) => $.identifier,

  conflicts: ($) => [
    [$._expression, $.macro_pattern_variable],
    [$._expression, $.binary_expression],
    [$.macro_template, $._expression],
  ],

  rules: {
    source_file: ($) => repeat($._definition),

    _definition: ($) =>
      choice(
        $.module_definition,
        $.class_definition,
        $.method_definition,
        $.function_definition,
        $.constant_definition,
        $.variable_definition,
        $.macro_definition,
        $._expression,
        seq($._expression, optional(";")),
      ),

    // ==========================================
    // DYLAN MACROS
    // ==========================================

    macro_definition: ($) =>
      seq("define", "macro", $.identifier, repeat($.macro_rule), "end"),

    macro_rule: ($) =>
      seq("{", $.macro_pattern, "}", "=>", "{", $.macro_template, "}"),

    macro_pattern: ($) =>
      repeat1(choice($.macro_pattern_variable, $.identifier, /[;(),=]/)),

    macro_pattern_variable: ($) =>
      seq(
        "?",
        choice(
          $.identifier,
          seq($.identifier, ":", $.identifier),
          seq("*", $.identifier),
          seq("@", $.identifier),
        ),
      ),

    macro_template: ($) =>
      repeat1(
        choice(
          $.macro_template_substitution,
          $.identifier,
          $._literal,
          /[;(),=+\-*\/]/,
        ),
      ),

    macro_template_substitution: ($) =>
      seq(
        "?",
        choice(
          $.identifier,
          seq($.identifier, ":", $.identifier),
          seq("=", $.identifier),
          seq("==", $.identifier),
        ),
      ),

    // ==========================================
    // CONTROL STRUCTURES
    // ==========================================

    _control_statement: ($) =>
      choice(
        $.if_statement,
        $.unless_statement,
        $.case_statement,
        $.select_statement,
        $.while_statement,
        $.until_statement,
        $.for_statement,
        $.block_statement,
      ),

    if_statement: ($) =>
      seq(
        "if",
        "(",
        $._expression,
        ")",
        repeat($._expression),
        repeat($.elseif_clause),
        optional(seq("else", repeat($._expression))),
        "end",
      ),

    elseif_clause: ($) =>
      seq("elseif", "(", $._expression, ")", repeat($._expression)),

    unless_statement: ($) =>
      seq("unless", "(", $._expression, ")", repeat($._expression), "end"),

    case_statement: ($) =>
      seq(
        "case",
        repeat1($.case_clause),
        optional(seq("otherwise", "=>", repeat($._expression))),
        "end",
      ),

    case_clause: ($) => seq($._expression, "=>", repeat($._expression), ";"),

    select_statement: ($) =>
      seq(
        "select",
        "(",
        $._expression,
        optional(seq("by", $.identifier)),
        ")",
        repeat1($.case_clause),
        optional(seq("otherwise", "=>", repeat($._expression))),
        "end",
      ),

    while_statement: ($) =>
      seq("while", "(", $._expression, ")", repeat($._expression), "end"),

    until_statement: ($) =>
      seq("until", "(", $._expression, ")", repeat($._expression), "end"),

    for_statement: ($) =>
      seq(
        "for",
        "(",
        commaSeparated($.for_clause),
        optional($.for_end_clause),
        ")",
        repeat($._expression),
        optional(seq("finally", repeat($._expression))),
        "end",
      ),

    for_clause: ($) =>
      choice(
        seq(
          $.identifier,
          "from",
          $._expression,
          optional(seq("to", $._expression)),
          optional(seq("by", $._expression)),
        ),
        seq($.identifier, "in", $._expression),
        seq($.identifier, "=", $._expression, "then", $._expression),
      ),

    for_end_clause: ($) => seq(choice("until:", "while:"), $._expression),

    block_statement: ($) =>
      seq(
        "block",
        "(",
        optional($.identifier),
        ")",
        repeat($._expression),
        repeat($.cleanup_clause),
        optional(
          seq(
            "exception",
            "(",
            $.identifier,
            "::",
            $.type_specifier,
            ")",
            repeat($._expression),
          ),
        ),
        "end",
      ),

    cleanup_clause: ($) => seq("cleanup", repeat($._expression)),

    // ==========================================
    // CORE DEFINITIONS
    // ==========================================

    module_definition: ($) =>
      seq("define", "module", $.identifier, repeat($.module_clause), "end"),

    module_clause: ($) =>
      choice(
        seq("use", $.identifier, optional($.clause_options)),
        seq("export", commaSeparated($.identifier)),
        seq("create", commaSeparated($.identifier)),
      ),

    clause_options: ($) =>
      seq(
        "{",
        commaSeparated(
          choice($.export_option, $.prefix_option, $.rename_option),
        ),
        "}",
      ),

    export_option: ($) =>
      seq(
        "export:",
        choice($.identifier, seq("{", commaSeparated($.identifier), "}")),
      ),
    prefix_option: ($) => seq("prefix:", $.string),
    rename_option: ($) =>
      seq(
        "rename:",
        seq("{", commaSeparated(seq($.identifier, "=>", $.identifier)), "}"),
      ),

    class_definition: ($) =>
      seq(
        "define",
        optional("open"),
        "class",
        $.identifier,
        seq("(", commaSeparated($.identifier), ")"),
        repeat($.slot_definition),
        "end",
      ),

    slot_definition: ($) =>
      seq(
        optional(choice("slot", "constant", "each-subclass")),
        $.identifier,
        optional(seq("::", $.type_specifier)),
        optional(seq("=", $._expression)),
        optional(","),
      ),

    method_definition: ($) =>
      seq(
        "define",
        optional("generic"),
        "method",
        $.identifier,
        $.parameter_list,
        repeat($._expression),
        "end",
      ),

    function_definition: ($) =>
      seq(
        "define",
        "function",
        $.identifier,
        $.parameter_list,
        repeat($._expression),
        "end",
      ),

    constant_definition: ($) =>
      seq("define", "constant", $.identifier, "=", $._expression),

    variable_definition: ($) =>
      seq("define", "variable", $.identifier, "=", $._expression),

    // --- Parameters & Types ---

    parameter_list: ($) =>
      seq(
        "(",
        commaSeparated($.parameter),
        optional(seq("#key", commaSeparated($.keyword_parameter))),
        optional("#all-keys"),
        optional(seq("#rest", $.identifier)),
        ")",
        optional(
          seq(
            "=>",
            choice($.parameter, seq("(", commaSeparated($.parameter), ")")),
          ),
        ),
      ),

    parameter: ($) => seq($.identifier, optional(seq("::", $.type_specifier))),

    keyword_parameter: ($) =>
      seq(
        choice($.identifier, seq($.keyword, $.identifier)),
        optional(seq("=", $._expression)),
      ),

    type_specifier: ($) => choice($.identifier, seq("<", $.identifier, ">")),

    // --- Expressions & Statements ---

    _expression: ($) =>
      choice(
        $.binary_expression,
        $.call_expression,
        $.local_binding,
        $.assignment_expression,
        $._control_statement,
        $._literal,
        $.identifier,
      ),

    binary_expression: ($) =>
      prec.left(
        1,
        seq(
          $._expression,
          choice("+", "-", "*", "/", "=", "==", "<", ">", "<=", ">=", "&", "|"),
          $._expression,
        ),
      ),

    call_expression: ($) =>
      prec.left(2, seq($._expression, "(", commaSeparated($._expression), ")")),

    local_binding: ($) =>
      seq("let", commaSeparated($.parameter), "=", $._expression, ";"),

    assignment_expression: ($) =>
      prec.right(0, seq($.identifier, ":=", $._expression)),

    // --- Literals & Low Level ---

    _literal: ($) =>
      choice($.number, $.string, $.character, $.boolean, $.symbol, $.keyword),

    identifier: ($) => /[a-zA-Z%_&*\-<>][a-zA-Z0-9%_&*\-<>+!?]*/,

    number: ($) => /-?[0-9]+(\.[0-9]+)?/,

    string: ($) => /"([^"\\]|\\.)*"/,

    character: ($) => /'([^'\\]|\\.)'/,

    boolean: ($) => choice("#t", "#f"),

    symbol: ($) => seq('#"', $.identifier, '"'),

    keyword: ($) => seq($.identifier, ":"),

    comment: ($) =>
      choice(seq("//", /.*/), seq("/*", /[^*]*\*+([^/*][^*]*\*+)*/, "/")),
  },
});

function commaSeparated(rule) {
  return optional(seq(rule, repeat(seq(",", rule))));
}
