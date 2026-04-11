/*
Código 05 do PDF: Programação em C
Sessão: Elementos de tomada de decisão
Autor: Kayky Moreira Praxedes
*/

#include <stdio.h>

int main(){
	int valor;
	scanf(" %d", &valor);
	switch (valor){
		case 10: // valor == 10
		// Ação 1
		break;
		case 30: case 40: // valor == 30 || valor == 40
		// Ação 3
		break;
		default: // valor != 10 && valor != 30 && valor != 40
		// Ação padrão
		break; // break facultativo
	}
	return 0;
}