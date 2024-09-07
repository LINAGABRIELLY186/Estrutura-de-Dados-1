#include <stdio.h>

  int main(){
  int numero, centena, dezena, unidade, soma, dif;
  printf("Digite um numero:");
  scanf("%d", &numero);

  centena = numero / 100;
  dezena = (numero%100) / 10;
  unidade = numero % 10;

  soma= centena + dezena;
  dif= dezena - unidade;

  printf("A soma dos dois primeiros e: %d || E a diferenca e: %d \n", soma, dif );





  }