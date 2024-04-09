#include <stdio.h>

 int main(){
 int numero,centena,dezena,unidade,soma;
 printf("Digite um numero:");
 scanf("%d", &numero);


 centena = numero/100;
 dezena = (numero%100)/ 10;
 unidade = numero % 10;


 soma= centena + dezena + unidade;

 printf("O resultado e: %d" , soma);




 }