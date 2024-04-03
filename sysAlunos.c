//1 - Add aluno
//2 - Listar alunos
//3 - Atualizar Aluno
//4 - Remover Aluno
//5 - Buscar aluno por matricula
//6 - Buscar aluno por parte do nome


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct aluno
{
    int matricula;
    char nome[120];
    int idade;
    float renda;
};

void pedirDados(struct aluno *novoAluno);
void listarAlunos(struct aluno *alunos, int qtdAlunos);
void atualizarAluno(struct aluno *alunos, int qtdAlunos);
void removerAluno(struct aluno *alunos, int *qtdAlunos, int matricula);
void buscarMatricula(struct aluno *alunos, int serBuscada, int qtdAlunos);
void buscarNome(struct aluno * alunos,char *partedoNome,int qtd_alunos);


int main()
{
    struct aluno *alunos;
    alunos = (struct aluno *)malloc(10 * sizeof(struct aluno));
    int qtd_alunos = 0;
     
    
    

    char menu[] = ">>> SysAlunos <<<\n1 - Add Aluno\n2 - Listar Alunos\n3 - Atualizar aluno \n4 - Remover aluno \n5 - Buscar por matricula\n6 - Buscar por parte do nome \n0 - Sair\n>>> ";
    int opcao;
    system("cls");
    printf("%s", menu);
    scanf("%d", &opcao);
    system("cls");
    
    
    while (opcao != 0)
    
    {  
        if (opcao == 1)
        {
            struct aluno novoAluno;
            pedirDados(&novoAluno);
            alunos[qtd_alunos] = novoAluno;
            qtd_alunos++;
        }
        else if (opcao == 2)
        {
            listarAlunos(alunos, qtd_alunos);
        }
        else if (opcao == 3)
        {
            atualizarAluno(alunos, qtd_alunos);
        }
        else if (opcao == 4){
            int matricula;
            printf("Digite a matrícula do aluno que você deseja remover: ");
            scanf("%d", &matricula);
            removerAluno(alunos, &qtd_alunos, matricula);
        }
        else if (opcao == 5){
            int serBuscada;
            buscarMatricula(alunos,serBuscada, qtd_alunos );
        }
        else if (opcao == 6){
            char partedoNome[120];
            printf("Digite parte do nome do aluno que você deseja buscar: ");
            scanf("%s", partedoNome);
            buscarNome(alunos, partedoNome, qtd_alunos);
        }

        
        printf("%s", menu);
        scanf("%d", &opcao);
        
    }
  free(alunos);
  return 0;
}

void pedirDados(struct aluno *novoAluno)
{
    printf("Matrícula: ");
    scanf("%d", &novoAluno->matricula);

    printf("Nome: ");
    scanf(" %120[^\n]", novoAluno->nome);

    printf("Idade: ");
    scanf(" %d", &novoAluno->idade);

    printf("Renda: ");
    scanf(" %f", &novoAluno->renda);
}

void listarAlunos(struct aluno *alunos, int qtdAlunos)
{
    printf("Alunos Cadastrados\n");

    for (int i = 0; i < qtdAlunos; i++)
    {
        printf("Matricula: %d - Nome: %s\n", alunos[i].matricula, alunos[i].nome);
    }
    printf("------------------\n");
}

void atualizarAluno(struct aluno *alunos, int qtdAlunos)
{
    int matricula;
    printf("Digite a matricula do aluno que você deseja atualizar: \n");
    scanf("%d", &matricula);

    int encontrado = 0;
    for (int i = 0; i < qtdAlunos; i++)
    {
        if (alunos[i].matricula == matricula)
        {
            printf("ALUNO ENCONTRADO!\n");
            printf("DIGITE NOVOS DADOS:\n");
            printf("Nome: ");
            scanf(" %120[^\n]", &alunos[i].nome);

            printf("Idade: ");
            scanf("%d", &alunos[i].idade);

            printf("Renda: ");
            scanf("%f", &alunos[i].renda);
            encontrado = 1;
            printf("Aluno cadrastrado com sucesso! \n");
            break;
        }
    if (!encontrado)
        {
            printf("Aluno com a matricula : %d não encontrado.\n", matricula);
        }
    }
}

    void removerAluno(struct aluno *alunos, int *qtdAlunos, int matricula) {
    int i, j;
    int encontrado = 0;

    for (i = 0; i < *qtdAlunos; i++) {
        if (alunos[i].matricula == matricula) {
            encontrado = 1;
            for (j = i; j < *qtdAlunos - 1; j++) {
                alunos[j] = alunos[j + 1];
            }
            break;
        }
    }


    if (encontrado) {
        (*qtdAlunos)--;
        printf("Aluno removido com sucesso.\n");
    } else {
        printf("Aluno com a matrícula %d não encontrado.\n", matricula);
    }
}

void buscarMatricula(struct aluno *alunos, int serBuscada, int qtdAlunos){
    int i;
    printf("Digite a matricula que você deseja buscar:");
    scanf("%d" , &serBuscada);
    for (i=0 ; i<qtdAlunos ; i++)
    {
        if (serBuscada == alunos[i].matricula){
            printf("INFORMAÇÕES SOBRE O ALUNO \n");
            printf("Matricula: %d - Nome: %s - Renda: %f - Idade: %d - \n", alunos[i].matricula , alunos[i].nome , alunos[i].renda , alunos[i].idade);
            printf("---------------------------------\n");
        }
    }
    

}
void buscarNome(struct aluno * alunos,char *partedoNome, int qtdAlunos){
    int encontrado = 0;
    for (int i=0; i <qtdAlunos ; i++){
      if (strstr(alunos[i].nome, partedoNome) != NULL){
        printf("INFORMAÇÕES SOBRE O ALUNO \n");
        printf("Matricula: %d - Nome: %s - Renda: %f - Idade: %d - \n", alunos[i].matricula , alunos[i].nome , alunos[i].renda , alunos[i].idade);
        printf("---------------------------------\n");
        encontrado= 1;
        

      }
    } if (!encontrado){
        printf("Aluno nao encontrado!\n");
    }



}

