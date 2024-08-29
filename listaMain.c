#include <stdio.h>
#include <stdlib.h>
#include "lista.h"
Lista *iniciar();
Lista *inse_inicio(Lista *lista, int dado);
void imprime(Lista *l);
Lista * busca(Lista *l, int v);
Lista * retira(Lista *l, int v);
void libera(Lista *l);


int main(){
 Lista *l;
 l= iniciar();
 l= inse_inicio(l, 8);
 l= inse_inicio(l, 3);
 l= inse_inicio(l, 1);
 imprime(l);
 l = busca(l, 8);

 


 return 0;
}