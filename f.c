#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct ponto { 
 int x; 
 int y; 
} Ponto; 
typedef struct circulo { 
 Ponto p; 
 int raio; 
} Circulo;
void mostrarCirculo(Circulo *c);
void atribuirVetor(Circulo *c , int n );
void mostrarCirculoVET(Circulo *c, int n);

int main(){
  srand(time(NULL));
//q1
  Ponto p1;
  p1.x=0;
  p1.y=0;

  printf("Digite os valores de X , Y PARA P1: ");
  scanf("%d %d" , &p1.x , &p1.y);
 
  Circulo c1;
  c1.p.x=0;
  c1.p.y=0;
  c1.raio=0;

  printf("Digite os valores de X , Y  e RAIO  PARA C1: ");
  scanf("%d %d %d" , &c1.p.x , &c1.p.y , &c1.raio);
 
   //Circulo *c2;
   Circulo *c2= (Circulo *)malloc(sizeof(Circulo));
   c2->p.x=0;
   c2->p.y=0;
   c2->raio=0;  

   printf("Digite os valores de X , Y e RAIO PARA *C2:");
   scanf("%d %d %d" , &c2->p.x ,&c2->p.y ,&c2->raio );
    
   Circulo *c3= (Circulo *)malloc(sizeof(Circulo));
   //alterando valores de c1
   c3=&c1;
   c3->p.x=10;
   c3->p.y=50;
   c3->raio=9;  


   Circulo vet[10];
   //Circulo vet= (Circulo *)malloc(sizeof(Circulo));
   
   mostrarCirculo(&c1);
   mostrarCirculo(c2);
   mostrarCirculo(c3);
   atribuirVetor(vet , 10);
   mostrarCirculoVET(vet,10 );
   free(c2);
   free(c3);
   
   return 0;
}

void mostrarCirculo(Circulo *c){
    printf("\nPonto X:%d \n| Ponto Y:%d \n| Raio:%d \n", c->p.x,c->p.y,c->raio );

 }
void atribuirVetor(Circulo *c , int n ){
  for(int i; i<n;i++){
   c[i].p.x = rand()%100;
   c[i].p.y = rand()%100;
   c[i].raio = rand()%100;
   
  }


}
void mostrarCirculoVET(Circulo *c, int n) {
    for (int i = 0; i < n; i++) {
        printf("Circulo %d - Ponto X: %d | Ponto Y: %d | Raio: %d\n", 
                i + 1, c[i].p.x, c[i].p.y, c[i].raio);
    }
}