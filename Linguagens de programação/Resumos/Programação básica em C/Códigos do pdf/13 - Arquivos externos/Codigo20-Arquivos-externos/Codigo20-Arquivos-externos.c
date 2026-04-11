/*
Código 20 do PDF: Programação em C
Sessão: Arquivos externos
Autor: Kayky Moreira Praxedes
*/

#include <stdio.h>

typedef struct {
	int conta;
	double saldo;
} Dados;

int main() {
	Dados dados[4] = {{1001, 1000.50}, {1002, -505.10}, {1010, 27}, {0, 0}}, lidos[4] = {{0, 0}};
	FILE* filePointer;
	// Tenta criar ou sobrescrever arquivo para a escrita de binário
	if((filePointer = fopen("dados.bin", "wb")) == NULL) return -1;
	for(int i = 0; dados[i].conta != 0; i++)
		// fwrite(endereço, tamanho de cada objeto, quantos dados escrever de uma vez, ponteiro)
		fwrite(&dados[i], sizeof(Dados), 1, filePointer);
	// fwrite(dados, sizeof(Dados), 3, filePointer); sem o loop pegaria os dados[0 - 2] de uma vez
	fclose(filePointer);
	// Tenta abrir arquivo para a leitura de binário
	if((filePointer = fopen("dados.bin", "rb")) == NULL) return -1;
	for(int i = 0; !feof(filePointer); i++)
		fread(&lidos[i], sizeof(Dados), 1, filePointer);
	fclose(filePointer);
	for(int i = 0; lidos[i].conta != 0; i++) printf("%d - %.2lf\n", lidos[i].conta, lidos[i].saldo);
	// output: "1001 - 1000.50"'\n'"1002 - -505.10"'\n'"1010 - 27.00"'\n'
	return 0;
}