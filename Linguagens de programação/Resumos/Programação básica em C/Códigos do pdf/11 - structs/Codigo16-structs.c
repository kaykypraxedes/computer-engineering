/*
Código 16 do PDF: Programação em C
Sessão: structs
Autor: Kayky Moreira Praxedes
*/

#include <stdio.h>

// Definição da "struct carta"
struct carta{
	char *naipe, *face;
	int valor;
};

// Pode-se definir um nome menor para declarar ao invés de "struct carta"
typedef struct carta carta;

typedef struct carta CartaDeBaralho;

int main(){
	struct carta a; // Declaração de uma variável do tipo "struct carta"
	a.naipe = "Paus"; a.valor = 9; a.face = "Nove";
	// Declarações usando os nomes do type def
	carta b = {"Ouros", "Rei", 10}; // Declaração e inicialização ordenada dos elementos
	CartaDeBaralho c = {.face = "As", .valor = 11, .naipe = "Copas"}; // Declaração nomeada (ordem livre)
	return 0;
}