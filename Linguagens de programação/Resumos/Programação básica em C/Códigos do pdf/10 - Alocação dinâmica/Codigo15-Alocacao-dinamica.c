/*
Código 15 do PDF: Programação em C
Sessão: Alocação dinâmica
Autor: Kayky Moreira Praxedes
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	int a = 10, b;
	int* ptr = (int *)malloc(sizeof(int)); // Aloca memória para int (com lixo de memória)
	*ptr = 10;
	free(ptr); // Desaloca a memória reservada antes de reutilizar o ponteiro
	ptr = &a;
	scanf("%d", &b); 
	int* array1 = (int*)malloc(b * sizeof(int)); // Array de tamanho não definido com lixo de memória
	int* array2 = (int*)calloc(10, sizeof(int)); // Array de tamanho fixo com todos os elementos zerados
	free(array1);
	free(array2);
	return 0;
}