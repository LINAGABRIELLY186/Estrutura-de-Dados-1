#include <stdio.h>

  int main(){
  float num1, num2,soma, dif, div;
  printf("Digite o numero 1:");
  scanf("%f", &num1);
 
  printf("Digite o 2:");
  scanf("%f", &num2);

  
  soma = num1+ num2;
  dif = num1 - num2;

  div = soma/ dif;

  printf("O resultado e: %2.f", div);




  }