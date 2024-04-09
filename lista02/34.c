#include <stdio.h>

  int main(){
  int numero,media, centena,dezena,unidade;

  printf("Digite o numero:");
  scanf("%d", &numero);

  centena = numero/ 100;
  dezena = (numero/10)%10;
  unidade = numero% 10;


  media= (centena+ dezena+ unidade)/3;

  printf("A media dos numeros e : %d", media);

  return 0; 




  }