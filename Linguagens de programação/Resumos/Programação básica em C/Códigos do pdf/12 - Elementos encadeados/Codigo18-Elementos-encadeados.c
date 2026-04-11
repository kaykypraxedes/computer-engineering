/*
Código 18 do PDF: Programação em C
Sessão: Elementos encadeados
Autor: Kayky Moreira Praxedes
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct lista { // Definição da "struct" diretamente com o typedef
	int elemento;
	struct lista* proximo; // Ponteiro para o próximo nó
} Lista;

typedef Lista* ListaPtr; // Facilitador de sintaxe para ponteiros (vai usar bastante)

int add_crescente(ListaPtr* lista, int valor) {
	ListaPtr novo_no = calloc(1, sizeof(Lista)), atual = *lista, prev = NULL;
	if (!novo_no) return -1;
	novo_no->elemento = valor;
	// Procura a posição até o final da lista ou até o valor ser maior do que o novo
	while (atual != NULL && atual->elemento < valor) {
		prev = atual;
		atual = atual->proximo;
	} novo_no->proximo = atual; // atual->elemento >= valor ou atual == null (último elemento)
	if (prev == NULL) *lista = novo_no; // Inserção no primeiro elemento
	else prev->proximo = novo_no; // Inserção depois do prev
	return 0; // Antes: [..., prev, atual, atual->proximo, ...]
} 			  // Depois : [..., prev, novo_no, atual, atual->proximo, ...]

int main(){
	ListaPtr minha_lista = NULL; // Uso de um ponteiro pois será usada alocação dinâmica
	int valor;
	scanf("%d", &valor);
	while (valor != 0){
		ListaPtr novo_no = (ListaPtr)malloc(sizeof(Lista));
		if (novo_no == NULL) return 1; // Falha na alocação
		// Exemplo de pilha (elemento adicionado no início da lista)
		novo_no->elemento = valor; // Equivalente à (*novo_no).elemento = valor;
		novo_no->proximo = minha_lista;
		minha_lista = novo_no;
		scanf("%d", &valor);
	} // loop para desalocar a memória
	while(minha_lista != NULL){ // Cada nó tem de ser liberado individualmente
		ListaPtr temp = minha_lista; // Guarda nó atual para liberar depois
		minha_lista = minha_lista->proximo; // Avança para o próximo nó
		free(temp); // Liberar a memória do nó atual
	} return 0;
}