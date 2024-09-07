#include <stdio.h>
#include <stdlib.h>
#include "pilhasEnc.h"

int main(){
   Pilha *p1= criar();

   adiciona(p1, 10);
   adiciona(p1, 20);
   adiciona(p1, 30);
  
   mostrar(p1);

   remover(p1);

   mostrar(p1);


}