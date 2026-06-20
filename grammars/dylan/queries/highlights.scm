;; ==========================================
;; Keywords & Control Flow
;; ==========================================

[
  "define"
  "end"
  "let"
  "slot"
  "constant"
  "variable"
] @keyword

[
  "if"
  "else"
  "elseif"
  "unless"
  "case"
  "select"
  "otherwise"
  "by"
] @keyword.conditional

[
  "for"
  "while"
  "until"
  "in"
  "from"
  "to"
  "then"
  "finally"
] @keyword.repeat

[
  "block"
  "cleanup"
  "exception"
] @keyword.exception

;; ==========================================
;; Definitions & Types
;; ==========================================

(module_definition name: (identifier) @namespace)
(class_definition name: (identifier) @type)
(method_definition name: (identifier) @function)
(function_definition name: (identifier) @function)

(type_specifier) @type

;; ==========================================
;; Macros
;; ==========================================

"macro" @keyword.directive

(macro_definition name: (identifier) @macro)

[
  "?"
  "=>"
] @operator

(macro_pattern_variable) @variable.parameter
(macro_template_substitution) @variable.parameter

;; ==========================================
;; Literals & Constants
;; ==========================================

(number) @number
(string) @string
(character) @character
(boolean) @boolean
(symbol) @string.special
(keyword) @label

;; ==========================================
;; Identifiers & Calls
;; ==========================================

(call_expression (identifier) @function.call)

(parameter name: (identifier) @variable.parameter)
(keyword_parameter (identifier) @variable.parameter)

(identifier) @variable

;; ==========================================
;; Operators & Punctuation
;; ==========================================

[
  "+"
  "-"
  "*"
  "/"
  "="
  "=="
  ":="
  "<"
  ">"
  "<="
  ">="
  "&"
  "|"
] @operator

[
  "("
  ")"
  "{"
  "}"
] @punctuation.bracket

[
  ","
  ";"
] @punctuation.delimiter

;; ==========================================
;; Comments
;; ==========================================

(comment) @comment
