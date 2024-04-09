#include <stdio.h>


  int main(){
  int anos,meses,dias, dias_resta;

  

  printf("Digite dias:");
  scanf("%d", &dias);

  anos= dias/365;
  dias_resta=dias%365;
  meses= dias_resta /30;
  dias_resta%=30;






  printf("%d anos, %d meses e %d dias", anos , meses, dias_resta);
  return 0;





  }