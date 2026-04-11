/*
Código 10 do PDF: Programação em C
Sessão: Funções
Autor: Kayky Moreira Praxedes
*/

#include <stdio.h>

void fibonacci_recursivo(int antecessor, int atual, int termo){
	printf("%d, ", antecessor);
	if(--termo > 1) // Chamada recursiva dos n primeiros termos da sequência
		fibonacci_recursivo(atual, antecessor + atual, termo);
	else printf("%d\n", atual); // Fim da chamada
}
int main(){
	fibonacci_recursivo(1,1,15); // Imprime 15 termos da sequencia de fibonacci
	return 0; // output: 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610
}