/*
Código 03 do PDF: Programação em C
Sessão: Armazenamento de informações
Autor: Kayky Moreira Praxedes
*/

#include <stdio.h>

const int constante_global = 10;
int variavel_global = 20;

int main(){
	const int constante_local = 30;
	int variavel_local = 40;
	int variavel_global = 50; // Sombreamento da variável global
	printf("constante_global = %d\nvariavel_global = %d\n", constante_global, variavel_global);
	/* output: constante_global = 10
	           variavel_global = 50 */
	for(int i = 0; i < 10; i++){
		// Operação qualquer
	}
	int i = 5; // Como a variável i só existia no for, seu nome pode ser reaproveitado agora
	return 0;                                                                                       
}