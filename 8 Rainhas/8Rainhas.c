#include <stdio.h>
#include <stdlib.h>

/*gera as permutações do vetor*/
void fazPermutacao(int v[], int i, int j) {
  int tmp;
  tmp = v[i];
  v[i] = v[j];
  v[j] = tmp;
}

/*verifica se uma dada permutação do vetor corresponde a uma solução do problema.*/
int validaSolucao(int linhas[]){
  int i;
  int x,y;
  int xx,yy;

  for(i = 0; i < 8; i++){
    x = i;
    y = linhas[i];

    xx = x;
    yy = y;
    while(1){
      xx += 1;
      yy -= 1;
      if(xx > 7 || yy < 0) break;

      if(yy == linhas[xx])
        return 0;
    }

    xx = x;
    yy = y;
    while(1){
      xx -= 1;
      yy -= 1;
      if(xx < 0 || yy < 0) break;

      if(yy == linhas[xx])
        return 0;
    }
  }
  return 1;
}

void imprimeSolucao(int linhas[]){
  char tabuleiro[8][8];
  int i,j;
  int x,y;
  static int nsols = 0;

  nsols++;

  printf("******** SOL: %d ********\n",nsols);

  for(i = 0; i < 8; i++)
    for(j = 0; j < 8; j++)
      tabuleiro[i][j] = '.';

  for(i = 0; i < 8; i++){
    x = i;
    y = linhas[i];
    tabuleiro[y][x] = 'R';
  }

  for(i = 0; i < 8; i++){
    for(j = 0; j < 8; j++){
      printf(" %c ",tabuleiro[i][j]);
    }
    printf("\n");
  }
}

/*testando as permutacoes geradas.*/
void testaPermutacoes(int linhas[], int k) {
  int i;

  if(k == 8) {
    if(validaSolucao(linhas))
      imprimeSolucao(linhas);
  }
  else{
    for(i = k; i < 8; i++) {
      fazPermutacao(linhas, k, i);
      testaPermutacoes(linhas, k + 1);
      fazPermutacao(linhas, i, k);
    }
  }
}

void iniciaSolucao() {
  int linhas[8];
  int i;
  for(i = 0; i < 8; i++)
    linhas[i] = i;
  testaPermutacoes(linhas, 0);
}

int main(){
  iniciaSolucao();
  return 0;
}
