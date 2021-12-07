#include<stdio.h>
int MDC(int u, int v) {
  if (u < 0) u = -u;
  if (v < 0) v = -v;
  if (v) while ((u %= v) && (v %= u));
  return (u + v);
}

void main(){
int primeiroNum, segundoNum;

scanf("%d", &primeiroNum);
scanf("%d", &segundoNum);
int resultado = MDC(primeiroNum, segundoNum);
printf("%d", resultado);
}
