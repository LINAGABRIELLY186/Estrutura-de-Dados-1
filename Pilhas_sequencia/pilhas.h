#define MAX 6



typedef struct {
    int topo;
    int itens[MAX];

}Pilha;

Pilha *criar();
int remover(Pilha *pilha);
void adiciona(Pilha *pilha, int valor);
int vazia(Pilha *pilha);
int cheia(Pilha *pilha);
void mostrar(Pilha *pilha);
void pode_add(Pilha *pilha);
void pode_remov(Pilha *pilha);