/*
Código 22 do PDF: Programação em C
Sessão: Pré-processamento
Autor: Kayky Moreira Praxedes
*/

/* mylib.c */
#include "mylib.h"

double media(double* valores, int quantidade){  // Declaração da função
	double total = 0;
	for(int i = 0; i < quantidade; i++) total += valores[i];
	return total / quantidade;
}