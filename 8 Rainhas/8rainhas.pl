solucao([]).
 
solucao([X/Y|Others]) :-
 solucao(Others),
 rainhas(Y, [1,2,3,4,5,6,7,8]),
 naoataca(X/Y, Others).
 
naoataca(_,[]).
 
naoataca(X/Y,[X1/Y1|Others]) :-
 Y =\= Y1,
 Y1 - Y =\= X1 - X,
 Y1 - Y =\= X - X1,
 naoataca(X/Y,Others).
 
rainhas(X,[X|L]).
 
rainhas(X,[Y|L]) :- rainhas(X,L).
 
tabuleiro([1/Y1,2/Y2,3/Y3,4/Y4,5/Y5,6/Y6,7/Y7,8/Y8]).