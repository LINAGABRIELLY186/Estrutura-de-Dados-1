#include <stdio.h>

 int main(){
  
  int dias,semanas,dias_resta;
  printf("Digite dias:");
  scanf("%d", & dias);

  semanas = dias/4;
  dias_resta= dias%4;

  printf("Equivalem a %d semanas e %d dias" , semanas, dias_resta);



return 0;


 }