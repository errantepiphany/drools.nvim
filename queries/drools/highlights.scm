; highlights.scm

; Includes

"import" @include
"package" @include

;; Keywords

"function" @keyword

(type) @type

(identifier) @parameter

[
"rule"
"when"
"then"
"end"
] @variable.builtin

; Comments

[
  (line_comment)
  (block_comment)
] @comment

; Punctuation

; [
; ";"
; "."
; "..."
; ","
; ] @punctuation.delimiter

[
"["
"]"
"{"
"}"
"("
")"
] @exception
