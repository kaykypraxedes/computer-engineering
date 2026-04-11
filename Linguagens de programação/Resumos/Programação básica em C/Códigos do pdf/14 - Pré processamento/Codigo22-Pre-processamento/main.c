/*
Código 22 do PDF: Programação em C
Sessão: Pré-processamento
Autor: Kayky Moreira Praxedes
*/

/* main */
#include <stdio.h>
#include "mylib.h"

int main(){
	double valores[] = {DEZ, 20, 25, 30}; // Uso de variável global da biblioteca externa
	printf("Média = %.2lf\n", media(valores, 4)); // Uso de função da biblioteca externa
	Ponto ponto = {10, 20}; // Declaração de struct da biblioteca externa
	return 0;
}