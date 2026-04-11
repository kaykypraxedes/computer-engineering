/*
Código 12 do PDF: Programação em C
Sessão: Ponteiros
Autor: Kayky Moreira Praxedes
*/

#include <stdio.h>

void divisao(int valor, int* referencia){ // Recebe um elemento int e um endereço de int
	valor /= 2; // Copia local de a
	*referencia /= 2; // Ponteiro com o endereço de b
}
int main(){
	int a = 10, b = 10;
	divisao(a, &b); // Envia o valor de a e o endereço de b
	printf("a = %d, b = %d\n", a, b); // output: a = 10, b = 5
	return 0;
}	