#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "banco.h"
#include <windows.h>
//FUNÇOES
void abrirConta(Banco *banco, Contas *conta){
    
    printf("Digite o nome do banco:");
    scanf(" %120[^\n]" , banco->nome_banco);

    printf("Digite o endereço do banco:");
    scanf(" %120[^\n]" , banco->endereco_banco);

    printf("Crie uma chave PIX (CPF) para o titular:");
    scanf(" %49[^\n]" , conta->PIX);

    printf("Digite o nome do titular:");
    scanf(" %100[^\n]" , conta->titular);

    printf("Digite o numero da conta:");
    scanf(" %100[^\n]" , conta->numero);

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
    char conta_saida[10];
    char conta_destino[10];
    float valor;

    printf("Qual o número da conta de saída? (EXEMPLO: 000-0): ");
    scanf("%s", &conta_saida);

    for (int i = 0; i < qtd_contas; i++) {
        if (strcmp(conta_saida, conta[i].numero) == 0) {
            printf("Número da conta: %s - Titular: %s\n", conta[i].numero, conta[i].titular);

            printf("Para qual conta você deseja depositar? (Número da conta): ");
            scanf("%s", &conta_destino);

            for (int j = 0; j < qtd_contas; j++) {
                if (strcmp(conta_destino, conta[j].numero) == 0) {
                    printf("Número da conta: %s - Titular: %s\n", conta[j].numero, conta[j].titular);
                    printf("Digite o valor a ser depositado: ");
                    scanf("%f", &valor);

                    conta[j].saldo += valor;
                    conta[i].saldo -= valor;

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

void sacar(Banco *banco , Contas *conta , int qtd_contas){
   char conta_saque[10];
   float valor;

   printf("Qual o número da conta que deseja sacar? (EXEMPLO: 000-0): ");
    scanf("%s", conta_saque);

    for (int i = 0; i < qtd_contas; i++) {
        if (strcmp(conta_saque, conta[i].numero) == 0){
            printf("Numero da conta : %s , Titular : %s , Saldo : %2.f \n" , conta[i].numero , conta[i].titular , conta[i].saldo);
            printf("Digite o valor que deseja sacar:");
            scanf("%f" , &valor);
          if (valor<= conta[i].saldo){
            conta[i].saldo -= valor;
            printf("VOCE SACOU: %.2f , SEU SALDO ATUAL: %.2f\n" , valor , conta[i].saldo);
            return;
          }
          else {
            printf("SALDO INSUFICIENTE\n");
            return;
          }

        }

    
}
}
void fazer_pix(Banco *banco , Contas *conta , int qtd_contas){
    char conta_saida[39];
    char conta_destino[39];
    float valor;

    printf("Digite sua chave PIX:\n");
    scanf(" %30[^\n]" , conta_saida);
     for (int i = 0; i < qtd_contas; i++) {
        if (strcmp(conta_saida, conta[i].PIX) == 0){
            printf("SUA CHAVE PIX : %s , Titular : %s , Saldo : %2.f \n" , conta[i].PIX , conta[i].titular , conta[i].saldo);
            printf("Digite o valor que deseja mandar no PIX:\n");
            scanf("%f" , &valor);
            if (valor<=0){
                printf("Valor invalido para PIX!\n");
                return;
            }
            if (valor<= conta[i].saldo){
            printf("Para quem voce deseja mandar?(DIGITE A CHAVE PIX CPF):");
            scanf("%s" , conta_destino);
            for (int j = 0; j < qtd_contas; j++) {
             if (strcmp(conta_destino, conta[j].PIX) == 0){
               printf("CHAVE PIX DE QUEM VAI RECEBER : %s , TITULAR : %s , VALOR : %0.2f \n " ,conta[j].PIX , conta[j].titular , valor );
               printf("DESEJA CONFIRMA PIX?(TECLE >>>ENTER<<<):");
               getchar();
               conta[i].saldo -= valor;
               conta[j].saldo += valor;
               printf("PIX REALIZADO COM SUCESSO!VOCE MANDOU: %.2f , SEU SALDO ATUAL: %.2f\n" , valor , conta[i].saldo);
               return;
          }
          
     printf("Sua conta nao foi encontrada!\n");
           

            }
            }

}
 }

}
void contas_cadastradas(Banco *banco , Contas *contas , int qtd_contas){
  

  printf("CONTAS CADASTRADAS : \n");
  printf("---------------------\n");
  if (qtd_contas <= 0) {
        printf("Nenhuma conta cadastrada.\n");
        
    }
  for(int i=0 ; i<qtd_contas; i++){
        printf("Conta #%d\n", i + 1);
        printf("Número da Conta: %s\n", contas[i].numero);
        printf("Titular: %s\n", contas[i].titular);
       
        printf("---------------------\n");
       

}
  }
  void consultar_chave(Banco *banco , Contas *contas , int qtd_contas){
  char numero[10];
  printf("Digite o numero da conta que voce deseja consultar chave PIX:\n");
  scanf("%s" , numero);
     for (int i = 0; i < qtd_contas; i++) {
          if (strcmp(numero, contas[i].numero) == 0){
            printf("CHAVE PIX : %s , Titular : %s" , contas[i].PIX , contas[i].titular);
            
          }
          
     }
}
void extrato(Banco *banco, Contas *conta , int qtd_contas){
  char numero[10];
  printf("Digite o numero da conta que voce deseja consultar EXTRATO:\n");
  scanf("%s" , numero);
     for (int i = 0; i < qtd_contas; i++) {
          if (strcmp(numero, conta[i].numero) == 0){
             printf("--------------------\n");
             printf("Número da Conta: %s\n", conta[i].numero);
             printf("Titular: %s\n", conta[i].titular);
             printf("Saldo: %.2f\n", conta[i].saldo);
             printf("Chave pix: %s\n" , conta[i].PIX);
             
             printf("---------------------\n");
            
          }
          


     }
}











