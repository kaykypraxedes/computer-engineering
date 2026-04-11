/*
Código 19 do PDF: Programação em C
Sessão: Arquivos externos
Autor: Kayky Moreira Praxedes
*/

#include <stdio.h>

int main() {
	int conta[100] = {0}; double saldo[100] = {0};
	FILE* filePointer;
	// Tenta abrir o arquivo para a leitura de texto (.txt, .dat, etc.)
	if((filePointer = fopen("dados.dat", "r")) == NULL) return -1; // Erro ao abrir o arquivo
	for(int i = 0; !feof(filePointer); i++) // Lê até o final do arquivo (EOF)
		// Os dados estão dispostos 'int''espaço''double''espaço''int''espaço''double'...
		// Leitor de texto (lê, armazena os dados e avança o ponteiro para a próxima sequencia)
		fscanf(filePointer, " %d %lf", &conta[i], &saldo[i]); // Espaço antes do %d para a limpeza do buffer
	fclose(filePointer); // Desaloca o ponteiro e fecha o arquivo (salvamento)
	// Tenta criar ou sobrescrever arquivo para a escrita de texto
	if((filePointer = fopen("novo.txt", "w")) == NULL) return -1;
	for(int j = 0; conta[j] != 0; j++)
		fprintf(filePointer, "%d - %.1lf\n", conta[j], saldo[j]); // Escritor de texto
	// A string fica: "int - double"'\n'"int - double"\n'"int - double"'\n'...
	fclose(filePointer);
	// Tenta abrir ou criar arquivo para a leitura e append de texto
	if((filePointer = fopen("novo.txt", "a+")) == NULL) return -1;
	fscanf(filePointer, "%d - %lf", &conta[20], &saldo[20]); // Lê o conteúdo (cuidado com a formatação)
	fprintf(filePointer, "%d - %.3lf\n", conta[20], saldo[20]); // Anexa os dados no final
	fclose(filePointer);
	return 0;
}