#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 118
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 115
#define ALIAS_COUNT 1
#define TOKEN_COUNT 90
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 12

enum ts_symbol_identifiers {
  sym_comment_block_dylan = 1,
  sym_line_comment = 2,
  anon_sym_module = 3,
  anon_sym_synopsis = 4,
  anon_sym_author = 5,
  anon_sym_copyright = 6,
  anon_sym_version = 7,
  anon_sym_files = 8,
  anon_sym_executable = 9,
  anon_sym_library = 10,
  anon_sym_define = 11,
  anon_sym_EQ_GT = 12,
  anon_sym_LPAREN = 13,
  anon_sym_RPAREN = 14,
  anon_sym_COMMA = 15,
  anon_sym_POUNDkey = 16,
  anon_sym_POUNDrest = 17,
  anon_sym_COLON_COLON = 18,
  anon_sym_anytype = 19,
  aux_sym_identifier_token1 = 20,
  aux_sym_identifier_token2 = 21,
  anon_sym_QMARK = 22,
  anon_sym_BANG = 23,
  anon_sym_POUNDt = 24,
  anon_sym_POUNDf = 25,
  anon_sym_POUND_LPAREN = 26,
  anon_sym_DOT = 27,
  anon_sym_POUND_LBRACK = 28,
  anon_sym_RBRACK = 29,
  sym_string_literal = 30,
  sym_number = 31,
  sym_character_literal = 32,
  sym_symbol = 33,
  anon_sym_POUNDnext = 34,
  anon_sym_POUNDall_DASHkeys = 35,
  anon_sym_POUNDinclude = 36,
  anon_sym_method = 37,
  anon_sym_sealed = 38,
  anon_sym_open = 39,
  anon_sym_sideways = 40,
  anon_sym_dynamic = 41,
  anon_sym_compiler_DASHsideways = 42,
  anon_sym_compiler_DASHopen = 43,
  anon_sym_default_DASHinline = 44,
  anon_sym_inline_DASHonly = 45,
  anon_sym_inline = 46,
  anon_sym_may_DASHinline = 47,
  anon_sym_not_DASHinline = 48,
  anon_sym_domain = 49,
  anon_sym_function = 50,
  anon_sym_generic = 51,
  anon_sym_i8 = 52,
  anon_sym_u8 = 53,
  anon_sym_i16 = 54,
  anon_sym_u16 = 55,
  anon_sym_i32 = 56,
  anon_sym_u32 = 57,
  anon_sym_i64 = 58,
  anon_sym_u64 = 59,
  anon_sym_i128 = 60,
  anon_sym_u128 = 61,
  anon_sym_isize = 62,
  anon_sym_usize = 63,
  anon_sym_c_short = 64,
  anon_sym_c_ushort = 65,
  anon_sym_c_int = 66,
  anon_sym_c_uint = 67,
  anon_sym_c_long = 68,
  anon_sym_c_ulong = 69,
  anon_sym_c_longlong = 70,
  anon_sym_c_ulonglong = 71,
  anon_sym_c_longdouble = 72,
  anon_sym_c_void = 73,
  anon_sym_f16 = 74,
  anon_sym_f32 = 75,
  anon_sym_f64 = 76,
  anon_sym_f128 = 77,
  anon_sym_comptime_int = 78,
  anon_sym_comptime_float = 79,
  anon_sym_bool = 80,
  anon_sym_void = 81,
  anon_sym_noreturn = 82,
  anon_sym_type = 83,
  anon_sym_anyerror = 84,
  sym_custom_number_type = 85,
  anon_sym_LBRACK = 86,
  anon_sym_STAR = 87,
  anon_sym_c = 88,
  sym_integer_literal = 89,
  sym_source_file = 90,
  sym_meta_preprocessor_dylan = 91,
  sym_module = 92,
  sym_synopsis = 93,
  sym_author = 94,
  sym_copyright = 95,
  sym_version = 96,
  sym_files = 97,
  sym_executable = 98,
  sym_library = 99,
  sym_function_definition = 100,
  sym_parameters = 101,
  sym_parameter = 102,
  sym_identifier = 103,
  sym_modifier = 104,
  sym_function_word = 105,
  sym__type = 106,
  sym_primitive_type = 107,
  sym_error_type = 108,
  sym_optional_type = 109,
  sym_array_type = 110,
  aux_sym_source_file_repeat1 = 111,
  aux_sym_parameters_repeat1 = 112,
  aux_sym_identifier_repeat1 = 113,
  aux_sym_array_type_repeat1 = 114,
  alias_sym_type_identifier = 115,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment_block_dylan] = "comment_block_dylan",
  [sym_line_comment] = "line_comment",
  [anon_sym_module] = "module",
  [anon_sym_synopsis] = "synopsis",
  [anon_sym_author] = "author",
  [anon_sym_copyright] = "copyright",
  [anon_sym_version] = "version",
  [anon_sym_files] = "files",
  [anon_sym_executable] = "executable",
  [anon_sym_library] = "library",
  [anon_sym_define] = "define",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COMMA] = ",",
  [anon_sym_POUNDkey] = "#key",
  [anon_sym_POUNDrest] = "#rest",
  [anon_sym_COLON_COLON] = "::",
  [anon_sym_anytype] = "inference_type",
  [aux_sym_identifier_token1] = "identifier_token1",
  [aux_sym_identifier_token2] = "identifier_token2",
  [anon_sym_QMARK] = "\?",
  [anon_sym_BANG] = "!",
  [anon_sym_POUNDt] = "#t",
  [anon_sym_POUNDf] = "#f",
  [anon_sym_POUND_LPAREN] = "#(",
  [anon_sym_DOT] = ".",
  [anon_sym_POUND_LBRACK] = "#[",
  [anon_sym_RBRACK] = "]",
  [sym_string_literal] = "string_literal",
  [sym_number] = "number",
  [sym_character_literal] = "character_literal",
  [sym_symbol] = "symbol",
  [anon_sym_POUNDnext] = "#next",
  [anon_sym_POUNDall_DASHkeys] = "#all-keys",
  [anon_sym_POUNDinclude] = "#include",
  [anon_sym_method] = "method",
  [anon_sym_sealed] = "sealed",
  [anon_sym_open] = "open",
  [anon_sym_sideways] = "sideways",
  [anon_sym_dynamic] = "dynamic",
  [anon_sym_compiler_DASHsideways] = "compiler-sideways",
  [anon_sym_compiler_DASHopen] = "compiler-open",
  [anon_sym_default_DASHinline] = "default-inline",
  [anon_sym_inline_DASHonly] = "inline-only",
  [anon_sym_inline] = "inline",
  [anon_sym_may_DASHinline] = "may-inline",
  [anon_sym_not_DASHinline] = "not-inline",
  [anon_sym_domain] = "domain",
  [anon_sym_function] = "function",
  [anon_sym_generic] = "generic",
  [anon_sym_i8] = "i8",
  [anon_sym_u8] = "u8",
  [anon_sym_i16] = "i16",
  [anon_sym_u16] = "u16",
  [anon_sym_i32] = "i32",
  [anon_sym_u32] = "u32",
  [anon_sym_i64] = "i64",
  [anon_sym_u64] = "u64",
  [anon_sym_i128] = "i128",
  [anon_sym_u128] = "u128",
  [anon_sym_isize] = "isize",
  [anon_sym_usize] = "usize",
  [anon_sym_c_short] = "c_short",
  [anon_sym_c_ushort] = "c_ushort",
  [anon_sym_c_int] = "c_int",
  [anon_sym_c_uint] = "c_uint",
  [anon_sym_c_long] = "c_long",
  [anon_sym_c_ulong] = "c_ulong",
  [anon_sym_c_longlong] = "c_longlong",
  [anon_sym_c_ulonglong] = "c_ulonglong",
  [anon_sym_c_longdouble] = "c_longdouble",
  [anon_sym_c_void] = "c_void",
  [anon_sym_f16] = "f16",
  [anon_sym_f32] = "f32",
  [anon_sym_f64] = "f64",
  [anon_sym_f128] = "f128",
  [anon_sym_comptime_int] = "comptime_int",
  [anon_sym_comptime_float] = "comptime_float",
  [anon_sym_bool] = "bool",
  [anon_sym_void] = "void",
  [anon_sym_noreturn] = "noreturn",
  [anon_sym_type] = "type",
  [anon_sym_anyerror] = "anyerror",
  [sym_custom_number_type] = "custom_number_type",
  [anon_sym_LBRACK] = "[",
  [anon_sym_STAR] = "pointer",
  [anon_sym_c] = "pointer",
  [sym_integer_literal] = "integer_literal",
  [sym_source_file] = "source_file",
  [sym_meta_preprocessor_dylan] = "meta_preprocessor_dylan",
  [sym_module] = "module",
  [sym_synopsis] = "synopsis",
  [sym_author] = "author",
  [sym_copyright] = "copyright",
  [sym_version] = "version",
  [sym_files] = "files",
  [sym_executable] = "executable",
  [sym_library] = "library",
  [sym_function_definition] = "function_definition",
  [sym_parameters] = "parameters",
  [sym_parameter] = "parameter",
  [sym_identifier] = "identifier",
  [sym_modifier] = "modifier",
  [sym_function_word] = "function_word",
  [sym__type] = "_type",
  [sym_primitive_type] = "primitive_type",
  [sym_error_type] = "error_type",
  [sym_optional_type] = "optional_type",
  [sym_array_type] = "array_type",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_parameters_repeat1] = "parameters_repeat1",
  [aux_sym_identifier_repeat1] = "identifier_repeat1",
  [aux_sym_array_type_repeat1] = "array_type_repeat1",
  [alias_sym_type_identifier] = "type_identifier",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment_block_dylan] = sym_comment_block_dylan,
  [sym_line_comment] = sym_line_comment,
  [anon_sym_module] = anon_sym_module,
  [anon_sym_synopsis] = anon_sym_synopsis,
  [anon_sym_author] = anon_sym_author,
  [anon_sym_copyright] = anon_sym_copyright,
  [anon_sym_version] = anon_sym_version,
  [anon_sym_files] = anon_sym_files,
  [anon_sym_executable] = anon_sym_executable,
  [anon_sym_library] = anon_sym_library,
  [anon_sym_define] = anon_sym_define,
  [anon_sym_EQ_GT] = anon_sym_EQ_GT,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_POUNDkey] = anon_sym_POUNDkey,
  [anon_sym_POUNDrest] = anon_sym_POUNDrest,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [anon_sym_anytype] = anon_sym_anytype,
  [aux_sym_identifier_token1] = aux_sym_identifier_token1,
  [aux_sym_identifier_token2] = aux_sym_identifier_token2,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_POUNDt] = anon_sym_POUNDt,
  [anon_sym_POUNDf] = anon_sym_POUNDf,
  [anon_sym_POUND_LPAREN] = anon_sym_POUND_LPAREN,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_POUND_LBRACK] = anon_sym_POUND_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_string_literal] = sym_string_literal,
  [sym_number] = sym_number,
  [sym_character_literal] = sym_character_literal,
  [sym_symbol] = sym_symbol,
  [anon_sym_POUNDnext] = anon_sym_POUNDnext,
  [anon_sym_POUNDall_DASHkeys] = anon_sym_POUNDall_DASHkeys,
  [anon_sym_POUNDinclude] = anon_sym_POUNDinclude,
  [anon_sym_method] = anon_sym_method,
  [anon_sym_sealed] = anon_sym_sealed,
  [anon_sym_open] = anon_sym_open,
  [anon_sym_sideways] = anon_sym_sideways,
  [anon_sym_dynamic] = anon_sym_dynamic,
  [anon_sym_compiler_DASHsideways] = anon_sym_compiler_DASHsideways,
  [anon_sym_compiler_DASHopen] = anon_sym_compiler_DASHopen,
  [anon_sym_default_DASHinline] = anon_sym_default_DASHinline,
  [anon_sym_inline_DASHonly] = anon_sym_inline_DASHonly,
  [anon_sym_inline] = anon_sym_inline,
  [anon_sym_may_DASHinline] = anon_sym_may_DASHinline,
  [anon_sym_not_DASHinline] = anon_sym_not_DASHinline,
  [anon_sym_domain] = anon_sym_domain,
  [anon_sym_function] = anon_sym_function,
  [anon_sym_generic] = anon_sym_generic,
  [anon_sym_i8] = anon_sym_i8,
  [anon_sym_u8] = anon_sym_u8,
  [anon_sym_i16] = anon_sym_i16,
  [anon_sym_u16] = anon_sym_u16,
  [anon_sym_i32] = anon_sym_i32,
  [anon_sym_u32] = anon_sym_u32,
  [anon_sym_i64] = anon_sym_i64,
  [anon_sym_u64] = anon_sym_u64,
  [anon_sym_i128] = anon_sym_i128,
  [anon_sym_u128] = anon_sym_u128,
  [anon_sym_isize] = anon_sym_isize,
  [anon_sym_usize] = anon_sym_usize,
  [anon_sym_c_short] = anon_sym_c_short,
  [anon_sym_c_ushort] = anon_sym_c_ushort,
  [anon_sym_c_int] = anon_sym_c_int,
  [anon_sym_c_uint] = anon_sym_c_uint,
  [anon_sym_c_long] = anon_sym_c_long,
  [anon_sym_c_ulong] = anon_sym_c_ulong,
  [anon_sym_c_longlong] = anon_sym_c_longlong,
  [anon_sym_c_ulonglong] = anon_sym_c_ulonglong,
  [anon_sym_c_longdouble] = anon_sym_c_longdouble,
  [anon_sym_c_void] = anon_sym_c_void,
  [anon_sym_f16] = anon_sym_f16,
  [anon_sym_f32] = anon_sym_f32,
  [anon_sym_f64] = anon_sym_f64,
  [anon_sym_f128] = anon_sym_f128,
  [anon_sym_comptime_int] = anon_sym_comptime_int,
  [anon_sym_comptime_float] = anon_sym_comptime_float,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_void] = anon_sym_void,
  [anon_sym_noreturn] = anon_sym_noreturn,
  [anon_sym_type] = anon_sym_type,
  [anon_sym_anyerror] = anon_sym_anyerror,
  [sym_custom_number_type] = sym_custom_number_type,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_c] = anon_sym_STAR,
  [sym_integer_literal] = sym_integer_literal,
  [sym_source_file] = sym_source_file,
  [sym_meta_preprocessor_dylan] = sym_meta_preprocessor_dylan,
  [sym_module] = sym_module,
  [sym_synopsis] = sym_synopsis,
  [sym_author] = sym_author,
  [sym_copyright] = sym_copyright,
  [sym_version] = sym_version,
  [sym_files] = sym_files,
  [sym_executable] = sym_executable,
  [sym_library] = sym_library,
  [sym_function_definition] = sym_function_definition,
  [sym_parameters] = sym_parameters,
  [sym_parameter] = sym_parameter,
  [sym_identifier] = sym_identifier,
  [sym_modifier] = sym_modifier,
  [sym_function_word] = sym_function_word,
  [sym__type] = sym__type,
  [sym_primitive_type] = sym_primitive_type,
  [sym_error_type] = sym_error_type,
  [sym_optional_type] = sym_optional_type,
  [sym_array_type] = sym_array_type,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_parameters_repeat1] = aux_sym_parameters_repeat1,
  [aux_sym_identifier_repeat1] = aux_sym_identifier_repeat1,
  [aux_sym_array_type_repeat1] = aux_sym_array_type_repeat1,
  [alias_sym_type_identifier] = alias_sym_type_identifier,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_comment_block_dylan] = {
    .visible = true,
    .named = true,
  },
  [sym_line_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_module] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_synopsis] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_author] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_copyright] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_version] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_files] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_executable] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_library] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_define] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUNDkey] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUNDrest] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_anytype] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_identifier_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_identifier_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUNDt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUNDf] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_character_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_symbol] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_POUNDnext] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUNDall_DASHkeys] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUNDinclude] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_method] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sealed] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_open] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sideways] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dynamic] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_compiler_DASHsideways] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_compiler_DASHopen] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_default_DASHinline] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_inline_DASHonly] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_inline] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_may_DASHinline] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not_DASHinline] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_domain] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_function] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_generic] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_i8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_i16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_i32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_i64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_i128] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u128] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_isize] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_usize] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_c_short] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_c_ushort] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_c_int] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_c_uint] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_c_long] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_c_ulong] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_c_longlong] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_c_ulonglong] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_c_longdouble] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_c_void] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f128] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_comptime_int] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_comptime_float] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_void] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_noreturn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_type] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_anyerror] = {
    .visible = true,
    .named = false,
  },
  [sym_custom_number_type] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_c] = {
    .visible = true,
    .named = true,
  },
  [sym_integer_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_meta_preprocessor_dylan] = {
    .visible = true,
    .named = true,
  },
  [sym_module] = {
    .visible = true,
    .named = true,
  },
  [sym_synopsis] = {
    .visible = true,
    .named = true,
  },
  [sym_author] = {
    .visible = true,
    .named = true,
  },
  [sym_copyright] = {
    .visible = true,
    .named = true,
  },
  [sym_version] = {
    .visible = true,
    .named = true,
  },
  [sym_files] = {
    .visible = true,
    .named = true,
  },
  [sym_executable] = {
    .visible = true,
    .named = true,
  },
  [sym_library] = {
    .visible = true,
    .named = true,
  },
  [sym_function_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_modifier] = {
    .visible = true,
    .named = true,
  },
  [sym_function_word] = {
    .visible = true,
    .named = true,
  },
  [sym__type] = {
    .visible = false,
    .named = true,
  },
  [sym_primitive_type] = {
    .visible = true,
    .named = true,
  },
  [sym_error_type] = {
    .visible = true,
    .named = true,
  },
  [sym_optional_type] = {
    .visible = true,
    .named = true,
  },
  [sym_array_type] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_identifier_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_type_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_type_identifier] = {
    .visible = true,
    .named = true,
  },
};

enum ts_field_identifiers {
  field_err = 1,
  field_name = 2,
  field_ok = 3,
  field_parameters = 4,
  field_size = 5,
  field_type = 6,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_err] = "err",
  [field_name] = "name",
  [field_ok] = "ok",
  [field_parameters] = "parameters",
  [field_size] = "size",
  [field_type] = "type",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 2},
  [5] = {.index = 6, .length = 2},
  [6] = {.index = 8, .length = 1},
  [7] = {.index = 8, .length = 1},
  [8] = {.index = 9, .length = 2},
  [9] = {.index = 11, .length = 1},
  [10] = {.index = 12, .length = 2},
  [11] = {.index = 14, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
    {field_type, 2},
  [2] =
    {field_name, 2},
    {field_parameters, 3},
  [4] =
    {field_name, 3},
    {field_parameters, 4},
  [6] =
    {field_name, 1},
    {field_type, 3},
  [8] =
    {field_size, 0, .inherited = true},
  [9] =
    {field_size, 0, .inherited = true},
    {field_size, 1, .inherited = true},
  [11] =
    {field_size, 1},
  [12] =
    {field_err, 0},
    {field_ok, 2},
  [14] =
    {field_size, 1},
    {field_size, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [2] = {
    [0] = alias_sym_type_identifier,
  },
  [7] = {
    [1] = alias_sym_type_identifier,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_identifier, 2,
    sym_identifier,
    alias_sym_type_identifier,
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 26,
  [35] = 22,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
};

static TSCharacterRange aux_sym_identifier_token1_character_set_1[] = {
  {'0', '9'}, {'A', 'Z'}, {'_', '_'}, {'a', 'z'}, {0xaa, 0xaa}, {0xb5, 0xb5}, {0xba, 0xba}, {0xc0, 0xd6},
  {0xd8, 0xf6}, {0xf8, 0x2c1}, {0x2c6, 0x2d1}, {0x2e0, 0x2e4}, {0x2ec, 0x2ec}, {0x2ee, 0x2ee}, {0x370, 0x374}, {0x376, 0x377},
  {0x37a, 0x37d}, {0x37f, 0x37f}, {0x386, 0x386}, {0x388, 0x38a}, {0x38c, 0x38c}, {0x38e, 0x3a1}, {0x3a3, 0x3f5}, {0x3f7, 0x481},
  {0x48a, 0x52f}, {0x531, 0x556}, {0x559, 0x559}, {0x560, 0x588}, {0x5d0, 0x5ea}, {0x5ef, 0x5f2}, {0x620, 0x64a}, {0x66e, 0x66f},
  {0x671, 0x6d3}, {0x6d5, 0x6d5}, {0x6e5, 0x6e6}, {0x6ee, 0x6ef}, {0x6fa, 0x6fc}, {0x6ff, 0x6ff}, {0x710, 0x710}, {0x712, 0x72f},
  {0x74d, 0x7a5}, {0x7b1, 0x7b1}, {0x7ca, 0x7ea}, {0x7f4, 0x7f5}, {0x7fa, 0x7fa}, {0x800, 0x815}, {0x81a, 0x81a}, {0x824, 0x824},
  {0x828, 0x828}, {0x840, 0x858}, {0x860, 0x86a}, {0x870, 0x887}, {0x889, 0x88e}, {0x8a0, 0x8c9}, {0x904, 0x939}, {0x93d, 0x93d},
  {0x950, 0x950}, {0x958, 0x961}, {0x971, 0x980}, {0x985, 0x98c}, {0x98f, 0x990}, {0x993, 0x9a8}, {0x9aa, 0x9b0}, {0x9b2, 0x9b2},
  {0x9b6, 0x9b9}, {0x9bd, 0x9bd}, {0x9ce, 0x9ce}, {0x9dc, 0x9dd}, {0x9df, 0x9e1}, {0x9f0, 0x9f1}, {0x9fc, 0x9fc}, {0xa05, 0xa0a},
  {0xa0f, 0xa10}, {0xa13, 0xa28}, {0xa2a, 0xa30}, {0xa32, 0xa33}, {0xa35, 0xa36}, {0xa38, 0xa39}, {0xa59, 0xa5c}, {0xa5e, 0xa5e},
  {0xa72, 0xa74}, {0xa85, 0xa8d}, {0xa8f, 0xa91}, {0xa93, 0xaa8}, {0xaaa, 0xab0}, {0xab2, 0xab3}, {0xab5, 0xab9}, {0xabd, 0xabd},
  {0xad0, 0xad0}, {0xae0, 0xae1}, {0xaf9, 0xaf9}, {0xb05, 0xb0c}, {0xb0f, 0xb10}, {0xb13, 0xb28}, {0xb2a, 0xb30}, {0xb32, 0xb33},
  {0xb35, 0xb39}, {0xb3d, 0xb3d}, {0xb5c, 0xb5d}, {0xb5f, 0xb61}, {0xb71, 0xb71}, {0xb83, 0xb83}, {0xb85, 0xb8a}, {0xb8e, 0xb90},
  {0xb92, 0xb95}, {0xb99, 0xb9a}, {0xb9c, 0xb9c}, {0xb9e, 0xb9f}, {0xba3, 0xba4}, {0xba8, 0xbaa}, {0xbae, 0xbb9}, {0xbd0, 0xbd0},
  {0xc05, 0xc0c}, {0xc0e, 0xc10}, {0xc12, 0xc28}, {0xc2a, 0xc39}, {0xc3d, 0xc3d}, {0xc58, 0xc5a}, {0xc5d, 0xc5d}, {0xc60, 0xc61},
  {0xc80, 0xc80}, {0xc85, 0xc8c}, {0xc8e, 0xc90}, {0xc92, 0xca8}, {0xcaa, 0xcb3}, {0xcb5, 0xcb9}, {0xcbd, 0xcbd}, {0xcdd, 0xcde},
  {0xce0, 0xce1}, {0xcf1, 0xcf2}, {0xd04, 0xd0c}, {0xd0e, 0xd10}, {0xd12, 0xd3a}, {0xd3d, 0xd3d}, {0xd4e, 0xd4e}, {0xd54, 0xd56},
  {0xd5f, 0xd61}, {0xd7a, 0xd7f}, {0xd85, 0xd96}, {0xd9a, 0xdb1}, {0xdb3, 0xdbb}, {0xdbd, 0xdbd}, {0xdc0, 0xdc6}, {0xe01, 0xe30},
  {0xe32, 0xe33}, {0xe40, 0xe46}, {0xe81, 0xe82}, {0xe84, 0xe84}, {0xe86, 0xe8a}, {0xe8c, 0xea3}, {0xea5, 0xea5}, {0xea7, 0xeb0},
  {0xeb2, 0xeb3}, {0xebd, 0xebd}, {0xec0, 0xec4}, {0xec6, 0xec6}, {0xedc, 0xedf}, {0xf00, 0xf00}, {0xf40, 0xf47}, {0xf49, 0xf6c},
  {0xf88, 0xf8c}, {0x1000, 0x102a}, {0x103f, 0x103f}, {0x1050, 0x1055}, {0x105a, 0x105d}, {0x1061, 0x1061}, {0x1065, 0x1066}, {0x106e, 0x1070},
  {0x1075, 0x1081}, {0x108e, 0x108e}, {0x10a0, 0x10c5}, {0x10c7, 0x10c7}, {0x10cd, 0x10cd}, {0x10d0, 0x10fa}, {0x10fc, 0x1248}, {0x124a, 0x124d},
  {0x1250, 0x1256}, {0x1258, 0x1258}, {0x125a, 0x125d}, {0x1260, 0x1288}, {0x128a, 0x128d}, {0x1290, 0x12b0}, {0x12b2, 0x12b5}, {0x12b8, 0x12be},
  {0x12c0, 0x12c0}, {0x12c2, 0x12c5}, {0x12c8, 0x12d6}, {0x12d8, 0x1310}, {0x1312, 0x1315}, {0x1318, 0x135a}, {0x1380, 0x138f}, {0x13a0, 0x13f5},
  {0x13f8, 0x13fd}, {0x1401, 0x166c}, {0x166f, 0x167f}, {0x1681, 0x169a}, {0x16a0, 0x16ea}, {0x16f1, 0x16f8}, {0x1700, 0x1711}, {0x171f, 0x1731},
  {0x1740, 0x1751}, {0x1760, 0x176c}, {0x176e, 0x1770}, {0x1780, 0x17b3}, {0x17d7, 0x17d7}, {0x17dc, 0x17dc}, {0x1820, 0x1878}, {0x1880, 0x1884},
  {0x1887, 0x18a8}, {0x18aa, 0x18aa}, {0x18b0, 0x18f5}, {0x1900, 0x191e}, {0x1950, 0x196d}, {0x1970, 0x1974}, {0x1980, 0x19ab}, {0x19b0, 0x19c9},
  {0x1a00, 0x1a16}, {0x1a20, 0x1a54}, {0x1aa7, 0x1aa7}, {0x1b05, 0x1b33}, {0x1b45, 0x1b4c}, {0x1b83, 0x1ba0}, {0x1bae, 0x1baf}, {0x1bba, 0x1be5},
  {0x1c00, 0x1c23}, {0x1c4d, 0x1c4f}, {0x1c5a, 0x1c7d}, {0x1c80, 0x1c88}, {0x1c90, 0x1cba}, {0x1cbd, 0x1cbf}, {0x1ce9, 0x1cec}, {0x1cee, 0x1cf3},
  {0x1cf5, 0x1cf6}, {0x1cfa, 0x1cfa}, {0x1d00, 0x1dbf}, {0x1e00, 0x1f15}, {0x1f18, 0x1f1d}, {0x1f20, 0x1f45}, {0x1f48, 0x1f4d}, {0x1f50, 0x1f57},
  {0x1f59, 0x1f59}, {0x1f5b, 0x1f5b}, {0x1f5d, 0x1f5d}, {0x1f5f, 0x1f7d}, {0x1f80, 0x1fb4}, {0x1fb6, 0x1fbc}, {0x1fbe, 0x1fbe}, {0x1fc2, 0x1fc4},
  {0x1fc6, 0x1fcc}, {0x1fd0, 0x1fd3}, {0x1fd6, 0x1fdb}, {0x1fe0, 0x1fec}, {0x1ff2, 0x1ff4}, {0x1ff6, 0x1ffc}, {0x2071, 0x2071}, {0x207f, 0x207f},
  {0x2090, 0x209c}, {0x2102, 0x2102}, {0x2107, 0x2107}, {0x210a, 0x2113}, {0x2115, 0x2115}, {0x2119, 0x211d}, {0x2124, 0x2124}, {0x2126, 0x2126},
  {0x2128, 0x2128}, {0x212a, 0x212d}, {0x212f, 0x2139}, {0x213c, 0x213f}, {0x2145, 0x2149}, {0x214e, 0x214e}, {0x2183, 0x2184}, {0x2c00, 0x2ce4},
  {0x2ceb, 0x2cee}, {0x2cf2, 0x2cf3}, {0x2d00, 0x2d25}, {0x2d27, 0x2d27}, {0x2d2d, 0x2d2d}, {0x2d30, 0x2d67}, {0x2d6f, 0x2d6f}, {0x2d80, 0x2d96},
  {0x2da0, 0x2da6}, {0x2da8, 0x2dae}, {0x2db0, 0x2db6}, {0x2db8, 0x2dbe}, {0x2dc0, 0x2dc6}, {0x2dc8, 0x2dce}, {0x2dd0, 0x2dd6}, {0x2dd8, 0x2dde},
  {0x2e2f, 0x2e2f}, {0x3005, 0x3006}, {0x3031, 0x3035}, {0x303b, 0x303c}, {0x3041, 0x3096}, {0x309d, 0x309f}, {0x30a1, 0x30fa}, {0x30fc, 0x30ff},
  {0x3105, 0x312f}, {0x3131, 0x318e}, {0x31a0, 0x31bf}, {0x31f0, 0x31ff}, {0x3400, 0x3400}, {0x4dbf, 0x4dbf}, {0x4e00, 0x4e00}, {0x9fff, 0xa48c},
  {0xa4d0, 0xa4fd}, {0xa500, 0xa60c}, {0xa610, 0xa61f}, {0xa62a, 0xa62b}, {0xa640, 0xa66e}, {0xa67f, 0xa69d}, {0xa6a0, 0xa6e5}, {0xa717, 0xa71f},
  {0xa722, 0xa788}, {0xa78b, 0xa7ca}, {0xa7d0, 0xa7d1}, {0xa7d3, 0xa7d3}, {0xa7d5, 0xa7d9}, {0xa7f2, 0xa801}, {0xa803, 0xa805}, {0xa807, 0xa80a},
  {0xa80c, 0xa822}, {0xa840, 0xa873}, {0xa882, 0xa8b3}, {0xa8f2, 0xa8f7}, {0xa8fb, 0xa8fb}, {0xa8fd, 0xa8fe}, {0xa90a, 0xa925}, {0xa930, 0xa946},
  {0xa960, 0xa97c}, {0xa984, 0xa9b2}, {0xa9cf, 0xa9cf}, {0xa9e0, 0xa9e4}, {0xa9e6, 0xa9ef}, {0xa9fa, 0xa9fe}, {0xaa00, 0xaa28}, {0xaa40, 0xaa42},
  {0xaa44, 0xaa4b}, {0xaa60, 0xaa76}, {0xaa7a, 0xaa7a}, {0xaa7e, 0xaaaf}, {0xaab1, 0xaab1}, {0xaab5, 0xaab6}, {0xaab9, 0xaabd}, {0xaac0, 0xaac0},
  {0xaac2, 0xaac2}, {0xaadb, 0xaadd}, {0xaae0, 0xaaea}, {0xaaf2, 0xaaf4}, {0xab01, 0xab06}, {0xab09, 0xab0e}, {0xab11, 0xab16}, {0xab20, 0xab26},
  {0xab28, 0xab2e}, {0xab30, 0xab5a}, {0xab5c, 0xab69}, {0xab70, 0xabe2}, {0xac00, 0xac00}, {0xd7a3, 0xd7a3}, {0xd7b0, 0xd7c6}, {0xd7cb, 0xd7fb},
  {0xf900, 0xfa6d}, {0xfa70, 0xfad9}, {0xfb00, 0xfb06}, {0xfb13, 0xfb17}, {0xfb1d, 0xfb1d}, {0xfb1f, 0xfb28}, {0xfb2a, 0xfb36}, {0xfb38, 0xfb3c},
  {0xfb3e, 0xfb3e}, {0xfb40, 0xfb41}, {0xfb43, 0xfb44}, {0xfb46, 0xfbb1}, {0xfbd3, 0xfd3d}, {0xfd50, 0xfd8f}, {0xfd92, 0xfdc7}, {0xfdf0, 0xfdfb},
  {0xfe70, 0xfe74}, {0xfe76, 0xfefc}, {0xff21, 0xff3a}, {0xff41, 0xff5a}, {0xff66, 0xffbe}, {0xffc2, 0xffc7}, {0xffca, 0xffcf}, {0xffd2, 0xffd7},
  {0xffda, 0xffdc}, {0x10000, 0x1000b}, {0x1000d, 0x10026}, {0x10028, 0x1003a}, {0x1003c, 0x1003d}, {0x1003f, 0x1004d}, {0x10050, 0x1005d}, {0x10080, 0x100fa},
  {0x10280, 0x1029c}, {0x102a0, 0x102d0}, {0x10300, 0x1031f}, {0x1032d, 0x10340}, {0x10342, 0x10349}, {0x10350, 0x10375}, {0x10380, 0x1039d}, {0x103a0, 0x103c3},
  {0x103c8, 0x103cf}, {0x10400, 0x1049d}, {0x104b0, 0x104d3}, {0x104d8, 0x104fb}, {0x10500, 0x10527}, {0x10530, 0x10563}, {0x10570, 0x1057a}, {0x1057c, 0x1058a},
  {0x1058c, 0x10592}, {0x10594, 0x10595}, {0x10597, 0x105a1}, {0x105a3, 0x105b1}, {0x105b3, 0x105b9}, {0x105bb, 0x105bc}, {0x10600, 0x10736}, {0x10740, 0x10755},
  {0x10760, 0x10767}, {0x10780, 0x10785}, {0x10787, 0x107b0}, {0x107b2, 0x107ba}, {0x10800, 0x10805}, {0x10808, 0x10808}, {0x1080a, 0x10835}, {0x10837, 0x10838},
  {0x1083c, 0x1083c}, {0x1083f, 0x10855}, {0x10860, 0x10876}, {0x10880, 0x1089e}, {0x108e0, 0x108f2}, {0x108f4, 0x108f5}, {0x10900, 0x10915},
};

static TSCharacterRange aux_sym_identifier_token2_character_set_1[] = {
  {'0', '9'}, {'@', 'Z'}, {'_', '_'}, {'a', 'z'}, {0xaa, 0xaa}, {0xb5, 0xb5}, {0xba, 0xba}, {0xc0, 0xd6},
  {0xd8, 0xf6}, {0xf8, 0x2c1}, {0x2c6, 0x2d1}, {0x2e0, 0x2e4}, {0x2ec, 0x2ec}, {0x2ee, 0x2ee}, {0x370, 0x374}, {0x376, 0x377},
  {0x37a, 0x37d}, {0x37f, 0x37f}, {0x386, 0x386}, {0x388, 0x38a}, {0x38c, 0x38c}, {0x38e, 0x3a1}, {0x3a3, 0x3f5}, {0x3f7, 0x481},
  {0x48a, 0x52f}, {0x531, 0x556}, {0x559, 0x559}, {0x560, 0x588}, {0x5d0, 0x5ea}, {0x5ef, 0x5f2}, {0x620, 0x64a}, {0x66e, 0x66f},
  {0x671, 0x6d3}, {0x6d5, 0x6d5}, {0x6e5, 0x6e6}, {0x6ee, 0x6ef}, {0x6fa, 0x6fc}, {0x6ff, 0x6ff}, {0x710, 0x710}, {0x712, 0x72f},
  {0x74d, 0x7a5}, {0x7b1, 0x7b1}, {0x7ca, 0x7ea}, {0x7f4, 0x7f5}, {0x7fa, 0x7fa}, {0x800, 0x815}, {0x81a, 0x81a}, {0x824, 0x824},
  {0x828, 0x828}, {0x840, 0x858}, {0x860, 0x86a}, {0x870, 0x887}, {0x889, 0x88e}, {0x8a0, 0x8c9}, {0x904, 0x939}, {0x93d, 0x93d},
  {0x950, 0x950}, {0x958, 0x961}, {0x971, 0x980}, {0x985, 0x98c}, {0x98f, 0x990}, {0x993, 0x9a8}, {0x9aa, 0x9b0}, {0x9b2, 0x9b2},
  {0x9b6, 0x9b9}, {0x9bd, 0x9bd}, {0x9ce, 0x9ce}, {0x9dc, 0x9dd}, {0x9df, 0x9e1}, {0x9f0, 0x9f1}, {0x9fc, 0x9fc}, {0xa05, 0xa0a},
  {0xa0f, 0xa10}, {0xa13, 0xa28}, {0xa2a, 0xa30}, {0xa32, 0xa33}, {0xa35, 0xa36}, {0xa38, 0xa39}, {0xa59, 0xa5c}, {0xa5e, 0xa5e},
  {0xa72, 0xa74}, {0xa85, 0xa8d}, {0xa8f, 0xa91}, {0xa93, 0xaa8}, {0xaaa, 0xab0}, {0xab2, 0xab3}, {0xab5, 0xab9}, {0xabd, 0xabd},
  {0xad0, 0xad0}, {0xae0, 0xae1}, {0xaf9, 0xaf9}, {0xb05, 0xb0c}, {0xb0f, 0xb10}, {0xb13, 0xb28}, {0xb2a, 0xb30}, {0xb32, 0xb33},
  {0xb35, 0xb39}, {0xb3d, 0xb3d}, {0xb5c, 0xb5d}, {0xb5f, 0xb61}, {0xb71, 0xb71}, {0xb83, 0xb83}, {0xb85, 0xb8a}, {0xb8e, 0xb90},
  {0xb92, 0xb95}, {0xb99, 0xb9a}, {0xb9c, 0xb9c}, {0xb9e, 0xb9f}, {0xba3, 0xba4}, {0xba8, 0xbaa}, {0xbae, 0xbb9}, {0xbd0, 0xbd0},
  {0xc05, 0xc0c}, {0xc0e, 0xc10}, {0xc12, 0xc28}, {0xc2a, 0xc39}, {0xc3d, 0xc3d}, {0xc58, 0xc5a}, {0xc5d, 0xc5d}, {0xc60, 0xc61},
  {0xc80, 0xc80}, {0xc85, 0xc8c}, {0xc8e, 0xc90}, {0xc92, 0xca8}, {0xcaa, 0xcb3}, {0xcb5, 0xcb9}, {0xcbd, 0xcbd}, {0xcdd, 0xcde},
  {0xce0, 0xce1}, {0xcf1, 0xcf2}, {0xd04, 0xd0c}, {0xd0e, 0xd10}, {0xd12, 0xd3a}, {0xd3d, 0xd3d}, {0xd4e, 0xd4e}, {0xd54, 0xd56},
  {0xd5f, 0xd61}, {0xd7a, 0xd7f}, {0xd85, 0xd96}, {0xd9a, 0xdb1}, {0xdb3, 0xdbb}, {0xdbd, 0xdbd}, {0xdc0, 0xdc6}, {0xe01, 0xe30},
  {0xe32, 0xe33}, {0xe40, 0xe46}, {0xe81, 0xe82}, {0xe84, 0xe84}, {0xe86, 0xe8a}, {0xe8c, 0xea3}, {0xea5, 0xea5}, {0xea7, 0xeb0},
  {0xeb2, 0xeb3}, {0xebd, 0xebd}, {0xec0, 0xec4}, {0xec6, 0xec6}, {0xedc, 0xedf}, {0xf00, 0xf00}, {0xf40, 0xf47}, {0xf49, 0xf6c},
  {0xf88, 0xf8c}, {0x1000, 0x102a}, {0x103f, 0x103f}, {0x1050, 0x1055}, {0x105a, 0x105d}, {0x1061, 0x1061}, {0x1065, 0x1066}, {0x106e, 0x1070},
  {0x1075, 0x1081}, {0x108e, 0x108e}, {0x10a0, 0x10c5}, {0x10c7, 0x10c7}, {0x10cd, 0x10cd}, {0x10d0, 0x10fa}, {0x10fc, 0x1248}, {0x124a, 0x124d},
  {0x1250, 0x1256}, {0x1258, 0x1258}, {0x125a, 0x125d}, {0x1260, 0x1288}, {0x128a, 0x128d}, {0x1290, 0x12b0}, {0x12b2, 0x12b5}, {0x12b8, 0x12be},
  {0x12c0, 0x12c0}, {0x12c2, 0x12c5}, {0x12c8, 0x12d6}, {0x12d8, 0x1310}, {0x1312, 0x1315}, {0x1318, 0x135a}, {0x1380, 0x138f}, {0x13a0, 0x13f5},
  {0x13f8, 0x13fd}, {0x1401, 0x166c}, {0x166f, 0x167f}, {0x1681, 0x169a}, {0x16a0, 0x16ea}, {0x16f1, 0x16f8}, {0x1700, 0x1711}, {0x171f, 0x1731},
  {0x1740, 0x1751}, {0x1760, 0x176c}, {0x176e, 0x1770}, {0x1780, 0x17b3}, {0x17d7, 0x17d7}, {0x17dc, 0x17dc}, {0x1820, 0x1878}, {0x1880, 0x1884},
  {0x1887, 0x18a8}, {0x18aa, 0x18aa}, {0x18b0, 0x18f5}, {0x1900, 0x191e}, {0x1950, 0x196d}, {0x1970, 0x1974}, {0x1980, 0x19ab}, {0x19b0, 0x19c9},
  {0x1a00, 0x1a16}, {0x1a20, 0x1a54}, {0x1aa7, 0x1aa7}, {0x1b05, 0x1b33}, {0x1b45, 0x1b4c}, {0x1b83, 0x1ba0}, {0x1bae, 0x1baf}, {0x1bba, 0x1be5},
  {0x1c00, 0x1c23}, {0x1c4d, 0x1c4f}, {0x1c5a, 0x1c7d}, {0x1c80, 0x1c88}, {0x1c90, 0x1cba}, {0x1cbd, 0x1cbf}, {0x1ce9, 0x1cec}, {0x1cee, 0x1cf3},
  {0x1cf5, 0x1cf6}, {0x1cfa, 0x1cfa}, {0x1d00, 0x1dbf}, {0x1e00, 0x1f15}, {0x1f18, 0x1f1d}, {0x1f20, 0x1f45}, {0x1f48, 0x1f4d}, {0x1f50, 0x1f57},
  {0x1f59, 0x1f59}, {0x1f5b, 0x1f5b}, {0x1f5d, 0x1f5d}, {0x1f5f, 0x1f7d}, {0x1f80, 0x1fb4}, {0x1fb6, 0x1fbc}, {0x1fbe, 0x1fbe}, {0x1fc2, 0x1fc4},
  {0x1fc6, 0x1fcc}, {0x1fd0, 0x1fd3}, {0x1fd6, 0x1fdb}, {0x1fe0, 0x1fec}, {0x1ff2, 0x1ff4}, {0x1ff6, 0x1ffc}, {0x2071, 0x2071}, {0x207f, 0x207f},
  {0x2090, 0x209c}, {0x2102, 0x2102}, {0x2107, 0x2107}, {0x210a, 0x2113}, {0x2115, 0x2115}, {0x2119, 0x211d}, {0x2124, 0x2124}, {0x2126, 0x2126},
  {0x2128, 0x2128}, {0x212a, 0x212d}, {0x212f, 0x2139}, {0x213c, 0x213f}, {0x2145, 0x2149}, {0x214e, 0x214e}, {0x2183, 0x2184}, {0x2c00, 0x2ce4},
  {0x2ceb, 0x2cee}, {0x2cf2, 0x2cf3}, {0x2d00, 0x2d25}, {0x2d27, 0x2d27}, {0x2d2d, 0x2d2d}, {0x2d30, 0x2d67}, {0x2d6f, 0x2d6f}, {0x2d80, 0x2d96},
  {0x2da0, 0x2da6}, {0x2da8, 0x2dae}, {0x2db0, 0x2db6}, {0x2db8, 0x2dbe}, {0x2dc0, 0x2dc6}, {0x2dc8, 0x2dce}, {0x2dd0, 0x2dd6}, {0x2dd8, 0x2dde},
  {0x2e2f, 0x2e2f}, {0x3005, 0x3006}, {0x3031, 0x3035}, {0x303b, 0x303c}, {0x3041, 0x3096}, {0x309d, 0x309f}, {0x30a1, 0x30fa}, {0x30fc, 0x30ff},
  {0x3105, 0x312f}, {0x3131, 0x318e}, {0x31a0, 0x31bf}, {0x31f0, 0x31ff}, {0x3400, 0x3400}, {0x4dbf, 0x4dbf}, {0x4e00, 0x4e00}, {0x9fff, 0xa48c},
  {0xa4d0, 0xa4fd}, {0xa500, 0xa60c}, {0xa610, 0xa61f}, {0xa62a, 0xa62b}, {0xa640, 0xa66e}, {0xa67f, 0xa69d}, {0xa6a0, 0xa6e5}, {0xa717, 0xa71f},
  {0xa722, 0xa788}, {0xa78b, 0xa7ca}, {0xa7d0, 0xa7d1}, {0xa7d3, 0xa7d3}, {0xa7d5, 0xa7d9}, {0xa7f2, 0xa801}, {0xa803, 0xa805}, {0xa807, 0xa80a},
  {0xa80c, 0xa822}, {0xa840, 0xa873}, {0xa882, 0xa8b3}, {0xa8f2, 0xa8f7}, {0xa8fb, 0xa8fb}, {0xa8fd, 0xa8fe}, {0xa90a, 0xa925}, {0xa930, 0xa946},
  {0xa960, 0xa97c}, {0xa984, 0xa9b2}, {0xa9cf, 0xa9cf}, {0xa9e0, 0xa9e4}, {0xa9e6, 0xa9ef}, {0xa9fa, 0xa9fe}, {0xaa00, 0xaa28}, {0xaa40, 0xaa42},
  {0xaa44, 0xaa4b}, {0xaa60, 0xaa76}, {0xaa7a, 0xaa7a}, {0xaa7e, 0xaaaf}, {0xaab1, 0xaab1}, {0xaab5, 0xaab6}, {0xaab9, 0xaabd}, {0xaac0, 0xaac0},
  {0xaac2, 0xaac2}, {0xaadb, 0xaadd}, {0xaae0, 0xaaea}, {0xaaf2, 0xaaf4}, {0xab01, 0xab06}, {0xab09, 0xab0e}, {0xab11, 0xab16}, {0xab20, 0xab26},
  {0xab28, 0xab2e}, {0xab30, 0xab5a}, {0xab5c, 0xab69}, {0xab70, 0xabe2}, {0xac00, 0xac00}, {0xd7a3, 0xd7a3}, {0xd7b0, 0xd7c6}, {0xd7cb, 0xd7fb},
  {0xf900, 0xfa6d}, {0xfa70, 0xfad9}, {0xfb00, 0xfb06}, {0xfb13, 0xfb17}, {0xfb1d, 0xfb1d}, {0xfb1f, 0xfb28}, {0xfb2a, 0xfb36}, {0xfb38, 0xfb3c},
  {0xfb3e, 0xfb3e}, {0xfb40, 0xfb41}, {0xfb43, 0xfb44}, {0xfb46, 0xfbb1}, {0xfbd3, 0xfd3d}, {0xfd50, 0xfd8f}, {0xfd92, 0xfdc7}, {0xfdf0, 0xfdfb},
  {0xfe70, 0xfe74}, {0xfe76, 0xfefc}, {0xff21, 0xff3a}, {0xff41, 0xff5a}, {0xff66, 0xffbe}, {0xffc2, 0xffc7}, {0xffca, 0xffcf}, {0xffd2, 0xffd7},
  {0xffda, 0xffdc}, {0x10000, 0x1000b}, {0x1000d, 0x10026}, {0x10028, 0x1003a}, {0x1003c, 0x1003d}, {0x1003f, 0x1004d}, {0x10050, 0x1005d}, {0x10080, 0x100fa},
  {0x10280, 0x1029c}, {0x102a0, 0x102d0}, {0x10300, 0x1031f}, {0x1032d, 0x10340}, {0x10342, 0x10349}, {0x10350, 0x10375}, {0x10380, 0x1039d}, {0x103a0, 0x103c3},
  {0x103c8, 0x103cf}, {0x10400, 0x1049d}, {0x104b0, 0x104d3}, {0x104d8, 0x104fb}, {0x10500, 0x10527}, {0x10530, 0x10563}, {0x10570, 0x1057a}, {0x1057c, 0x1058a},
  {0x1058c, 0x10592}, {0x10594, 0x10595}, {0x10597, 0x105a1}, {0x105a3, 0x105b1}, {0x105b3, 0x105b9}, {0x105bb, 0x105bc}, {0x10600, 0x10736}, {0x10740, 0x10755},
  {0x10760, 0x10767}, {0x10780, 0x10785}, {0x10787, 0x107b0}, {0x107b2, 0x107ba}, {0x10800, 0x10805}, {0x10808, 0x10808}, {0x1080a, 0x10835}, {0x10837, 0x10838},
  {0x1083c, 0x1083c}, {0x1083f, 0x10855}, {0x10860, 0x10876}, {0x10880, 0x1089e}, {0x108e0, 0x108f2}, {0x108f4, 0x108f5}, {0x10900, 0x10915},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(265);
      ADVANCE_MAP(
        '!', 301,
        '#', 4,
        '(', 279,
        ')', 280,
        '*', 374,
        ',', 281,
        '.', 305,
        '/', 11,
        ':', 16,
        '=', 17,
        '?', 300,
        '@', 299,
        '[', 373,
        ']', 307,
        '_', 312,
        'c', 375,
        '$', 311,
        '-', 311,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      if (set_contains(aux_sym_identifier_token2_character_set_1, 431, lookahead)) ADVANCE(286);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(308);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(309);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(301);
      if (lookahead == '(') ADVANCE(279);
      if (lookahead == ')') ADVANCE(280);
      if (lookahead == ',') ADVANCE(281);
      if (lookahead == ':') ADVANCE(16);
      if (lookahead == '?') ADVANCE(300);
      if (lookahead == ']') ADVANCE(307);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (set_contains(aux_sym_identifier_token2_character_set_1, 431, lookahead)) ADVANCE(299);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(119);
      if (lookahead == ')') ADVANCE(280);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (set_contains(aux_sym_identifier_token1_character_set_1, 431, lookahead)) ADVANCE(286);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '(', 304,
        '[', 306,
        'a', 124,
        'f', 303,
        'i', 143,
        'k', 48,
        'n', 49,
        'r', 50,
        't', 302,
      );
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(374);
      if (lookahead == '0') ADVANCE(291);
      if (lookahead == ']') ADVANCE(307);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(298);
      if (set_contains(aux_sym_identifier_token1_character_set_1, 431, lookahead)) ADVANCE(286);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(120);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(188);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(115);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(117);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(118);
      END_STATE();
    case 11:
      if (lookahead == '/') ADVANCE(267);
      END_STATE();
    case 12:
      if (lookahead == '2') ADVANCE(15);
      if (lookahead == '6') ADVANCE(353);
      END_STATE();
    case 13:
      if (lookahead == '2') ADVANCE(354);
      END_STATE();
    case 14:
      if (lookahead == '4') ADVANCE(355);
      END_STATE();
    case 15:
      if (lookahead == '8') ADVANCE(356);
      END_STATE();
    case 16:
      if (lookahead == ':') ADVANCE(284);
      END_STATE();
    case 17:
      if (lookahead == '>') ADVANCE(278);
      END_STATE();
    case 18:
      ADVANCE_MAP(
        '?', 300,
        '[', 373,
        'a', 292,
        'b', 295,
        'c', 290,
        'f', 287,
        'i', 288,
        'n', 294,
        't', 297,
        'u', 289,
        'v', 296,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(18);
      if (set_contains(aux_sym_identifier_token1_character_set_1, 431, lookahead)) ADVANCE(286);
      END_STATE();
    case 19:
      ADVANCE_MAP(
        '?', 300,
        '[', 373,
        'a', 293,
        'b', 295,
        'c', 290,
        'f', 287,
        'i', 288,
        'n', 294,
        't', 297,
        'u', 289,
        'v', 296,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(19);
      if (set_contains(aux_sym_identifier_token1_character_set_1, 431, lookahead)) ADVANCE(286);
      END_STATE();
    case 20:
      if (lookahead == ']') ADVANCE(307);
      if (lookahead == 'c') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(20);
      END_STATE();
    case 21:
      if (lookahead == '_') ADVANCE(83);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(141);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(33);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(253);
      if (lookahead == 'e') ADVANCE(233);
      if (lookahead == 'o') ADVANCE(44);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(203);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(229);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(255);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(105);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(239);
      if (lookahead == 'i') ADVANCE(162);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(129);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(256);
      END_STATE();
    case 32:
      if (lookahead == 'b') ADVANCE(202);
      END_STATE();
    case 33:
      if (lookahead == 'b') ADVANCE(132);
      END_STATE();
    case 34:
      if (lookahead == 'b') ADVANCE(133);
      END_STATE();
    case 35:
      if (lookahead == 'c') ADVANCE(320);
      END_STATE();
    case 36:
      if (lookahead == 'c') ADVANCE(330);
      END_STATE();
    case 37:
      if (lookahead == 'c') ADVANCE(122);
      END_STATE();
    case 38:
      if (lookahead == 'c') ADVANCE(234);
      END_STATE();
    case 39:
      if (lookahead == 'c') ADVANCE(240);
      END_STATE();
    case 40:
      if (lookahead == 'd') ADVANCE(316);
      END_STATE();
    case 41:
      if (lookahead == 'd') ADVANCE(317);
      END_STATE();
    case 42:
      if (lookahead == 'd') ADVANCE(360);
      END_STATE();
    case 43:
      if (lookahead == 'd') ADVANCE(352);
      END_STATE();
    case 44:
      if (lookahead == 'd') ADVANCE(242);
      END_STATE();
    case 45:
      if (lookahead == 'd') ADVANCE(51);
      END_STATE();
    case 46:
      if (lookahead == 'd') ADVANCE(55);
      END_STATE();
    case 47:
      if (lookahead == 'd') ADVANCE(81);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(248);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(246);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(217);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(315);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(82);
      if (lookahead == 'o') ADVANCE(139);
      if (lookahead == 'y') ADVANCE(153);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(30);
      if (lookahead == 'i') ADVANCE(46);
      if (lookahead == 'y') ADVANCE(152);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(200);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(244);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(277);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(325);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(269);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(275);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(326);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(327);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(323);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(362);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(341);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(342);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(285);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(351);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(252);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(160);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(213);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(144);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(201);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(206);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(206);
      if (lookahead == 't') ADVANCE(258);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(230);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(148);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(205);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(245);
      END_STATE();
    case 82:
      if (lookahead == 'f') ADVANCE(29);
      END_STATE();
    case 83:
      if (lookahead == 'f') ADVANCE(128);
      if (lookahead == 'i') ADVANCE(163);
      END_STATE();
    case 84:
      if (lookahead == 'g') ADVANCE(347);
      END_STATE();
    case 85:
      if (lookahead == 'g') ADVANCE(348);
      END_STATE();
    case 86:
      if (lookahead == 'g') ADVANCE(349);
      END_STATE();
    case 87:
      if (lookahead == 'g') ADVANCE(350);
      END_STATE();
    case 88:
      if (lookahead == 'g') ADVANCE(91);
      END_STATE();
    case 89:
      if (lookahead == 'h') ADVANCE(175);
      END_STATE();
    case 90:
      if (lookahead == 'h') ADVANCE(172);
      END_STATE();
    case 91:
      if (lookahead == 'h') ADVANCE(223);
      END_STATE();
    case 92:
      if (lookahead == 'h') ADVANCE(181);
      END_STATE();
    case 93:
      if (lookahead == 'h') ADVANCE(190);
      END_STATE();
    case 94:
      if (lookahead == 'i') ADVANCE(32);
      END_STATE();
    case 95:
      if (lookahead == 'i') ADVANCE(88);
      END_STATE();
    case 96:
      if (lookahead == 'i') ADVANCE(259);
      END_STATE();
    case 97:
      if (lookahead == 'i') ADVANCE(127);
      if (lookahead == 'u') ADVANCE(151);
      END_STATE();
    case 98:
      if (lookahead == 'i') ADVANCE(35);
      END_STATE();
    case 99:
      if (lookahead == 'i') ADVANCE(142);
      END_STATE();
    case 100:
      if (lookahead == 'i') ADVANCE(36);
      END_STATE();
    case 101:
      if (lookahead == 'i') ADVANCE(42);
      END_STATE();
    case 102:
      if (lookahead == 'i') ADVANCE(215);
      END_STATE();
    case 103:
      if (lookahead == 'i') ADVANCE(43);
      END_STATE();
    case 104:
      if (lookahead == 'i') ADVANCE(179);
      END_STATE();
    case 105:
      if (lookahead == 'i') ADVANCE(145);
      END_STATE();
    case 106:
      if (lookahead == 'i') ADVANCE(159);
      if (lookahead == 'l') ADVANCE(182);
      if (lookahead == 's') ADVANCE(92);
      if (lookahead == 'u') ADVANCE(107);
      if (lookahead == 'v') ADVANCE(184);
      END_STATE();
    case 107:
      if (lookahead == 'i') ADVANCE(161);
      if (lookahead == 'l') ADVANCE(185);
      if (lookahead == 's') ADVANCE(93);
      END_STATE();
    case 108:
      if (lookahead == 'i') ADVANCE(260);
      END_STATE();
    case 109:
      if (lookahead == 'i') ADVANCE(180);
      END_STATE();
    case 110:
      if (lookahead == 'i') ADVANCE(164);
      END_STATE();
    case 111:
      if (lookahead == 'i') ADVANCE(131);
      END_STATE();
    case 112:
      if (lookahead == 'i') ADVANCE(165);
      END_STATE();
    case 113:
      if (lookahead == 'i') ADVANCE(166);
      END_STATE();
    case 114:
      if (lookahead == 'i') ADVANCE(167);
      END_STATE();
    case 115:
      if (lookahead == 'i') ADVANCE(168);
      END_STATE();
    case 116:
      if (lookahead == 'i') ADVANCE(47);
      END_STATE();
    case 117:
      if (lookahead == 'i') ADVANCE(169);
      END_STATE();
    case 118:
      if (lookahead == 'i') ADVANCE(170);
      END_STATE();
    case 119:
      if (lookahead == 'k') ADVANCE(48);
      if (lookahead == 'r') ADVANCE(50);
      END_STATE();
    case 120:
      if (lookahead == 'k') ADVANCE(70);
      END_STATE();
    case 121:
      if (lookahead == 'l') ADVANCE(6);
      END_STATE();
    case 122:
      if (lookahead == 'l') ADVANCE(237);
      END_STATE();
    case 123:
      if (lookahead == 'l') ADVANCE(359);
      END_STATE();
    case 124:
      if (lookahead == 'l') ADVANCE(121);
      END_STATE();
    case 125:
      if (lookahead == 'l') ADVANCE(110);
      END_STATE();
    case 126:
      if (lookahead == 'l') ADVANCE(250);
      END_STATE();
    case 127:
      if (lookahead == 'l') ADVANCE(72);
      END_STATE();
    case 128:
      if (lookahead == 'l') ADVANCE(177);
      END_STATE();
    case 129:
      if (lookahead == 'l') ADVANCE(73);
      END_STATE();
    case 130:
      if (lookahead == 'l') ADVANCE(58);
      END_STATE();
    case 131:
      if (lookahead == 'l') ADVANCE(75);
      END_STATE();
    case 132:
      if (lookahead == 'l') ADVANCE(59);
      END_STATE();
    case 133:
      if (lookahead == 'l') ADVANCE(68);
      END_STATE();
    case 134:
      if (lookahead == 'l') ADVANCE(112);
      END_STATE();
    case 135:
      if (lookahead == 'l') ADVANCE(113);
      END_STATE();
    case 136:
      if (lookahead == 'l') ADVANCE(114);
      END_STATE();
    case 137:
      if (lookahead == 'l') ADVANCE(236);
      END_STATE();
    case 138:
      if (lookahead == 'm') ADVANCE(191);
      if (lookahead == 'p') ADVANCE(254);
      END_STATE();
    case 139:
      if (lookahead == 'm') ADVANCE(28);
      END_STATE();
    case 140:
      if (lookahead == 'm') ADVANCE(197);
      END_STATE();
    case 141:
      if (lookahead == 'm') ADVANCE(98);
      END_STATE();
    case 142:
      if (lookahead == 'm') ADVANCE(67);
      END_STATE();
    case 143:
      if (lookahead == 'n') ADVANCE(37);
      END_STATE();
    case 144:
      if (lookahead == 'n') ADVANCE(318);
      END_STATE();
    case 145:
      if (lookahead == 'n') ADVANCE(328);
      END_STATE();
    case 146:
      if (lookahead == 'n') ADVANCE(273);
      END_STATE();
    case 147:
      if (lookahead == 'n') ADVANCE(329);
      END_STATE();
    case 148:
      if (lookahead == 'n') ADVANCE(322);
      END_STATE();
    case 149:
      if (lookahead == 'n') ADVANCE(361);
      END_STATE();
    case 150:
      if (lookahead == 'n') ADVANCE(84);
      END_STATE();
    case 151:
      if (lookahead == 'n') ADVANCE(38);
      END_STATE();
    case 152:
      if (lookahead == 'n') ADVANCE(173);
      END_STATE();
    case 153:
      if (lookahead == 'n') ADVANCE(22);
      END_STATE();
    case 154:
      if (lookahead == 'n') ADVANCE(85);
      END_STATE();
    case 155:
      if (lookahead == 'n') ADVANCE(86);
      END_STATE();
    case 156:
      if (lookahead == 'n') ADVANCE(125);
      END_STATE();
    case 157:
      if (lookahead == 'n') ADVANCE(87);
      END_STATE();
    case 158:
      if (lookahead == 'n') ADVANCE(126);
      END_STATE();
    case 159:
      if (lookahead == 'n') ADVANCE(224);
      END_STATE();
    case 160:
      if (lookahead == 'n') ADVANCE(80);
      END_STATE();
    case 161:
      if (lookahead == 'n') ADVANCE(225);
      END_STATE();
    case 162:
      if (lookahead == 'n') ADVANCE(56);
      END_STATE();
    case 163:
      if (lookahead == 'n') ADVANCE(228);
      END_STATE();
    case 164:
      if (lookahead == 'n') ADVANCE(57);
      END_STATE();
    case 165:
      if (lookahead == 'n') ADVANCE(60);
      END_STATE();
    case 166:
      if (lookahead == 'n') ADVANCE(61);
      END_STATE();
    case 167:
      if (lookahead == 'n') ADVANCE(62);
      END_STATE();
    case 168:
      if (lookahead == 'n') ADVANCE(134);
      END_STATE();
    case 169:
      if (lookahead == 'n') ADVANCE(135);
      END_STATE();
    case 170:
      if (lookahead == 'n') ADVANCE(136);
      END_STATE();
    case 171:
      if (lookahead == 'o') ADVANCE(138);
      END_STATE();
    case 172:
      if (lookahead == 'o') ADVANCE(40);
      END_STATE();
    case 173:
      if (lookahead == 'o') ADVANCE(196);
      END_STATE();
    case 174:
      if (lookahead == 'o') ADVANCE(235);
      END_STATE();
    case 175:
      if (lookahead == 'o') ADVANCE(198);
      END_STATE();
    case 176:
      if (lookahead == 'o') ADVANCE(243);
      END_STATE();
    case 177:
      if (lookahead == 'o') ADVANCE(26);
      END_STATE();
    case 178:
      if (lookahead == 'o') ADVANCE(123);
      END_STATE();
    case 179:
      if (lookahead == 'o') ADVANCE(146);
      END_STATE();
    case 180:
      if (lookahead == 'o') ADVANCE(147);
      END_STATE();
    case 181:
      if (lookahead == 'o') ADVANCE(207);
      END_STATE();
    case 182:
      if (lookahead == 'o') ADVANCE(150);
      END_STATE();
    case 183:
      if (lookahead == 'o') ADVANCE(199);
      END_STATE();
    case 184:
      if (lookahead == 'o') ADVANCE(103);
      END_STATE();
    case 185:
      if (lookahead == 'o') ADVANCE(154);
      END_STATE();
    case 186:
      if (lookahead == 'o') ADVANCE(155);
      END_STATE();
    case 187:
      if (lookahead == 'o') ADVANCE(157);
      END_STATE();
    case 188:
      if (lookahead == 'o') ADVANCE(193);
      if (lookahead == 's') ADVANCE(116);
      END_STATE();
    case 189:
      if (lookahead == 'o') ADVANCE(158);
      END_STATE();
    case 190:
      if (lookahead == 'o') ADVANCE(208);
      END_STATE();
    case 191:
      if (lookahead == 'p') ADVANCE(111);
      END_STATE();
    case 192:
      if (lookahead == 'p') ADVANCE(74);
      END_STATE();
    case 193:
      if (lookahead == 'p') ADVANCE(79);
      END_STATE();
    case 194:
      if (lookahead == 'p') ADVANCE(63);
      END_STATE();
    case 195:
      if (lookahead == 'p') ADVANCE(66);
      END_STATE();
    case 196:
      if (lookahead == 'p') ADVANCE(219);
      END_STATE();
    case 197:
      if (lookahead == 'p') ADVANCE(232);
      END_STATE();
    case 198:
      if (lookahead == 'r') ADVANCE(271);
      END_STATE();
    case 199:
      if (lookahead == 'r') ADVANCE(363);
      END_STATE();
    case 200:
      if (lookahead == 'r') ADVANCE(218);
      END_STATE();
    case 201:
      if (lookahead == 'r') ADVANCE(7);
      END_STATE();
    case 202:
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 203:
      if (lookahead == 'r') ADVANCE(249);
      END_STATE();
    case 204:
      if (lookahead == 'r') ADVANCE(95);
      END_STATE();
    case 205:
      if (lookahead == 'r') ADVANCE(100);
      END_STATE();
    case 206:
      if (lookahead == 'r') ADVANCE(211);
      END_STATE();
    case 207:
      if (lookahead == 'r') ADVANCE(226);
      END_STATE();
    case 208:
      if (lookahead == 'r') ADVANCE(227);
      END_STATE();
    case 209:
      if (lookahead == 'r') ADVANCE(149);
      END_STATE();
    case 210:
      if (lookahead == 'r') ADVANCE(78);
      END_STATE();
    case 211:
      if (lookahead == 'r') ADVANCE(183);
      END_STATE();
    case 212:
      if (lookahead == 's') ADVANCE(314);
      END_STATE();
    case 213:
      if (lookahead == 's') ADVANCE(274);
      END_STATE();
    case 214:
      if (lookahead == 's') ADVANCE(319);
      END_STATE();
    case 215:
      if (lookahead == 's') ADVANCE(270);
      END_STATE();
    case 216:
      if (lookahead == 's') ADVANCE(321);
      END_STATE();
    case 217:
      if (lookahead == 's') ADVANCE(221);
      END_STATE();
    case 218:
      if (lookahead == 's') ADVANCE(104);
      END_STATE();
    case 219:
      if (lookahead == 's') ADVANCE(102);
      END_STATE();
    case 220:
      if (lookahead == 't') ADVANCE(313);
      END_STATE();
    case 221:
      if (lookahead == 't') ADVANCE(283);
      END_STATE();
    case 222:
      if (lookahead == 't') ADVANCE(89);
      END_STATE();
    case 223:
      if (lookahead == 't') ADVANCE(272);
      END_STATE();
    case 224:
      if (lookahead == 't') ADVANCE(345);
      END_STATE();
    case 225:
      if (lookahead == 't') ADVANCE(346);
      END_STATE();
    case 226:
      if (lookahead == 't') ADVANCE(343);
      END_STATE();
    case 227:
      if (lookahead == 't') ADVANCE(344);
      END_STATE();
    case 228:
      if (lookahead == 't') ADVANCE(357);
      END_STATE();
    case 229:
      if (lookahead == 't') ADVANCE(358);
      END_STATE();
    case 230:
      if (lookahead == 't') ADVANCE(241);
      END_STATE();
    case 231:
      if (lookahead == 't') ADVANCE(23);
      END_STATE();
    case 232:
      if (lookahead == 't') ADVANCE(99);
      END_STATE();
    case 233:
      if (lookahead == 't') ADVANCE(90);
      END_STATE();
    case 234:
      if (lookahead == 't') ADVANCE(109);
      END_STATE();
    case 235:
      if (lookahead == 't') ADVANCE(9);
      END_STATE();
    case 236:
      if (lookahead == 't') ADVANCE(10);
      END_STATE();
    case 237:
      if (lookahead == 'u') ADVANCE(45);
      END_STATE();
    case 238:
      if (lookahead == 'u') ADVANCE(222);
      END_STATE();
    case 239:
      if (lookahead == 'u') ADVANCE(137);
      END_STATE();
    case 240:
      if (lookahead == 'u') ADVANCE(231);
      END_STATE();
    case 241:
      if (lookahead == 'u') ADVANCE(209);
      END_STATE();
    case 242:
      if (lookahead == 'u') ADVANCE(130);
      END_STATE();
    case 243:
      if (lookahead == 'u') ADVANCE(34);
      END_STATE();
    case 244:
      if (lookahead == 'w') ADVANCE(27);
      END_STATE();
    case 245:
      if (lookahead == 'w') ADVANCE(31);
      END_STATE();
    case 246:
      if (lookahead == 'x') ADVANCE(220);
      END_STATE();
    case 247:
      if (lookahead == 'x') ADVANCE(69);
      END_STATE();
    case 248:
      if (lookahead == 'y') ADVANCE(282);
      END_STATE();
    case 249:
      if (lookahead == 'y') ADVANCE(276);
      END_STATE();
    case 250:
      if (lookahead == 'y') ADVANCE(324);
      END_STATE();
    case 251:
      if (lookahead == 'y') ADVANCE(77);
      END_STATE();
    case 252:
      if (lookahead == 'y') ADVANCE(212);
      END_STATE();
    case 253:
      if (lookahead == 'y') ADVANCE(8);
      END_STATE();
    case 254:
      if (lookahead == 'y') ADVANCE(204);
      END_STATE();
    case 255:
      if (lookahead == 'y') ADVANCE(214);
      END_STATE();
    case 256:
      if (lookahead == 'y') ADVANCE(216);
      END_STATE();
    case 257:
      if (lookahead == 'y') ADVANCE(76);
      END_STATE();
    case 258:
      if (lookahead == 'y') ADVANCE(195);
      END_STATE();
    case 259:
      if (lookahead == 'z') ADVANCE(64);
      END_STATE();
    case 260:
      if (lookahead == 'z') ADVANCE(65);
      END_STATE();
    case 261:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(376);
      END_STATE();
    case 262:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(377);
      END_STATE();
    case 263:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(379);
      END_STATE();
    case 264:
      if (eof) ADVANCE(265);
      ADVANCE_MAP(
        'a', 238,
        'c', 171,
        'd', 52,
        'e', 247,
        'f', 97,
        'g', 71,
        'i', 156,
        'l', 94,
        'm', 24,
        'n', 174,
        'o', 192,
        's', 53,
        'v', 54,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(264);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_comment_block_dylan);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(266);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '/') ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(268);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(268);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_synopsis);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_author);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_copyright);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_version);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_files);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_executable);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_library);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_define);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_POUNDkey);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_POUNDrest);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_anytype);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '1') ADVANCE(12);
      if (lookahead == '3') ADVANCE(13);
      if (lookahead == '6') ADVANCE(14);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      ADVANCE_MAP(
        '1', 364,
        '3', 365,
        '6', 368,
        '8', 331,
        's', 96,
        '0', 372,
        '2', 372,
        '4', 372,
        '5', 372,
        '7', 372,
        '9', 372,
      );
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      ADVANCE_MAP(
        '1', 367,
        '3', 366,
        '6', 369,
        '8', 332,
        's', 108,
        '0', 372,
        '2', 372,
        '4', 372,
        '5', 372,
        '7', 372,
        '9', 372,
      );
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '_') ADVANCE(106);
      if (lookahead == 'o') ADVANCE(140);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'b') ADVANCE(261);
      if (lookahead == 'o') ADVANCE(262);
      if (lookahead == 'x') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(378);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(251);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(257);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(210);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(178);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(101);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'y') ADVANCE(194);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(378);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_POUNDt);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_POUNDf);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_POUND_LPAREN);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_POUND_LBRACK);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_string_literal);
      if (lookahead == ' ') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(309);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_string_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(309);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_string_literal);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_character_literal);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_symbol);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_POUNDnext);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_POUNDall_DASHkeys);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_POUNDinclude);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_method);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_sealed);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_open);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_sideways);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_dynamic);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_compiler_DASHsideways);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_compiler_DASHopen);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_default_DASHinline);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_inline_DASHonly);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_inline);
      if (lookahead == '-') ADVANCE(189);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_may_DASHinline);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_not_DASHinline);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_domain);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_generic);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_i8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(372);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_u8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(372);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_i16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(372);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_u16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(372);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_i32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(372);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_u32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(372);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_i64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(372);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_u64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(372);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_i128);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(372);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_u128);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(372);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_isize);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_usize);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_c_short);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_c_ushort);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_c_int);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_c_uint);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_c_long);
      if (lookahead == 'd') ADVANCE(176);
      if (lookahead == 'l') ADVANCE(186);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_c_ulong);
      if (lookahead == 'l') ADVANCE(187);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_c_longlong);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_c_ulonglong);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_c_longdouble);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_c_void);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_f16);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_f32);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_f64);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_f128);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_comptime_int);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_comptime_float);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_noreturn);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_anyerror);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_custom_number_type);
      if (lookahead == '2') ADVANCE(370);
      if (lookahead == '6') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(372);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_custom_number_type);
      if (lookahead == '2') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(372);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_custom_number_type);
      if (lookahead == '2') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(372);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_custom_number_type);
      if (lookahead == '2') ADVANCE(371);
      if (lookahead == '6') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(372);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_custom_number_type);
      if (lookahead == '4') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(372);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_custom_number_type);
      if (lookahead == '4') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(372);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_custom_number_type);
      if (lookahead == '8') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(372);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_custom_number_type);
      if (lookahead == '8') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(372);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_custom_number_type);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(372);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_c);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(376);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_integer_literal);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(377);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_integer_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(378);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_integer_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(379);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 264},
  [2] = {.lex_state = 18},
  [3] = {.lex_state = 18},
  [4] = {.lex_state = 19},
  [5] = {.lex_state = 19},
  [6] = {.lex_state = 19},
  [7] = {.lex_state = 19},
  [8] = {.lex_state = 19},
  [9] = {.lex_state = 19},
  [10] = {.lex_state = 19},
  [11] = {.lex_state = 264},
  [12] = {.lex_state = 264},
  [13] = {.lex_state = 264},
  [14] = {.lex_state = 264},
  [15] = {.lex_state = 264},
  [16] = {.lex_state = 264},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 264},
  [19] = {.lex_state = 264},
  [20] = {.lex_state = 264},
  [21] = {.lex_state = 264},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 264},
  [24] = {.lex_state = 264},
  [25] = {.lex_state = 264},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 264},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 264},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 264},
  [37] = {.lex_state = 264},
  [38] = {.lex_state = 264},
  [39] = {.lex_state = 264},
  [40] = {.lex_state = 264},
  [41] = {.lex_state = 264},
  [42] = {.lex_state = 5},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 264},
  [45] = {.lex_state = 264},
  [46] = {.lex_state = 264},
  [47] = {.lex_state = 264},
  [48] = {.lex_state = 264},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 264},
  [51] = {.lex_state = 264},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 264},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 264},
  [56] = {.lex_state = 264},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 264},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 264},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 264},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 3},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 3},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 20},
  [76] = {.lex_state = 264},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 264},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 3},
  [83] = {.lex_state = 264},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 1},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 1},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 1},
  [98] = {.lex_state = 1},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 3},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 1},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 1},
  [114] = {.lex_state = 1},
  [115] = {.lex_state = 3},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment_block_dylan] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_POUNDkey] = ACTIONS(1),
    [anon_sym_POUNDrest] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [aux_sym_identifier_token1] = ACTIONS(1),
    [aux_sym_identifier_token2] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_POUNDt] = ACTIONS(1),
    [anon_sym_POUNDf] = ACTIONS(1),
    [anon_sym_POUND_LPAREN] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_POUND_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_character_literal] = ACTIONS(1),
    [sym_symbol] = ACTIONS(1),
    [anon_sym_POUNDnext] = ACTIONS(1),
    [anon_sym_POUNDall_DASHkeys] = ACTIONS(1),
    [anon_sym_POUNDinclude] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_c] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(116),
    [sym_meta_preprocessor_dylan] = STATE(99),
    [sym_module] = STATE(12),
    [sym_function_definition] = STATE(45),
    [aux_sym_source_file_repeat1] = STATE(45),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_module] = ACTIONS(5),
    [anon_sym_define] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(9), 1,
      anon_sym_anytype,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(13), 1,
      anon_sym_QMARK,
    ACTIONS(19), 1,
      sym_custom_number_type,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    STATE(5), 1,
      aux_sym_array_type_repeat1,
    STATE(59), 1,
      sym_identifier,
    STATE(60), 5,
      sym__type,
      sym_primitive_type,
      sym_error_type,
      sym_optional_type,
      sym_array_type,
    ACTIONS(15), 12,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i32,
      anon_sym_u32,
      anon_sym_i64,
      anon_sym_u64,
      anon_sym_i128,
      anon_sym_u128,
      anon_sym_c_long,
      anon_sym_c_ulong,
    ACTIONS(17), 21,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_c_short,
      anon_sym_c_ushort,
      anon_sym_c_int,
      anon_sym_c_uint,
      anon_sym_c_longlong,
      anon_sym_c_ulonglong,
      anon_sym_c_longdouble,
      anon_sym_c_void,
      anon_sym_f16,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_f128,
      anon_sym_comptime_int,
      anon_sym_comptime_float,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_noreturn,
      anon_sym_type,
      anon_sym_anyerror,
  [66] = 10,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(13), 1,
      anon_sym_QMARK,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_anytype,
    ACTIONS(25), 1,
      sym_custom_number_type,
    STATE(5), 1,
      aux_sym_array_type_repeat1,
    STATE(59), 1,
      sym_identifier,
    STATE(62), 5,
      sym__type,
      sym_primitive_type,
      sym_error_type,
      sym_optional_type,
      sym_array_type,
    ACTIONS(15), 12,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i32,
      anon_sym_u32,
      anon_sym_i64,
      anon_sym_u64,
      anon_sym_i128,
      anon_sym_u128,
      anon_sym_c_long,
      anon_sym_c_ulong,
    ACTIONS(17), 21,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_c_short,
      anon_sym_c_ushort,
      anon_sym_c_int,
      anon_sym_c_uint,
      anon_sym_c_longlong,
      anon_sym_c_ulonglong,
      anon_sym_c_longdouble,
      anon_sym_c_void,
      anon_sym_f16,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_f128,
      anon_sym_comptime_int,
      anon_sym_comptime_float,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_noreturn,
      anon_sym_type,
      anon_sym_anyerror,
  [132] = 9,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(13), 1,
      anon_sym_QMARK,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      sym_custom_number_type,
    STATE(5), 1,
      aux_sym_array_type_repeat1,
    STATE(59), 1,
      sym_identifier,
    STATE(69), 5,
      sym__type,
      sym_primitive_type,
      sym_error_type,
      sym_optional_type,
      sym_array_type,
    ACTIONS(15), 12,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i32,
      anon_sym_u32,
      anon_sym_i64,
      anon_sym_u64,
      anon_sym_i128,
      anon_sym_u128,
      anon_sym_c_long,
      anon_sym_c_ulong,
    ACTIONS(17), 21,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_c_short,
      anon_sym_c_ushort,
      anon_sym_c_int,
      anon_sym_c_uint,
      anon_sym_c_longlong,
      anon_sym_c_ulonglong,
      anon_sym_c_longdouble,
      anon_sym_c_void,
      anon_sym_f16,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_f128,
      anon_sym_comptime_int,
      anon_sym_comptime_float,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_noreturn,
      anon_sym_type,
      anon_sym_anyerror,
  [195] = 12,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(13), 1,
      anon_sym_QMARK,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      sym_custom_number_type,
    STATE(7), 1,
      aux_sym_array_type_repeat1,
    STATE(49), 1,
      sym_identifier,
    STATE(66), 1,
      sym_primitive_type,
    STATE(67), 1,
      sym_error_type,
    STATE(68), 1,
      sym_optional_type,
    STATE(105), 2,
      sym__type,
      sym_array_type,
    ACTIONS(15), 12,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i32,
      anon_sym_u32,
      anon_sym_i64,
      anon_sym_u64,
      anon_sym_i128,
      anon_sym_u128,
      anon_sym_c_long,
      anon_sym_c_ulong,
    ACTIONS(17), 21,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_c_short,
      anon_sym_c_ushort,
      anon_sym_c_int,
      anon_sym_c_uint,
      anon_sym_c_longlong,
      anon_sym_c_ulonglong,
      anon_sym_c_longdouble,
      anon_sym_c_void,
      anon_sym_f16,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_f128,
      anon_sym_comptime_int,
      anon_sym_comptime_float,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_noreturn,
      anon_sym_type,
      anon_sym_anyerror,
  [264] = 9,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(13), 1,
      anon_sym_QMARK,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      sym_custom_number_type,
    STATE(5), 1,
      aux_sym_array_type_repeat1,
    STATE(59), 1,
      sym_identifier,
    STATE(63), 5,
      sym__type,
      sym_primitive_type,
      sym_error_type,
      sym_optional_type,
      sym_array_type,
    ACTIONS(15), 12,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i32,
      anon_sym_u32,
      anon_sym_i64,
      anon_sym_u64,
      anon_sym_i128,
      anon_sym_u128,
      anon_sym_c_long,
      anon_sym_c_ulong,
    ACTIONS(17), 21,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_c_short,
      anon_sym_c_ushort,
      anon_sym_c_int,
      anon_sym_c_uint,
      anon_sym_c_longlong,
      anon_sym_c_ulonglong,
      anon_sym_c_longdouble,
      anon_sym_c_void,
      anon_sym_f16,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_f128,
      anon_sym_comptime_int,
      anon_sym_comptime_float,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_noreturn,
      anon_sym_type,
      anon_sym_anyerror,
  [327] = 8,
    STATE(7), 1,
      aux_sym_array_type_repeat1,
    STATE(49), 1,
      sym_identifier,
    STATE(66), 1,
      sym_primitive_type,
    STATE(67), 1,
      sym_error_type,
    STATE(68), 1,
      sym_optional_type,
    STATE(105), 2,
      sym__type,
      sym_array_type,
    ACTIONS(33), 14,
      aux_sym_identifier_token1,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i32,
      anon_sym_u32,
      anon_sym_i64,
      anon_sym_u64,
      anon_sym_i128,
      anon_sym_u128,
      anon_sym_c_long,
      anon_sym_c_ulong,
      sym_custom_number_type,
    ACTIONS(35), 23,
      anon_sym_QMARK,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_c_short,
      anon_sym_c_ushort,
      anon_sym_c_int,
      anon_sym_c_uint,
      anon_sym_c_longlong,
      anon_sym_c_ulonglong,
      anon_sym_c_longdouble,
      anon_sym_c_void,
      anon_sym_f16,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_f128,
      anon_sym_comptime_int,
      anon_sym_comptime_float,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_noreturn,
      anon_sym_type,
      anon_sym_anyerror,
      anon_sym_LBRACK,
  [388] = 2,
    ACTIONS(37), 14,
      aux_sym_identifier_token1,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i32,
      anon_sym_u32,
      anon_sym_i64,
      anon_sym_u64,
      anon_sym_i128,
      anon_sym_u128,
      anon_sym_c_long,
      anon_sym_c_ulong,
      sym_custom_number_type,
    ACTIONS(39), 23,
      anon_sym_QMARK,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_c_short,
      anon_sym_c_ushort,
      anon_sym_c_int,
      anon_sym_c_uint,
      anon_sym_c_longlong,
      anon_sym_c_ulonglong,
      anon_sym_c_longdouble,
      anon_sym_c_void,
      anon_sym_f16,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_f128,
      anon_sym_comptime_int,
      anon_sym_comptime_float,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_noreturn,
      anon_sym_type,
      anon_sym_anyerror,
      anon_sym_LBRACK,
  [430] = 2,
    ACTIONS(41), 14,
      aux_sym_identifier_token1,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i32,
      anon_sym_u32,
      anon_sym_i64,
      anon_sym_u64,
      anon_sym_i128,
      anon_sym_u128,
      anon_sym_c_long,
      anon_sym_c_ulong,
      sym_custom_number_type,
    ACTIONS(43), 23,
      anon_sym_QMARK,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_c_short,
      anon_sym_c_ushort,
      anon_sym_c_int,
      anon_sym_c_uint,
      anon_sym_c_longlong,
      anon_sym_c_ulonglong,
      anon_sym_c_longdouble,
      anon_sym_c_void,
      anon_sym_f16,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_f128,
      anon_sym_comptime_int,
      anon_sym_comptime_float,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_noreturn,
      anon_sym_type,
      anon_sym_anyerror,
      anon_sym_LBRACK,
  [472] = 2,
    ACTIONS(45), 14,
      aux_sym_identifier_token1,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i32,
      anon_sym_u32,
      anon_sym_i64,
      anon_sym_u64,
      anon_sym_i128,
      anon_sym_u128,
      anon_sym_c_long,
      anon_sym_c_ulong,
      sym_custom_number_type,
    ACTIONS(47), 23,
      anon_sym_QMARK,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_c_short,
      anon_sym_c_ushort,
      anon_sym_c_int,
      anon_sym_c_uint,
      anon_sym_c_longlong,
      anon_sym_c_ulonglong,
      anon_sym_c_longdouble,
      anon_sym_c_void,
      anon_sym_f16,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_f128,
      anon_sym_comptime_int,
      anon_sym_comptime_float,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_noreturn,
      anon_sym_type,
      anon_sym_anyerror,
      anon_sym_LBRACK,
  [514] = 6,
    ACTIONS(53), 1,
      anon_sym_inline,
    ACTIONS(55), 1,
      anon_sym_domain,
    STATE(38), 1,
      sym_modifier,
    STATE(71), 1,
      sym_function_word,
    ACTIONS(49), 3,
      anon_sym_method,
      anon_sym_function,
      anon_sym_generic,
    ACTIONS(51), 10,
      anon_sym_sealed,
      anon_sym_open,
      anon_sym_sideways,
      anon_sym_dynamic,
      anon_sym_compiler_DASHsideways,
      anon_sym_compiler_DASHopen,
      anon_sym_default_DASHinline,
      anon_sym_inline_DASHonly,
      anon_sym_may_DASHinline,
      anon_sym_not_DASHinline,
  [544] = 15,
    ACTIONS(57), 1,
      ts_builtin_sym_end,
    ACTIONS(59), 1,
      anon_sym_synopsis,
    ACTIONS(61), 1,
      anon_sym_author,
    ACTIONS(63), 1,
      anon_sym_copyright,
    ACTIONS(65), 1,
      anon_sym_version,
    ACTIONS(67), 1,
      anon_sym_files,
    ACTIONS(69), 1,
      anon_sym_executable,
    ACTIONS(71), 1,
      anon_sym_library,
    STATE(13), 1,
      sym_synopsis,
    STATE(14), 1,
      sym_author,
    STATE(18), 1,
      sym_copyright,
    STATE(24), 1,
      sym_version,
    STATE(40), 1,
      sym_files,
    STATE(58), 1,
      sym_executable,
    STATE(100), 1,
      sym_library,
  [590] = 13,
    ACTIONS(61), 1,
      anon_sym_author,
    ACTIONS(63), 1,
      anon_sym_copyright,
    ACTIONS(65), 1,
      anon_sym_version,
    ACTIONS(67), 1,
      anon_sym_files,
    ACTIONS(69), 1,
      anon_sym_executable,
    ACTIONS(71), 1,
      anon_sym_library,
    ACTIONS(73), 1,
      ts_builtin_sym_end,
    STATE(15), 1,
      sym_author,
    STATE(19), 1,
      sym_copyright,
    STATE(21), 1,
      sym_version,
    STATE(37), 1,
      sym_files,
    STATE(65), 1,
      sym_executable,
    STATE(84), 1,
      sym_library,
  [630] = 11,
    ACTIONS(63), 1,
      anon_sym_copyright,
    ACTIONS(65), 1,
      anon_sym_version,
    ACTIONS(67), 1,
      anon_sym_files,
    ACTIONS(69), 1,
      anon_sym_executable,
    ACTIONS(71), 1,
      anon_sym_library,
    ACTIONS(73), 1,
      ts_builtin_sym_end,
    STATE(19), 1,
      sym_copyright,
    STATE(21), 1,
      sym_version,
    STATE(37), 1,
      sym_files,
    STATE(65), 1,
      sym_executable,
    STATE(84), 1,
      sym_library,
  [664] = 11,
    ACTIONS(63), 1,
      anon_sym_copyright,
    ACTIONS(65), 1,
      anon_sym_version,
    ACTIONS(67), 1,
      anon_sym_files,
    ACTIONS(69), 1,
      anon_sym_executable,
    ACTIONS(71), 1,
      anon_sym_library,
    ACTIONS(75), 1,
      ts_builtin_sym_end,
    STATE(16), 1,
      sym_copyright,
    STATE(23), 1,
      sym_version,
    STATE(36), 1,
      sym_files,
    STATE(51), 1,
      sym_executable,
    STATE(94), 1,
      sym_library,
  [698] = 9,
    ACTIONS(65), 1,
      anon_sym_version,
    ACTIONS(67), 1,
      anon_sym_files,
    ACTIONS(69), 1,
      anon_sym_executable,
    ACTIONS(71), 1,
      anon_sym_library,
    ACTIONS(77), 1,
      ts_builtin_sym_end,
    STATE(25), 1,
      sym_version,
    STATE(39), 1,
      sym_files,
    STATE(53), 1,
      sym_executable,
    STATE(85), 1,
      sym_library,
  [726] = 3,
    ACTIONS(81), 1,
      aux_sym_identifier_token2,
    STATE(17), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(79), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_COLON,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_RBRACK,
  [742] = 9,
    ACTIONS(65), 1,
      anon_sym_version,
    ACTIONS(67), 1,
      anon_sym_files,
    ACTIONS(69), 1,
      anon_sym_executable,
    ACTIONS(71), 1,
      anon_sym_library,
    ACTIONS(73), 1,
      ts_builtin_sym_end,
    STATE(21), 1,
      sym_version,
    STATE(37), 1,
      sym_files,
    STATE(65), 1,
      sym_executable,
    STATE(84), 1,
      sym_library,
  [770] = 9,
    ACTIONS(65), 1,
      anon_sym_version,
    ACTIONS(67), 1,
      anon_sym_files,
    ACTIONS(69), 1,
      anon_sym_executable,
    ACTIONS(71), 1,
      anon_sym_library,
    ACTIONS(75), 1,
      ts_builtin_sym_end,
    STATE(23), 1,
      sym_version,
    STATE(36), 1,
      sym_files,
    STATE(51), 1,
      sym_executable,
    STATE(94), 1,
      sym_library,
  [798] = 1,
    ACTIONS(84), 8,
      ts_builtin_sym_end,
      anon_sym_synopsis,
      anon_sym_author,
      anon_sym_copyright,
      anon_sym_version,
      anon_sym_files,
      anon_sym_executable,
      anon_sym_library,
  [809] = 7,
    ACTIONS(67), 1,
      anon_sym_files,
    ACTIONS(69), 1,
      anon_sym_executable,
    ACTIONS(71), 1,
      anon_sym_library,
    ACTIONS(75), 1,
      ts_builtin_sym_end,
    STATE(36), 1,
      sym_files,
    STATE(51), 1,
      sym_executable,
    STATE(94), 1,
      sym_library,
  [831] = 4,
    ACTIONS(88), 1,
      aux_sym_identifier_token2,
    STATE(17), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(90), 2,
      anon_sym_QMARK,
      anon_sym_BANG,
    ACTIONS(86), 3,
      anon_sym_LPAREN,
      anon_sym_COLON_COLON,
      anon_sym_RBRACK,
  [847] = 7,
    ACTIONS(67), 1,
      anon_sym_files,
    ACTIONS(69), 1,
      anon_sym_executable,
    ACTIONS(71), 1,
      anon_sym_library,
    ACTIONS(77), 1,
      ts_builtin_sym_end,
    STATE(39), 1,
      sym_files,
    STATE(53), 1,
      sym_executable,
    STATE(85), 1,
      sym_library,
  [869] = 7,
    ACTIONS(67), 1,
      anon_sym_files,
    ACTIONS(69), 1,
      anon_sym_executable,
    ACTIONS(71), 1,
      anon_sym_library,
    ACTIONS(73), 1,
      ts_builtin_sym_end,
    STATE(37), 1,
      sym_files,
    STATE(65), 1,
      sym_executable,
    STATE(84), 1,
      sym_library,
  [891] = 7,
    ACTIONS(67), 1,
      anon_sym_files,
    ACTIONS(69), 1,
      anon_sym_executable,
    ACTIONS(71), 1,
      anon_sym_library,
    ACTIONS(92), 1,
      ts_builtin_sym_end,
    STATE(41), 1,
      sym_files,
    STATE(55), 1,
      sym_executable,
    STATE(103), 1,
      sym_library,
  [913] = 4,
    ACTIONS(96), 1,
      aux_sym_identifier_token2,
    STATE(22), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(98), 2,
      anon_sym_QMARK,
      anon_sym_BANG,
    ACTIONS(94), 3,
      anon_sym_LPAREN,
      anon_sym_COLON_COLON,
      anon_sym_RBRACK,
  [929] = 1,
    ACTIONS(100), 7,
      ts_builtin_sym_end,
      anon_sym_author,
      anon_sym_copyright,
      anon_sym_version,
      anon_sym_files,
      anon_sym_executable,
      anon_sym_library,
  [939] = 1,
    ACTIONS(86), 6,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_COLON,
      anon_sym_BANG,
      anon_sym_RBRACK,
  [948] = 1,
    ACTIONS(102), 6,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_COLON,
      anon_sym_BANG,
      anon_sym_RBRACK,
  [957] = 5,
    ACTIONS(104), 1,
      anon_sym_RPAREN,
    ACTIONS(108), 1,
      aux_sym_identifier_token1,
    STATE(52), 1,
      sym_parameter,
    STATE(108), 1,
      sym_identifier,
    ACTIONS(106), 2,
      anon_sym_POUNDkey,
      anon_sym_POUNDrest,
  [974] = 5,
    ACTIONS(108), 1,
      aux_sym_identifier_token1,
    ACTIONS(110), 1,
      anon_sym_RPAREN,
    STATE(79), 1,
      sym_parameter,
    STATE(108), 1,
      sym_identifier,
    ACTIONS(106), 2,
      anon_sym_POUNDkey,
      anon_sym_POUNDrest,
  [991] = 1,
    ACTIONS(112), 6,
      ts_builtin_sym_end,
      anon_sym_copyright,
      anon_sym_version,
      anon_sym_files,
      anon_sym_executable,
      anon_sym_library,
  [1000] = 5,
    ACTIONS(108), 1,
      aux_sym_identifier_token1,
    ACTIONS(114), 1,
      anon_sym_RPAREN,
    STATE(79), 1,
      sym_parameter,
    STATE(108), 1,
      sym_identifier,
    ACTIONS(106), 2,
      anon_sym_POUNDkey,
      anon_sym_POUNDrest,
  [1017] = 5,
    ACTIONS(98), 1,
      anon_sym_QMARK,
    ACTIONS(116), 1,
      aux_sym_identifier_token2,
    ACTIONS(118), 1,
      anon_sym_BANG,
    STATE(35), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(94), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1034] = 5,
    ACTIONS(88), 1,
      aux_sym_identifier_token2,
    ACTIONS(90), 1,
      anon_sym_QMARK,
    ACTIONS(121), 1,
      anon_sym_BANG,
    STATE(17), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(86), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1051] = 5,
    ACTIONS(69), 1,
      anon_sym_executable,
    ACTIONS(71), 1,
      anon_sym_library,
    ACTIONS(77), 1,
      ts_builtin_sym_end,
    STATE(53), 1,
      sym_executable,
    STATE(85), 1,
      sym_library,
  [1067] = 5,
    ACTIONS(69), 1,
      anon_sym_executable,
    ACTIONS(71), 1,
      anon_sym_library,
    ACTIONS(75), 1,
      ts_builtin_sym_end,
    STATE(51), 1,
      sym_executable,
    STATE(94), 1,
      sym_library,
  [1083] = 3,
    ACTIONS(55), 1,
      anon_sym_domain,
    STATE(73), 1,
      sym_function_word,
    ACTIONS(49), 3,
      anon_sym_method,
      anon_sym_function,
      anon_sym_generic,
  [1095] = 5,
    ACTIONS(69), 1,
      anon_sym_executable,
    ACTIONS(71), 1,
      anon_sym_library,
    ACTIONS(92), 1,
      ts_builtin_sym_end,
    STATE(55), 1,
      sym_executable,
    STATE(103), 1,
      sym_library,
  [1111] = 5,
    ACTIONS(69), 1,
      anon_sym_executable,
    ACTIONS(71), 1,
      anon_sym_library,
    ACTIONS(73), 1,
      ts_builtin_sym_end,
    STATE(65), 1,
      sym_executable,
    STATE(84), 1,
      sym_library,
  [1127] = 5,
    ACTIONS(69), 1,
      anon_sym_executable,
    ACTIONS(71), 1,
      anon_sym_library,
    ACTIONS(124), 1,
      ts_builtin_sym_end,
    STATE(61), 1,
      sym_executable,
    STATE(92), 1,
      sym_library,
  [1143] = 5,
    ACTIONS(126), 1,
      aux_sym_identifier_token1,
    ACTIONS(128), 1,
      anon_sym_RBRACK,
    ACTIONS(130), 1,
      anon_sym_STAR,
    ACTIONS(132), 1,
      sym_integer_literal,
    STATE(101), 1,
      sym_identifier,
  [1159] = 4,
    ACTIONS(108), 1,
      aux_sym_identifier_token1,
    STATE(79), 1,
      sym_parameter,
    STATE(108), 1,
      sym_identifier,
    ACTIONS(106), 2,
      anon_sym_POUNDkey,
      anon_sym_POUNDrest,
  [1173] = 1,
    ACTIONS(134), 5,
      ts_builtin_sym_end,
      anon_sym_version,
      anon_sym_files,
      anon_sym_executable,
      anon_sym_library,
  [1181] = 3,
    ACTIONS(7), 1,
      anon_sym_define,
    ACTIONS(136), 1,
      ts_builtin_sym_end,
    STATE(47), 2,
      sym_function_definition,
      aux_sym_source_file_repeat1,
  [1192] = 1,
    ACTIONS(138), 4,
      anon_sym_method,
      anon_sym_domain,
      anon_sym_function,
      anon_sym_generic,
  [1199] = 3,
    ACTIONS(140), 1,
      ts_builtin_sym_end,
    ACTIONS(142), 1,
      anon_sym_define,
    STATE(47), 2,
      sym_function_definition,
      aux_sym_source_file_repeat1,
  [1210] = 1,
    ACTIONS(145), 4,
      ts_builtin_sym_end,
      anon_sym_files,
      anon_sym_executable,
      anon_sym_library,
  [1217] = 2,
    ACTIONS(149), 1,
      anon_sym_BANG,
    ACTIONS(147), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1225] = 1,
    ACTIONS(151), 3,
      anon_sym_method,
      anon_sym_function,
      anon_sym_generic,
  [1231] = 3,
    ACTIONS(71), 1,
      anon_sym_library,
    ACTIONS(77), 1,
      ts_builtin_sym_end,
    STATE(85), 1,
      sym_library,
  [1241] = 3,
    ACTIONS(153), 1,
      anon_sym_RPAREN,
    ACTIONS(155), 1,
      anon_sym_COMMA,
    STATE(54), 1,
      aux_sym_parameters_repeat1,
  [1251] = 3,
    ACTIONS(71), 1,
      anon_sym_library,
    ACTIONS(92), 1,
      ts_builtin_sym_end,
    STATE(103), 1,
      sym_library,
  [1261] = 3,
    ACTIONS(110), 1,
      anon_sym_RPAREN,
    ACTIONS(157), 1,
      anon_sym_COMMA,
    STATE(57), 1,
      aux_sym_parameters_repeat1,
  [1271] = 3,
    ACTIONS(71), 1,
      anon_sym_library,
    ACTIONS(124), 1,
      ts_builtin_sym_end,
    STATE(92), 1,
      sym_library,
  [1281] = 1,
    ACTIONS(159), 3,
      ts_builtin_sym_end,
      anon_sym_executable,
      anon_sym_library,
  [1287] = 3,
    ACTIONS(161), 1,
      anon_sym_RPAREN,
    ACTIONS(163), 1,
      anon_sym_COMMA,
    STATE(57), 1,
      aux_sym_parameters_repeat1,
  [1297] = 3,
    ACTIONS(71), 1,
      anon_sym_library,
    ACTIONS(73), 1,
      ts_builtin_sym_end,
    STATE(84), 1,
      sym_library,
  [1307] = 1,
    ACTIONS(149), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_BANG,
  [1313] = 2,
    ACTIONS(168), 1,
      anon_sym_BANG,
    ACTIONS(166), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1321] = 3,
    ACTIONS(71), 1,
      anon_sym_library,
    ACTIONS(170), 1,
      ts_builtin_sym_end,
    STATE(110), 1,
      sym_library,
  [1331] = 2,
    ACTIONS(168), 1,
      anon_sym_BANG,
    ACTIONS(172), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1339] = 2,
    ACTIONS(168), 1,
      anon_sym_BANG,
    ACTIONS(174), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1347] = 2,
    ACTIONS(178), 1,
      anon_sym_BANG,
    ACTIONS(176), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1355] = 3,
    ACTIONS(71), 1,
      anon_sym_library,
    ACTIONS(75), 1,
      ts_builtin_sym_end,
    STATE(94), 1,
      sym_library,
  [1365] = 2,
    ACTIONS(178), 1,
      anon_sym_BANG,
    ACTIONS(176), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1373] = 2,
    ACTIONS(178), 1,
      anon_sym_BANG,
    ACTIONS(176), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1381] = 2,
    ACTIONS(178), 1,
      anon_sym_BANG,
    ACTIONS(176), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1389] = 1,
    ACTIONS(180), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_BANG,
  [1395] = 1,
    ACTIONS(182), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_BANG,
  [1401] = 2,
    ACTIONS(108), 1,
      aux_sym_identifier_token1,
    STATE(78), 1,
      sym_identifier,
  [1408] = 1,
    ACTIONS(172), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1413] = 2,
    ACTIONS(108), 1,
      aux_sym_identifier_token1,
    STATE(81), 1,
      sym_identifier,
  [1420] = 1,
    ACTIONS(166), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1425] = 2,
    ACTIONS(184), 1,
      anon_sym_RBRACK,
    ACTIONS(186), 1,
      anon_sym_c,
  [1432] = 1,
    ACTIONS(188), 2,
      ts_builtin_sym_end,
      anon_sym_library,
  [1437] = 2,
    ACTIONS(190), 1,
      sym_string_literal,
    ACTIONS(192), 1,
      sym_number,
  [1444] = 2,
    ACTIONS(194), 1,
      anon_sym_LPAREN,
    STATE(109), 1,
      sym_parameters,
  [1451] = 1,
    ACTIONS(161), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1456] = 1,
    ACTIONS(196), 2,
      ts_builtin_sym_end,
      anon_sym_define,
  [1461] = 2,
    ACTIONS(194), 1,
      anon_sym_LPAREN,
    STATE(117), 1,
      sym_parameters,
  [1468] = 2,
    ACTIONS(108), 1,
      aux_sym_identifier_token1,
    STATE(88), 1,
      sym_identifier,
  [1475] = 1,
    ACTIONS(198), 2,
      ts_builtin_sym_end,
      anon_sym_define,
  [1480] = 1,
    ACTIONS(75), 1,
      ts_builtin_sym_end,
  [1484] = 1,
    ACTIONS(92), 1,
      ts_builtin_sym_end,
  [1488] = 1,
    ACTIONS(200), 1,
      ts_builtin_sym_end,
  [1492] = 1,
    ACTIONS(202), 1,
      anon_sym_LPAREN,
  [1496] = 1,
    ACTIONS(204), 1,
      anon_sym_COLON_COLON,
  [1500] = 1,
    ACTIONS(206), 1,
      sym_string_literal,
  [1504] = 1,
    ACTIONS(208), 1,
      anon_sym_EQ_GT,
  [1508] = 1,
    ACTIONS(210), 1,
      sym_string_literal,
  [1512] = 1,
    ACTIONS(170), 1,
      ts_builtin_sym_end,
  [1516] = 1,
    ACTIONS(212), 1,
      anon_sym_EQ_GT,
  [1520] = 1,
    ACTIONS(77), 1,
      ts_builtin_sym_end,
  [1524] = 1,
    ACTIONS(214), 1,
      anon_sym_RPAREN,
  [1528] = 1,
    ACTIONS(216), 1,
      anon_sym_EQ_GT,
  [1532] = 1,
    ACTIONS(218), 1,
      sym_string_literal,
  [1536] = 1,
    ACTIONS(220), 1,
      sym_string_literal,
  [1540] = 1,
    ACTIONS(136), 1,
      ts_builtin_sym_end,
  [1544] = 1,
    ACTIONS(73), 1,
      ts_builtin_sym_end,
  [1548] = 1,
    ACTIONS(184), 1,
      anon_sym_RBRACK,
  [1552] = 1,
    ACTIONS(222), 1,
      aux_sym_identifier_token1,
  [1556] = 1,
    ACTIONS(124), 1,
      ts_builtin_sym_end,
  [1560] = 1,
    ACTIONS(224), 1,
      anon_sym_RPAREN,
  [1564] = 1,
    ACTIONS(168), 1,
      anon_sym_BANG,
  [1568] = 1,
    ACTIONS(226), 1,
      sym_string_literal,
  [1572] = 1,
    ACTIONS(228), 1,
      anon_sym_EQ_GT,
  [1576] = 1,
    ACTIONS(230), 1,
      anon_sym_COLON_COLON,
  [1580] = 1,
    ACTIONS(232), 1,
      anon_sym_EQ_GT,
  [1584] = 1,
    ACTIONS(234), 1,
      ts_builtin_sym_end,
  [1588] = 1,
    ACTIONS(236), 1,
      anon_sym_LPAREN,
  [1592] = 1,
    ACTIONS(238), 1,
      anon_sym_RBRACK,
  [1596] = 1,
    ACTIONS(240), 1,
      sym_string_literal,
  [1600] = 1,
    ACTIONS(242), 1,
      sym_string_literal,
  [1604] = 1,
    ACTIONS(244), 1,
      aux_sym_identifier_token1,
  [1608] = 1,
    ACTIONS(246), 1,
      ts_builtin_sym_end,
  [1612] = 1,
    ACTIONS(248), 1,
      anon_sym_EQ_GT,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 66,
  [SMALL_STATE(4)] = 132,
  [SMALL_STATE(5)] = 195,
  [SMALL_STATE(6)] = 264,
  [SMALL_STATE(7)] = 327,
  [SMALL_STATE(8)] = 388,
  [SMALL_STATE(9)] = 430,
  [SMALL_STATE(10)] = 472,
  [SMALL_STATE(11)] = 514,
  [SMALL_STATE(12)] = 544,
  [SMALL_STATE(13)] = 590,
  [SMALL_STATE(14)] = 630,
  [SMALL_STATE(15)] = 664,
  [SMALL_STATE(16)] = 698,
  [SMALL_STATE(17)] = 726,
  [SMALL_STATE(18)] = 742,
  [SMALL_STATE(19)] = 770,
  [SMALL_STATE(20)] = 798,
  [SMALL_STATE(21)] = 809,
  [SMALL_STATE(22)] = 831,
  [SMALL_STATE(23)] = 847,
  [SMALL_STATE(24)] = 869,
  [SMALL_STATE(25)] = 891,
  [SMALL_STATE(26)] = 913,
  [SMALL_STATE(27)] = 929,
  [SMALL_STATE(28)] = 939,
  [SMALL_STATE(29)] = 948,
  [SMALL_STATE(30)] = 957,
  [SMALL_STATE(31)] = 974,
  [SMALL_STATE(32)] = 991,
  [SMALL_STATE(33)] = 1000,
  [SMALL_STATE(34)] = 1017,
  [SMALL_STATE(35)] = 1034,
  [SMALL_STATE(36)] = 1051,
  [SMALL_STATE(37)] = 1067,
  [SMALL_STATE(38)] = 1083,
  [SMALL_STATE(39)] = 1095,
  [SMALL_STATE(40)] = 1111,
  [SMALL_STATE(41)] = 1127,
  [SMALL_STATE(42)] = 1143,
  [SMALL_STATE(43)] = 1159,
  [SMALL_STATE(44)] = 1173,
  [SMALL_STATE(45)] = 1181,
  [SMALL_STATE(46)] = 1192,
  [SMALL_STATE(47)] = 1199,
  [SMALL_STATE(48)] = 1210,
  [SMALL_STATE(49)] = 1217,
  [SMALL_STATE(50)] = 1225,
  [SMALL_STATE(51)] = 1231,
  [SMALL_STATE(52)] = 1241,
  [SMALL_STATE(53)] = 1251,
  [SMALL_STATE(54)] = 1261,
  [SMALL_STATE(55)] = 1271,
  [SMALL_STATE(56)] = 1281,
  [SMALL_STATE(57)] = 1287,
  [SMALL_STATE(58)] = 1297,
  [SMALL_STATE(59)] = 1307,
  [SMALL_STATE(60)] = 1313,
  [SMALL_STATE(61)] = 1321,
  [SMALL_STATE(62)] = 1331,
  [SMALL_STATE(63)] = 1339,
  [SMALL_STATE(64)] = 1347,
  [SMALL_STATE(65)] = 1355,
  [SMALL_STATE(66)] = 1365,
  [SMALL_STATE(67)] = 1373,
  [SMALL_STATE(68)] = 1381,
  [SMALL_STATE(69)] = 1389,
  [SMALL_STATE(70)] = 1395,
  [SMALL_STATE(71)] = 1401,
  [SMALL_STATE(72)] = 1408,
  [SMALL_STATE(73)] = 1413,
  [SMALL_STATE(74)] = 1420,
  [SMALL_STATE(75)] = 1425,
  [SMALL_STATE(76)] = 1432,
  [SMALL_STATE(77)] = 1437,
  [SMALL_STATE(78)] = 1444,
  [SMALL_STATE(79)] = 1451,
  [SMALL_STATE(80)] = 1456,
  [SMALL_STATE(81)] = 1461,
  [SMALL_STATE(82)] = 1468,
  [SMALL_STATE(83)] = 1475,
  [SMALL_STATE(84)] = 1480,
  [SMALL_STATE(85)] = 1484,
  [SMALL_STATE(86)] = 1488,
  [SMALL_STATE(87)] = 1492,
  [SMALL_STATE(88)] = 1496,
  [SMALL_STATE(89)] = 1500,
  [SMALL_STATE(90)] = 1504,
  [SMALL_STATE(91)] = 1508,
  [SMALL_STATE(92)] = 1512,
  [SMALL_STATE(93)] = 1516,
  [SMALL_STATE(94)] = 1520,
  [SMALL_STATE(95)] = 1524,
  [SMALL_STATE(96)] = 1528,
  [SMALL_STATE(97)] = 1532,
  [SMALL_STATE(98)] = 1536,
  [SMALL_STATE(99)] = 1540,
  [SMALL_STATE(100)] = 1544,
  [SMALL_STATE(101)] = 1548,
  [SMALL_STATE(102)] = 1552,
  [SMALL_STATE(103)] = 1556,
  [SMALL_STATE(104)] = 1560,
  [SMALL_STATE(105)] = 1564,
  [SMALL_STATE(106)] = 1568,
  [SMALL_STATE(107)] = 1572,
  [SMALL_STATE(108)] = 1576,
  [SMALL_STATE(109)] = 1580,
  [SMALL_STATE(110)] = 1584,
  [SMALL_STATE(111)] = 1588,
  [SMALL_STATE(112)] = 1592,
  [SMALL_STATE(113)] = 1596,
  [SMALL_STATE(114)] = 1600,
  [SMALL_STATE(115)] = 1604,
  [SMALL_STATE(116)] = 1608,
  [SMALL_STATE(117)] = 1612,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_array_type_repeat1, 2, 0, 8),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_type_repeat1, 2, 0, 8),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_array_type_repeat1, 4, 0, 11),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_type_repeat1, 4, 0, 11),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_array_type_repeat1, 2, 0, 0),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_type_repeat1, 2, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_array_type_repeat1, 3, 0, 9),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_type_repeat1, 3, 0, 9),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta_preprocessor_dylan, 1, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta_preprocessor_dylan, 2, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta_preprocessor_dylan, 3, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta_preprocessor_dylan, 4, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_identifier_repeat1, 2, 0, 0),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_identifier_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 2, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 2, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta_preprocessor_dylan, 5, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_synopsis, 2, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 3, 0, 0),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_author, 2, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_identifier, 1, 0, 0), SHIFT(28),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_identifier, 2, 0, 0), SHIFT(29),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta_preprocessor_dylan, 6, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_copyright, 2, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifier, 1, 0, 0),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version, 2, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 2, 0, 7),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type, 1, 0, 2),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_files, 2, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2, 0, 0),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(43),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3, 0, 1),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta_preprocessor_dylan, 7, 0, 0),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 4, 0, 5),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optional_type, 2, 0, 0),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 2, 0, 6),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type, 1, 0, 0),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_error_type, 3, 0, 10),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1, 0, 0),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_executable, 2, 0, 0),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 7, 0, 3),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 8, 0, 4),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_library, 2, 0, 0),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3, 0, 0),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2, 0, 0),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 5, 0, 0),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_word, 1, 0, 0),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 4, 0, 0),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta_preprocessor_dylan, 8, 0, 0),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_word, 2, 0, 0),
  [246] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_dylan(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
