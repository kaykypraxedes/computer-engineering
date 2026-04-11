/*
Código 23 do PDF: Programação em C
Sessão: Programa pelo terminal
Autor: Kayky Moreira Praxedes
*/

#include <stdio.h>

int main(int argc, char* argv[]){
	printf("A última mensagem enviada pela execução do programa pelo terminal é: %s\n", argc ==1 ? "Não foi enviado nada" : argv[argc - 1]);
	return 0;
}