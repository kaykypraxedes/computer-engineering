/*
Código 02 do PDF: Programação em C
Sessão: Armazenamento de informações
Autor: Kayky Moreira Praxedes
*/

#include <stdio.h>
		
int main(){ // void implícito nos argumentos
	char a; // Declaração de uma variável
	a = 'c'; // Atribuição de um valor literal a variável
	int b = 20; // Declaração com atribuição diretamente
	int c = b, d = 40 + 20; // Declaração múltipla com atribuição indireta (variável) e literal (expressão)
	printf("a = %c, b = %d, c = %d, d = %d\n", a, b, c, d); // output: a = c, b = 20, c = 20, d = 60
	return 0; // O \n é utilizado para redirecionar o terminal para a linha de baixo (quebra linha)
}