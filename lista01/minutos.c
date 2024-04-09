#include <stdio.h>

int main(){
  float minutos;
  float horas;
  printf("Digite minutos:");
  scanf("%f", &minutos);

  horas= minutos / 60;

  printf("Equivale : %.2f em horas." , horas);




  return 0;
}