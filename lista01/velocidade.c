#include <stdio.h>
int main () {
   
   int ms;
   float km;
   printf("Digite a velocidade em m/s:");
   scanf("%d", &ms);

   km= ms * 3.6;

   printf("A velocidade em km/h é: %.2f\n", km);


   return 0;
}