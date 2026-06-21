; Comments
[
  (comment_line)
  (comment_block)
] @comment

; Keywords
(control_keyword) @keyword
(definer_keyword) @keyword
(modifier_keyword) @keyword.modifier
(hash_word) @keyword

; Functions / builtins
(builtin_function) @function.builtin

; Types (<foo> convention)
(type) @type

; Literals
(string) @string
(raw_string) @string
(character) @string.special
(number) @number
(boolean) @constant.builtin
(symbol) @string.special.symbol
(keyword_symbol) @property

; Operators and escaped names
(operator) @operator
(escaped_name) @operator

; Identifiers
(identifier) @variable

; Punctuation
(punctuation) @punctuation.delimiter
