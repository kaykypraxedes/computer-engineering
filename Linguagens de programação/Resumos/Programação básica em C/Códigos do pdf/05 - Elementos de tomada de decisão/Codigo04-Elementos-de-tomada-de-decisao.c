/*
Código 04 do PDF: Programação em C
Sessão: Elementos de tomada de decisão
Autor: Kayky Moreira Praxedes
*/
		
#include <stdio.h>

int main(){
	int valor;
	scanf(" %d", &valor); // Recebe um valor no input e o envia para o endereço da variável
	if(valor == 10){
		printf("Eh 10!\n");
		return 10;
	} else if(valor == 20 || valor == 30) return 30; // valor != 10
	else { // valor != 10 && valor != 20 && valor != 30
		if('b') // Como o valor no escopo ('b') é diferente de 0, será executado sempre
			printf("Acao alcançada!\n");
		else
			return 1; // Condição nunca alcançada
	}
	return 0;
}