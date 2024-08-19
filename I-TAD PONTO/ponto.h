#include <stdio.h>
#include <string.h>
#include <stdlib.h> 
#ifndef PONTO_H
#define PONTO_H

struct ponto{
  float x;
  float y;

};
typedef struct ponto Ponto;

Ponto * criar(float,float);
void libera(Ponto *ponto);
void acessa(Ponto *p1,float*x,float*y);
void atribui(Ponto *p1,Ponto *p2,float x,float y);


#endif