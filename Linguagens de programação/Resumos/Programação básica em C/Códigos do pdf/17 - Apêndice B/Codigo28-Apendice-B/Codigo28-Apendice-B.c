/*
Código 28 do PDF: Programação em C
Sessão: Apêndice B
Autor: Kayky Moreira Praxedes
*/

#include <stdio.h>

typedef struct {
	int inteiro;
	float racional;
} grupo;

int main(){
	/* Ferramentas para input e output padrão (terminal) */
	int int_a; char char_b, vet_d[100], vet_e[100]; double double_f;
	scanf(" %d %c", &int_a, &char_b); // Recebe valores input e armazena nos endereços (input assumido: 10 abc)
	printf("int_a = %d, pi = %.2lf, Nome: %s\n", int_a, 3.141592, "Maria"); // Imprime uma string no terminal 
	// output: int_a = 10, pi = 3.14, Nome = Maria
	sprintf(vet_e, "char_b = %c, num = %.4lf, Nome: %s\n", char_b, 2.15, "Joao"); // printf para array de char
	printf("vet_e: %s", vet_e); // output: vet_e: char_b = a, num = 2.1500, Nome: Joao
	/* Ao enviar múltiplos inputs, eles ficam armazenados em fila no buffer. Para o input assumido, ainda estão 
	no buffer os caracteres 'b', 'c' e '\n' */
	char_b = getchar(); // Pega o proximo caracter da fila do buffer ('b').
	putchar(char_b); // Imprime um char 
	char linha[100];
	fgets(linha, 100, stdin); // Limpa o buffer (100 caracteres pra ter certeza).
	// fgets e getchar são muito usados para limpeza de buffer (principalmente ao se mexer com strings).
	puts(linha); // Imprime uma string colocando um '\n' ao final (output: bc'\n''\n')
	// Recebe uma string de tamanho <= 100 de um local (stdin = terminal) e armazena em um array de char
	fgets(vet_d, 50, stdin); // O '\n' também é pego no input (supondo input: Maranhao)
	sscanf(vet_e, "char_b = %c, num = %lf", &char_b, &double_f); // scanf de string
	printf("vet_d = %schar_b = %c e double_f = %.2lf\n", vet_d, char_b, double_f);
	// output: vet_d = Maranhao'\n' char_b = a e double_f = 2.15
	
	/* Ferramentas para arquivos como input e output */
	// Arquivos de texto
	int vet_a[] = {10,20,30,40,50}, vet_b[10] = {0};
	FILE* filePtr; // Cria um ponteiro para arquivos
	if((filePtr = fopen("texto.txt", "w+")) == NULL) return -1; // Tenta abrir um arquivo de texto para leitura e escrita
	for(int i = 0; i < (sizeof(vet_a)/sizeof(vet_a[0])); i++)
		fprintf(filePtr, "%d - %d\n", i, vet_a[i]); // Salva dados no .txt no formato especificado
	rewind(filePtr); // Volta o ponteiro pro início do arquivo
	for(int i = 0, tmp = 0; !feof(filePtr); i++)
		fscanf(filePtr, "%d - %d", &tmp, &vet_b[i]); // Salva os dados num array
	fclose(filePtr); // Fecha e salva o arquivo
	for(int i = 0; vet_b[i] != 0; i++) 
		printf("%d %s", vet_b[i], vet_b[i + 1] == 0 ? "" : "- ");
	putchar('\n'); // output: 10 - 20 - 30 - 40 - 50
	
	// Arquivos binário
	grupo vet_struc_c[] = {{1,6},{2,5},{3,4},{4,3},{5,2},{6,1}}, vet_struc_d[30] = {{0,0}};
	if((filePtr = fopen("binario.bin", "ab")) == NULL) return -1; // Tenta abrir ou criar um arquivo binário para anexação de dados
	for(int i = 0; i < (sizeof(vet_struc_c)/(sizeof(vet_struc_c[0]))); i += 3)
		fwrite(&vet_struc_c[i], sizeof(grupo), 3, filePtr); // Passa 3 elementos pro arquivo binário de cada vez
	// {c[0], c[1], c[2]}, {c[3], c[4], c[5]}
	fclose(filePtr); // Modos a e ab não permitem rewind
	if((filePtr = fopen("binario.bin", "rb")) == NULL) return -1;
	for(int i = 0; !feof(filePtr); i++)
		fread(&vet_struc_d[i], sizeof(grupo), 1, filePtr); // Lê um elemento do arquivo binário de cada vez
	fclose(filePtr);
	for(int i = 0; vet_struc_d[i].inteiro != 0; i++) 
		printf("%d %.2lf %s", vet_struc_d[i].inteiro, vet_struc_d[i].racional, vet_struc_d[i + 1].inteiro == 0 ? "" : "- ");
	putchar('\n'); // output: 1 6.00 - 2 5.00 - 3 4.00 - 4 3.00 - 5 2.00 - 6 1.00
	return 0; // Cada execução, o último output se repete (por conta do append)
}