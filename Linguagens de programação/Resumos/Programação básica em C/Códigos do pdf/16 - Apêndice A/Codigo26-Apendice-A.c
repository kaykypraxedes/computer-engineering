/*
Código 26 do PDF: Programação em C
Sessão: Apêndice A
Autor: Kayky Moreira Praxedes
*/

#include <stdio.h>

int contExtern = 0; // extern int contExtern = 0;
void inicializacao() {
	static int contStatic = 0;
	int contAuto = 0; // auto int contAuto = 0;
	contExtern++, contStatic++, contAuto++;
	printf("%d, %d, %d\n", contExtern, contStatic, contAuto);
}
int main() {
	inicializacao(); // output: 1, 1, 1
	inicializacao(); // output: 2, 2, 1
	inicializacao(); // output: 3, 3, 1
	return 0;
}