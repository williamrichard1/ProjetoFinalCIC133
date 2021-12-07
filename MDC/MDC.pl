mdc(X, 0, X):- !.
mdc(0, X, X):- !.
mdc(X, Y, D):- X > Y, !, Z is X mod Y, mdc(Y, Z, D).
mdc(X, Y, D):- Z is Y mod X, mdc(X, Z, D).