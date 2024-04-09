#include <stdio.h>
 int main(){

  int horas, semanas, dias, horas_restan;

   printf("Digite horas:");
   scanf("%d", horas);

   semanas = horas / (24*7);
   dias = (horas% (24*7)) / 24;
   horas_restan = horas % 24;

   printf("Corresponde a %d semanas, %d dias, %d horas \n", semanas, dias, horas_restan);


   return 0;




  }