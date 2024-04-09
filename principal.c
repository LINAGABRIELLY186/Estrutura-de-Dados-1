#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "banco.h"
#include <windows.h>
//MAIN


void abrirConta(Banco *banco, Contas *contas);
void Depositar(Banco *banco, Contas *conta, int qtd_contas);
void sacar(Banco *banco , Contas *conta , int qtd_contas);



int main() {
    Banco banco;
    int qtd_contas = 0;

    char menu[] = "\n SEJA BEM VINDO(A) \n -----Cadrasto e Transações-----\n1 - Abrir conta\n2 - Depositar\n3 - Sacar\n4 - Realizar PIX\n5 - Contas cadastradas\n6 - Consultar chave pix\n7 - Extrato\n\n0 - Encerrar\n>>>";
    int opcao;
    printf("%s", menu);
    scanf("%d", &opcao);
    system("cls");
    
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
        else if(opcao == 3){
          sacar(&banco, banco.contas , qtd_contas);

        }
        else if (opcao == 4){
          fazer_pix(&banco , banco.contas , qtd_contas);
        }
        else if (opcao == 5){
          contas_cadastradas(&banco, banco.contas, qtd_contas);
        }
        else if (opcao == 6){
          consultar_chave(&banco, banco.contas, qtd_contas);
        }else if (opcao == 7){
          extrato(&banco, banco.contas,qtd_contas);
        }
       // system("cls");
        printf("%s", menu);
        scanf("%d", &opcao);
    }

    return 0;
}



