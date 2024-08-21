#include "matriz.h"

Matriz *cria(int m , int n){
Matriz*matri=(Matriz *) malloc(sizeof(Matriz));

matri->colu=m;
matri->lin=n;
matri->v=(float*) malloc (sizeof(Matriz));

return matri;
}

void libera(Matriz *matriz){
    free(matriz);
}

float acessa(Matriz* matriz, int i, int j) {
    if (i >= 0 && i < matriz->lin && j >= 0 && j < matriz->colu) {
        return matriz->v[i][j];
    } else {
        printf("Índices fora dos limites da matriz.\n");
       
    }
}