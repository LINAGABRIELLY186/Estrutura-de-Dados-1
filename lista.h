#include <stdio.h>
#include <stdlib.h>

#define LISTA_H

struct lista
{
    int info;
    struct lista * prox;
    
};

typedef struct lista Lista;
Lista *iniciar();
Lista *inse_inicio(Lista *lista, int dado);
void imprime(Lista *l);
Lista * busca(Lista *l, int v);
Lista * retira(Lista *l, int v);
void libera(Lista *l);

//#endif