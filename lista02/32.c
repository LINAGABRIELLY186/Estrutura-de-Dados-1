#include <stdio.h>

  int main(){
   int numero,dif,inverso,centena,dezena,unidade;

   printf("Dgite o numero:");
   scanf("%d", &numero);

   centena = numero/ 100;
   dezena = (numero/10)%10;
   unidade = numero% 10;

   inverso = unidade *100 + dezena *10+ centena;

   dif= numero-inverso;

   printf("%d essa e o inveso , e a diferenca e: %d", inverso, dif);

   return 0;


  }