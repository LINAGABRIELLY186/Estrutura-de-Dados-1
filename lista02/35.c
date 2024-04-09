#include <stdio.h>

  int main(){

  int numero, unmilhar,centena,dezena,unidade, soma;

  printf("Digite o numero(4 digitod):");
  scanf("%d", &numero);

  unmilhar= numero/1000;
  centena= (numero/100)%10;
  dezena= (numero/10)%10;
  unidade= numero%10;

  soma= unmilhar + centena+dezena+unidade;

  printf("A soma do numero (%d) , e: %d", numero, soma);
  return 0;


  }