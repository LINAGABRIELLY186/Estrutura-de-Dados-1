#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hanoi.h"

Pilha *criar(){
 Pilha *pilha= (Pilha *)malloc(sizeof(Pilha));
  if(pilha == NULL);
   exit(1);
   
   pilha->topo=NULL;
   return pilha;
}

void empilhar(Pilha *pilha, char letra){
   if(pilha->tamanho >= MAX){
    printf("Pilha cheia.");
     return;
   }
    No *novoNo = (No *)malloc(sizeof(No));
    novoNo->letra = letra;
    novoNo->proximo = pilha->topo;
    pilha->topo = novoNo;
    pilha->tamanho--;
}
char desempilha(Pilha *pilha, char letra){
  if(pilha->topo == NULL){
    printf("Pilha vazia.");
     return;
   }
   No *noDesemp= pilha->topo;
   char letra= noDesemp->letra;
   pilha->topo= noDesemp->proximo;
   free(noDesemp);
   pilha->tamanho++;
   return letra;
}
void moverDisco(Jogo *jogo,Pilha *origem, Pilha *destino){
   if(Vazia(origem)){
    printf("Pilha origem vazia.");
    return;
   }
   if (destino ->tamanho >= MAX){
    printf("Pilha de destino cheia.\n");
     return;
   }
  char letra = desempilha(origem);
  empilhar(destino, letra);

  jogo->numJogadas++;
  
  
}
void mostrarPilhas(Jogo *jogo) {
    printf("Pilha R: ");
    No *atual = jogo->Pilha_R.topo;
    while (atual != NULL) {
        printf("%c ", atual->letra);
        atual = atual->proximo;
    }
    printf("\n");

    printf("Pilha G: ");
    atual = jogo->Pilha_g.topo;
    while (atual != NULL) {
        printf("%c ", atual->letra);
        atual = atual->proximo;
    }
    printf("\n");

    printf("Pilha B: ");
    atual = jogo->Pilha_B.topo;
    while (atual != NULL) {
        printf("%c ", atual->cor);
        atual = atual->proximo;
    }
    printf("\n");

    printf("Numero de jogadas:", jogo->numJogadas);
}
int Vazia(Pilha *pilha){
    return pilha->topo == NULL;
}
void inicializarJogo(Jogo *jogo) {
    jogo->R = *criar();
    jogo->G = *criar();
    jogo->B = *criar();

    empilhar(&jogo->R, 'R');
    empilhar(&jogo->R, 'B');
    empilhar(&jogo->R, 'G');
}
void verificarVitoria(Jogo *jogo){
 No *atual;

 atual=jogo->R.topo;
 while (atual!=NULL)
 {
    if(atual->letra != 'R')return 0;
    atual = atual->proximo;
 }

 atual=jogo->G.topo;
 while (atual!=NULL)
 {
    if(atual->letra != 'G')return 0;
    atual = atual->proximo;
 }

 atual=jogo->B.topo;
 while (atual!=NULL)
 {
    if(atual->letra != 'B')return 0;
    atual = atual->proximo;
 }
 
}