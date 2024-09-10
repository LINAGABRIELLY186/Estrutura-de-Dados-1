#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 6

typedef struct {
   char letra;
   struct No * proximo;
}No;

typedef struct {
    No*topo;
    int tamanho;
}Pilha;

typedef struct{
 Pilha R;
 Pilha G;
 Pilha B;
 int numJogadas; 
}Jogo;

Pilha *criar();
void empilhar(Pilha *piha, char letra);
char desempilha(Pilha *pilha, char letra);
void moverDisco(Jogo *jogo,Pilha *origem, Pilha *destino);
void mostrarPilhas(Jogo *jogo);
void inicializarJogo(Jogo *jogo);
void verificarVitoria(Jogo *jogo);