#include <stdio.h>


  int main(){
  int anos,meses,dias, dias_totais;

  printf("Digite anos:");
  scanf("%d", &anos);
  
  printf("Digite meses:");
  scanf("%d", &meses);

  printf("Digite dias:");
  scanf("%d", &dias);

  dias_totais= (anos*365) + (meses*30) + dias;

  printf("%d dias totais", dias_totais);
  return 0;





  }