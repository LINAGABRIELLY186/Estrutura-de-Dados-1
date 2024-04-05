#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "banco.h"
#include <windows.h>
//#include "banco.c"



void abrirConta(Banco *banco, Contas *contas);
void Depositar();

//#include <stdio.h>
//#include "banco.h"

int main() {
    Banco banco;
    int qtd_contas = 0;

    char menu[] = "-----BEM VINDO----\n1 - Abrir conta\n2 - Depositar\n0 - Encerrar\n>>>";
    int opcao;
    printf("%s", menu);
    scanf("%d", &opcao);
    
    Contas novaConta;
    
    while (opcao != 0) {
        if (opcao == 1) {
            Contas novaConta;
            abrirConta(&banco, &novaConta);
            banco.contas[qtd_contas] = novaConta;
            qtd_contas++;
        }
        else if (opcao == 2){
          
          Depositar(&banco,banco.contas, qtd_contas);
        }
        printf("%s", menu);
        scanf("%d", &opcao);
    }

    return 0;
}



