/*
Código 14 do PDF: Programação em C
Sessão: arrays
Autor: Kayky Moreira Praxedes
*/

#include <stdio.h>

void funcao_com_matriz(int matriz[][5]){ // Necessidade de indicar o tamanho de cada array do conjunto
	printf("{");
		for(int i = 0; i < 10; i++) printf("%d%s", *(*matriz + i), i == 9 ? "": ", ");
	printf("}\n");
} // Aceita apenas matrizes (memória sequencial)
void funcao_ponteiro(int** ptr){ // Ponteiro no escopo (poderia ser int* array[])
	for(int i = 0; i < 3; i++){
		printf("{");
			for(int j = 0; j < 3; j++)
			printf("%d%s", ptr[i][j], j == 2 ? "": ", ");
			printf("}%c ", i == 2 ? '\0' : ',');
	} printf("\n");
} // Aceita apenas ponteiros (memória não necessariamente sequencial)
int main(){
	int matriz_1[3][10]; // Lixo de memória
	int matriz_2[3][3] = {0}; // {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}} ou {0, 0, 0, 0, 0, 0, 0, 0, 0}
	int matriz_3[3][3] = {1, 2, 3}; // {{1, 2, 3}, {0, 0, 0}, {0, 0, 0}}
	int matriz_4[3][3] = {{9, 8, 7}, {6, 5, 4}}; // {{9, 8, 7}, {6, 5, 4}, {0, 0, 0}}
	int matriz_5[2][5] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // {{1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}}
	int* ptr_array[3] = {matriz_4[0], matriz_4[1], matriz_4[2]}; // {{9, 8, 7}, {6, 5, 4}, {0, 0, 0}}
	int** ptr_duplo = ptr_array; // Diferente de {9, 8, 7, 6, 5, 4, 0, 0, 0}
	funcao_com_matriz(matriz_5); // output:{1, 2, 3, 4, 5, 6, 7, 8, 9, 10}
	funcao_ponteiro(ptr_duplo); // output: {9, 8, 7}, {6, 5, 4}, {0, 0, 0} 
	funcao_ponteiro(ptr_array); // output: {9, 8, 7}, {6, 5, 4}, {0, 0, 0}
	return 0;
	/* Erros de declaração:
	int* ptr_array[3] = matriz_3;
	int* ptr_array_1[3] = {{1, 2, 3}, {0, 0, 0}, {0, 0, 0}}; 
	int** ptr_duplo = matriz_3;
	int** ptr_duplo = {matriz_5[1], matriz_5[2], matriz_3[3]};
	int** ptr_duplo = {{1, 2, 3}, {0, 0, 0}, {0, 0, 0}};
	Cada array deve ser passada individualmente, ou então passadas múltiplas arrays já declaradas */ 
}