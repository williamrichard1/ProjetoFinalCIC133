(defun mdc(a b)
  (do () ((zerop b) (abs a))
    (shiftf a b (mod a b))))