#include <stdio.h>
#include <stdlib.h>
#include "matriz.h"

Matriz *cria(int m , int n);



int main(){
 Matriz *matriz;

   char menu[] = "\n SEJA BEM VINDO(A)\n --------------\n 1-Criar  \n 2-Liberar \n 3-Acessa  \n 4-Atribui \n 5-Linhas \n 0- Encerar \n Digite opcao:";
   printf("%s" , menu);
   int opcao;
   scanf("%d", &opcao);


   while (opcao != 0){
   if (opcao == 1){
     cria(matriz);
   }
   if (opcao == 2){
    libera();
   }
   if (opcao == 3){
    acessa();
   }
   }



}