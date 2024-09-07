#include <stdio.h>

 int main(){
  int  meses, anos, meses_restan;

  printf("Digite meses:");
  scanf("%d", &meses);

  anos= meses/12;
  meses_restan= meses%12;

  printf("Corresponde ha %d anos e %d meses", anos, meses_restan);

  return 0;



 }