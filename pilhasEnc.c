#include "pilhasEnc.h"
#include <stdio.h>
#include <stdlib.h>


Pilha *criar(){
  Pilha *pilha= (Pilha *)malloc(sizeof(Pilha));
  if(pilha == NULL);
   exit(1);
   
   pilha->topo=NULL;
   return pilha;
}
int remover(Pilha *pilha){
   if(vazia(pilha)){
    printf("Pilha vazia!");
    exit(1);
  }
  No* noRemovido=pilha->topo;
  int valorRemovido=noRemovido->valor ;
  pilha->topo=noRemovido->proximo;
  printf("Valor removido: %d", noRemovido->valor);
  free(noRemovido);
  return valorRemovido;

}
void adiciona(Pilha *pilha, int valor){
    No *novoNO = (No *)malloc(sizeof(No));
    if(novoNO == NULL);
    exit(1);
     
    
    novoNO->valor = valor; 
    novoNO->proximo = pilha->topo; //novo no aponta para o topo anterior.
    pilha->topo = novoNO;  //novo no agora é o topo.

}
int vazia(Pilha *pilha){
    return pilha->topo == NULL; //diferença de pilha por sequencia pois se tem vetor estaria cheio quando apontasse para o tamanho, mas essa é alocada dinamicamente.
      
}
int cheia(Pilha *pilha){
    //nao encontrei solução, pois se é alocado dinmicamente so estaria cheia caso falte memoria na maquina.
}
void mostrar(Pilha *pilha){
    if(vazia(pilha));
      printf("Pilha vazia!\n");

    No *atual =pilha->topo;
    while(atual != NULL){
        printf(" %d |", atual->valor);
    }
    printf("\n");

}

void pode_remov(Pilha *pilha){
    if(vazia(pilha));
      printf("Nao é possivel remover,pilha vazia.");
    return;
}