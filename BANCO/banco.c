#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "banco.h"


void abrirConta(Banco *banco, Contas *conta){
    
    printf("Digite o nome do banco:");
    scanf(" %120[^\n]" , banco->nome_banco);

    printf("Digite o endereço do banco: ");
    scanf(" %120[^\n]" , banco->endereco_banco);

    printf("Crie uma chave PIX (CPF) para o titular:");
    scanf(" %d" , &conta->PIX);

    printf("Digite o nome do titular");
    scanf(" %250[^\n]" , conta->titular);

    printf("Digite o numero da conta:");
    scanf(" %120[^\n]" , conta->numero);

    printf("Digite o saldo do seu banco:");
    scanf( " %f" , &conta->saldo);

    printf("Digite o endereço do titular:");
    scanf(" %250[^\n]" , conta->endereco_clinte);

    printf("Digite a idade do titular:");
    scanf(" %d" , &conta->idade);

    printf("Digite o CPF do titular:");
    scanf(" %s" , &conta->CPF);

    printf("CONTA CADRASTRADA!\n");

}
void Depositar(Banco *banco, Contas *conta, int qtd_contas) {
    int conta_saida;
    int conta_destino;
    int valor;

    printf("Qual o número da conta de saída? (Número da conta): ");
    scanf("%d", &conta_saida);

    for (int i = 0; i < qtd_contas; i++) {
        if (conta[i].numero == conta_saida) {
            printf("Número da conta: %d - Titular: %s\n", conta[i].numero, conta[i].titular);

            printf("Para qual conta você deseja depositar? (Número da conta): ");
            scanf("%d", &conta_destino);

            for (int j = 0; j < qtd_contas; j++) {
                if (conta[j].numero == conta_destino) {
                    printf("Número da conta: %d - Titular: %s\n", conta[j].numero, conta[j].titular);
                    printf("Digite o valor a ser depositado: ");
                    scanf("%d", &valor);

                    conta[j].saldo += valor;

                    printf("Depósito realizado com sucesso!\n");
                    return;
                }
            }

            printf("Conta de destino inválida.\n");
            return;
        }
    }

    printf("Conta de saída inválida.\n");
}









