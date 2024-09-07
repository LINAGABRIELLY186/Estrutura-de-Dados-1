#include <stdio.h>
#include <string.h>
#include <stdlib.h> 
#ifndef MATRIZ_H
#define MATRIZ_H

struct matriz{
  int lin;
  int colu;
  float *v;

};
typedef struct matriz Matriz;

Matriz *cria(int m , int n);
void libera(Matriz *matriz);
float acessa(Matriz* matriz, int i, int j);

#endif