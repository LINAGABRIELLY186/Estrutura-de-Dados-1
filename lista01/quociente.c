#include <stdio.h>

  int main(){
  int num1, num2, quociente, resto;
  

  printf("Digite o primeiro numero:");
  scanf("%d", &num1);

  printf("Digite o segundo numero:");
  scanf("%d", &num2);

  quociente = num1 / num2;
  resto = num1% num2;

  printf("O quociente e : %d , e o resto e: %d" , quociente, resto);

  return 0;


  }