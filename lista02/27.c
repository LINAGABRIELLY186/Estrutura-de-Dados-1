#include <stdio.h>

  int main(){
   int segundos, horas, minutos, seg_resta;
   printf("Digite segundos:");
   scanf("%d", &segundos);
 
   horas= segundos/3600;
   minutos= (segundos%3600)/60;
   seg_resta= seg_resta%60;

   printf("%d horas, %d minutos e %d segundos.", horas,minutos,seg_resta);

  return 0;


  }