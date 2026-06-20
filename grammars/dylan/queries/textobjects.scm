;; ==========================================
;; Funktionen und Methoden (f)
;; ==========================================

(method_definition) @function.outer
(function_definition) @function.outer

(method_definition
  body: (_) @function.inner) @conditional.outer ; Falls im Parser ein expliziter Body-Knoten existiert
;; Alternativ fängt das die Ausdrücke innerhalb ab:
(method_definition (_)) @function.inner
(function_definition (_)) @function.inner

;; ==========================================
;; Klassen und Module (c)
;; ==========================================

(class_definition) @class.outer
(class_definition (_)) @class.inner

(module_definition) @class.outer
(module_definition (_)) @class.inner

;; ==========================================
;; Kontrollstrukturen / Bedingungen (o)
;; ==========================================

(if_statement) @conditional.outer
(if_statement (_)) @conditional.inner

(unless_statement) @conditional.outer
(unless_statement (_)) @conditional.inner

(case_statement) @conditional.outer
(case_statement (_)) @conditional.inner

(select_statement) @conditional.outer
(select_statement (_)) @conditional.inner

;; ==========================================
;; Schleifen (l)
;; ==========================================

(for_statement) @loop.outer
(for_statement (_)) @loop.inner

(while_statement) @loop.outer
(while_statement (_)) @loop.inner

(until_statement) @loop.outer
(until_statement (_)) @loop.inner

;; ==========================================
;; Parameter (p)
;; ==========================================

(parameter) @parameter.inner
(parameter) @parameter.outer
(keyword_parameter) @parameter.inner
(keyword_parameter) @parameter.outer

;; ==========================================
;; Kommentare (cm)
;; ==========================================

(comment) @comment.outer
