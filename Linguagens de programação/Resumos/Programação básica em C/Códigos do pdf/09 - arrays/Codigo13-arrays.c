/*
Código 13 do PDF: Programação em C
Sessão: arrays
Autor: Kayky Moreira Praxedes
*/

#include <stdio.h>

void funcao_com_array(int arr[]) { // Array no escopo
	for(int i = 0; i < 3; i++)
		printf("%d ", arr[i]);
	printf("\n");
}
void funcao_com_ponteiro(int *ptr) { // Ponteiro no escopo
	for(int i = 0; i < 3; i++)
		printf("%d ", ptr[i]); // Poderia ser *(ptr + i)
	printf("\n");
}
int main(){
	int a;
	scanf("%d", &a);
	int array_vazio[a]; // Declaração de array com tamanho não definido e com lixo de memória
	int array1[5] = {0}, array2[5] = {1, 2, 3}; // array1 = {0, 0, 0, 0, 0}, array2 = {1, 2, 3, 0, 0}
	int array3[] = {4, 5, 6}; // Tamanho inferido (3 elementos)
	int* ptr = array2; // Ponteiro para o primeiro elemento do array
	// (ptr[n] == array2[n] == *(ptr + n) == *(array2 + n))
	funcao_com_array(array2); // output: 1 2 3
	funcao_com_array(ptr); // output: 1 2 3
	funcao_com_ponteiro(ptr); // output: 1 2 3
	funcao_com_ponteiro(array3); // output: 4 5 6
	return 0; // Todas as chamadas são válidas
}	