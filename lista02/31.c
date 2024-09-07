#include <stdio.h>

  int main(){
  
  int binario, decimal;
  int digito1,digito2,digito3,digito4;

  printf ("Digite um numero binario(4 digitos):");
  scanf ("%d", &binario);


  digito1 = binario /1000;
  digito2 = (binario/100)% 10;
  digito3 = (binario / 10) %10;
  digito4 = binario % 10;

  decimal = digito1 * 8+ digito2 *4+ digito3*2 +digito4*1;

  printf("Equivale a: %d em decimal.", decimal);

  return 0;









  }