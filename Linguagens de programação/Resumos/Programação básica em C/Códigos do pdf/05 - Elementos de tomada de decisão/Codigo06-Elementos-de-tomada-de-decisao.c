/*
Código 06 do PDF: Programação em C
Sessão: Elementos de tomada de decisão
Autor: Kayky Moreira Praxedes
*/
		
#include <stdio.h>

int main(){
	int a = 10;
	goto LABEL;
	a *= 2; // a ficaria igual a 20, mas a instrução é pulada pelo goto
	LABEL:
	printf("%d\n", a); // output: 10
	return 0;
}