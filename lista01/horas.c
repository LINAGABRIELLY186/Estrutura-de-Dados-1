#include <stdio.h>

int main(){
 

 int horas,minutos,resultado;

 printf("Digite horas:");
 scanf("%d", &horas);


 printf("Digite minutos:");
 scanf("%d", &minutos);
 
 
 resultado= (horas * 60)+minutos;

 printf("Os minutos totais sao: %.d \n ", resultado);


}