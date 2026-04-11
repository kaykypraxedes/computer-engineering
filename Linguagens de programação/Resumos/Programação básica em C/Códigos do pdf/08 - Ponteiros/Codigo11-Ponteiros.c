/*
Código 11 do PDF: Programação em C
Sessão: Ponteiros
Autor: Kayky Moreira Praxedes
*/

#include <stdio.h>

int main(){
	int a = 10;
	int* b; // Declaração de um ponteiro de int
	b = &a; // b recebe o endereço de a
	(*b)++; // Mesmo que a++;
	printf("%d\n", a); // output: 11
	int* c = &a; // Declaração e atribuição de um ponteiro
	int** d, * e; // declaração de múltiplos ponteiros (ponteiro para ponteiro de int, e ponteiro de int)
	d = &b; // d == &b: *d == b == &a: **d == *b == a
	return 0;
}