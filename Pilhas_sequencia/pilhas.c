#include "pilhas.h"
#include <stdio.h>
#include <stdlib.h>

Pilha *criar(){
   Pilha *pilha= (Pilha*)malloc(sizeof(Pilha));
   if (pilha == NULL){
     printf("Erro ao alocar memoria.");
     exit(1);
   }
   pilha->topo= MAX;
   return pilha;
}
int remover(Pilha *pilha){
  if(vazia(pilha)){
    printf("Pilha vazia!");
    exit(1);
  }
  int valor= pilha->itens[pilha->topo];
  pilha->topo++;

  return valor;
}
void adiciona(Pilha *pilha, int valor){
  if(cheia(pilha)){
    printf("Pilha cheia!\n");
    return;
  }
 
    pilha->topo--;
    pilha->itens[pilha->topo]=valor;
  // printf(pilha);
    
}
int vazia(Pilha *pilha){
    return(pilha->topo == MAX);
}
int cheia(Pilha *pilha){
    return(pilha->topo == 0);
}
void mostrar(Pilha *pilha){
   if(vazia(pilha) || cheia(pilha)){
      printf("Pilha invalida");
      return;
   }
   for(int i=pilha->topo; i<MAX; i++){
     printf("%d | ", pilha->itens[i]);
   }
   printf("\n");
}
void pode_add(Pilha *pilha){
    if(cheia(pilha)){
        printf("Nao é possivel adicionar, pilha cheia \n");
    }
    else {
        printf("Sim, é possivel adicinar. \n");
    }
}
void pode_remov(Pilha *pilha){
   if(vazia(pilha)){
    printf("Nao é possivel remover, pilha vazia");
   }
   else{
     printf("sim, é possivel remover");

   }
}
