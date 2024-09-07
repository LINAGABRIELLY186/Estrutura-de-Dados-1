#include <stdio.h>

 int main(){
  int minutos, dias, horas , minutos_restan;

  printf("Digite minutos:");
  scanf("%d", &minutos);

  dias = minutos / (60*24);
  horas = (minutos%(60*24)/60);
  minutos = minutos % 60;

  printf("Corresponde a %d dias, %d horas , %d minutos \n", dias, horas, minutos_restan);
  
  return 0;



 }