#include <stdio.h>

 int main(){
   float salario, novo;

  printf("Digite seu salario:");
  scanf("%f", &salario);

  novo = (salario * 25)/100 + salario;

  printf("Seu novo salario e: %.2f " , novo);

  return 0;










 }