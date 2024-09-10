#include <stdio.h>
#include <stdlib.h>
#include "hanoi.h"


int main(){
    Jogo jogo;
    char Menu[]= "--TORRE DE HANOI-- \n >Digite 1 para inicar o jogo:";
    int opcao;
    char origem,destino;
    printf("%s", menu);
    scanf("%d", &opcao);
    system("cls");
    
    if(opcao == 1){
        inicializarJogo(&jogo);
        mostrarPilhas(&jogo);
        
        whilhe(1){
            printf("\nDigite as torres de ORIGEM e DESTNO,nessa ordem(EX:R G): ");
            scanf(" %c %c",&origem,&destino);
            
        }

          Pilha *Origem = (origem == 'R') ? &jogo.R : (origem == 'G') ? &jogo.G : &jogo.B;
          Pilha *Destino = (destino == 'R') ? &jogo.R : (destino == 'G') ? &jogo.G : &jogo.B;

          moverDisco(&jogo, pOrigem, pDestino);
          mostrarPilhas(&jogo);

    
          if (verificarVitoria(&jogo)) {
           printf("Parabéns! Você completou o jogo em %d jogadas.\n", jogo.numJogadas);
           break;
            }
     
    }
    
    

    


 return 0;
}