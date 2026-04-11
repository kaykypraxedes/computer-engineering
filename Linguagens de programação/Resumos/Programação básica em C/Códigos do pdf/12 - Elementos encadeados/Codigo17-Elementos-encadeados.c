/*
Código 17 do PDF: Programação em C
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