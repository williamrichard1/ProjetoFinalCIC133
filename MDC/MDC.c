#include<stdio.h>

int calculaMdc(int u, int v) {
  if (u < 0) u = -u;
  if (v < 0) v = -v;
  if (v) while ((u %= v) && (v %= u));
  return (u + v);
}

int main(){
    int primeiroNum, segundoNum;

    printf("Digite o primeiro numero: ");
    scanf("%d", &primeiroNum);
    printf("Digite o segundo numero: ");
    scanf("%d", &segundoNum);

    int resultado = calculaMdc(primeiroNum, segundoNum);
    printf("\n\nO MDC de %d e %d eh: %d\n", primeiroNum, segundoNum,resultado );
    return 0;
}
