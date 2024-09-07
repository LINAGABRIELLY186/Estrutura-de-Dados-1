#include "ponto.h"
#include <math.h>



Ponto *criarPonto(float x, float y){
   Ponto* p = (Ponto*) malloc(sizeof(Ponto));
    if (p == NULL){ 
       printf("Erro ao alocar\n");
       exit(1);
   
 
 }
 p->x=x;
 p->y=y;
 
 return p;
 
}

void libera(Ponto *ponto){
   free(ponto);
}

void acessa(Ponto *p1,float*x,float*y){
printf("PARA PONTO X: %1.0f | Y: %1.0f", p1->x,p1->y);

}
void atribui(Ponto *p1,Ponto *p2,float x,float y){

printf("Digite X e Y para p1: ", p1->x,p2->y);
printf("Digite X e y para p2:  ", p2->x,p2->y);

}

float distancia(Ponto *p1,Ponto *p2){
    float dx = p2->x - p1->x;
    float dy = p2->y - p1->y;
    return sqrt((dx * dx) + (dy * dy));
}