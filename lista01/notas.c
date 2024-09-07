#include <stdio.h>

 int main(){
  float nota1, nota2, nota3, peso1, peso2, peso3, media;
  printf("Digite nota 1:");
  scanf("%f", &nota1);

  printf("Digite nota 2:");
  scanf("%f", &nota2);

  printf("Digite nota 3:");
  scanf("%f", &nota3);

  printf("Digite peso 1:");
  scanf("%f", &peso1);

  printf("Digite peso 2:");
  scanf("%f", &peso2);

  printf("Digite peso 3:");
  scanf("%f", &peso3);

  media= (nota1*peso1+nota2*peso2+nota3*peso3)/peso1+peso2+peso3;

  printf("A media e: %2.f\n", media);


 }