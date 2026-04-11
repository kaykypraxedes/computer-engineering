/*
Código 07 do PDF: Programação em C
Sessão: Elementos de repetição (loops)
Autor: Kayky Moreira Praxedes
*/

#include <stdio.h>

int main(){
	int valor;
	scanf(" %d", &valor);
	while(valor != 10){ // Se valor == 10 nem entra
		printf("Valor diferente de 10\n");
		scanf(" %d", &valor);
	}
	do{
		printf("%d\n", ++valor); // output: 11
	} while (valor <= 10); // Realiza a ação pelo menos uma vez, mesmo se valor >= 20 antes do bloco
	return 0;
}