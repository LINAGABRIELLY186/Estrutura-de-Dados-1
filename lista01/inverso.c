#include <stdio.h>
 int main(){
 int numero, centena, dezena, unidade;

 printf("Digite um numero:");
 scanf("%d", &numero);

 centena = numero/ 100;
 dezena= (numero%100) / 10;
 unidade = numero%10;

 printf("%d %d %d", unidade, dezena,centena);

 return 0;


 }