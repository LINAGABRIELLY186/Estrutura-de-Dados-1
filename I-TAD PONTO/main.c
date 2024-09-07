#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "ponto.h"

Ponto * criar(float,float);
void libera(Ponto *ponto);
void acessa(Ponto *p1,float*x,float*y);
void atribui(Ponto *p1,Ponto *p2,float x,float y);

int main(){
    
   Ponto *p1;
   Ponto *p2;

   char menu[] = "\n SEJA BEM VINDO(A)\n --------------\n 1-Criar novo ponto \n 2-Liberar ponto \n 3-Acessa ponto \n 4-Atribui \n 5-Distancia \n 0- Encerar \n Digite opcao:";
   printf("%s" , menu);
   int opcao;
   scanf("%d", &opcao);


   while (opcao != 0){
   if (opcao == 1){
    //Ponto *p1 = (Ponto*)malloc(sizeof(Ponto));
    criarPonto(p1);
      
    free(p1);
   }
   if (opcao == 2){
     libera(p1);
   }
   if(opcao ==  3){
     void acessa(Ponto *p,float*x,float*y);

   }
   if (opcao == 4){
    void atribui(Ponto *p1,Ponto *p2, float x,float y);
   }
    
   }
    printf("%s", menu);
    scanf("%d", &opcao);

   
 return 0;

}
