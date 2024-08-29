#include "lista.h"

Lista * iniciar(){
  return NULL;

}

Lista *inse_inicio(Lista *lista, int info){
   Lista * novo =(Lista*)malloc(sizeof(Lista));
   novo->info= info;
   novo->prox=lista;

   return novo;

}

void imprime(Lista *l){
  Lista *p;
  for(p=l; p!=NULL; p= p->prox){
    printf("Valor: %d ", p->info );
  }
}

Lista * busca(Lista *l, int v){
  Lista *p;
  for(p=l;p=NULL;p=p->prox){
    if(p->info == v)
       return p;
  }
  return -1;

}

Lista * retira(Lista *l, int v){
 Lista * ant= NULL;
 Lista *p=l;
//corta laços
 while (p != NULL && p->info == v){
   ant= p; // o anterior  vai ser o proximo, pois ele ja esta no proximo.
   p = p->prox; //para que o proximo seja atualizado.
 }
 if (ant == NULL){
  l= p->prox; //retirando o ultimo elemento, l aprontando para o proximo.
 }
 else {
   ant->prox= p->prox; //faz com que "pule" p, pois o anterior aponta para o proximo e nao para p.
 }
 free(p);
 return 1;

}

void libera(Lista *l){
  Lista *p =l;
  while(p != NULL){
    Lista * t= p->prox;
  }
    free(p);
    p = t;


}
