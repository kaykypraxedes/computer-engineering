/*
Código 27 do PDF: Programação em C
Sessão: Apêndice A
Autor: Kayky Moreira Praxedes
*/

#include <stdio.h>

int main() {
	int a = 1, total = 0;
	while (a != 0){
		scanf(" %d", &a);
		total += a;
	}
	printf("O total da soma é: %d\nMais um valor para a soma: ", total);
	scanf(" %d", &a);
	printf("O total da soma é: %d\n", total + a);
	return 0;
}