
#include <stdio.h>
#include <stdlib.h>
#include "pilhas.h"


Pilha *criar();
int remover(Pilha *pilha);
void adiciona(Pilha *pilha, int valor);
int vazia(Pilha *pilha);
int cheia(Pilha *pilha);
void mostrar(Pilha *pilha);
void pode_add(Pilha *pilha);
void pode_remov(Pilha *pilha);

int main(){
 Pilha *p1;
 p1= criar();
 adiciona(p1, 10);
 adiciona(p1, 20);
 adiciona(p1, 30);
 mostrar(p1);
 remover(p1);
 


 return 0;
}

