#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>


#ifndef BANCO_H
#define BANCO_H
#define MAX_CONTAS 100

typedef struct{
  int numero;
  int PIX[250];
  char titular[150];
  char endereco_clinte[250];
  int idade;
  float saldo;
  char CPF;
  

}Contas;

typedef struct{
  char nome_banco[120];
  char endereco_banco[120];
  Contas contas[MAX_CONTAS];
}Banco;


    

void abrirConta(Banco *banco, Contas *conta);
void Depositar(Banco *banco, Contas *conta, int qtd_contas);

#endif