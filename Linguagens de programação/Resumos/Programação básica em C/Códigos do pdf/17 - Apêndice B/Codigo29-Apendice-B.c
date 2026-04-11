/*
Código 29 do PDF: Programação em C
Sessão: Apêndice B
Autor: Kayky Moreira Praxedes
*/

#include <stdio.h>
#include <stdlib.h>

/* É preciso uma função para definir o método de organização do qsort e para o bsort. Para uma organização
crescente, por exemplo, ele retorna (*(int*) a - *(int*) b), e troca as casa quando o resultado for > 0 */
int crescente(const void* a, const void* b) {
	return (*(int*) a - *(int*) b);
} // Caso quisesse a organização decrescente: return (*(int*) a - *(int*) b)

int main(){
	/* Funções para alocação dinâmica */
	int* intptr = (int*)malloc(sizeof(int)); // Aloca memória (com lixo)
	int* intarr = (int*)calloc(10, sizeof(int)); // Aloca e ZERA a memória alocada
	intarr = (int*)realloc(intarr, 20 * sizeof(int)); // Redimensiona memória alocada
	free(intptr);
	free(intarr);
	
	/* Funções para conversão de tipos */
	char* cPtr1,* cPtr2; 
	int a = atoi("99"); // Converte string com APENAS CARACTERES NUMÉRICOS para int.
	// Existem funções semelhantes para outros tipos (atof: string → float, atol: string → long, etc.)
	double b = strtod("51.2% foram admitidos", &cPtr1); //atol com detecção de erro (b = 51.2)
	/* Caso haja elementos não numéricos após o número (obrigatório o número na frente), o resto é convertido 
	em string e armazenado em um ponteiro de char (array daria erro) ou eliminado se colocado NULL */
	// O número determina a base (decimal, hexadecimal, binária, etc.). Base = 0 converte automaticamente
	long bin = strtol("100101abc", &cPtr2, 2); // bin = 37 em decimal, cPtr = abc
	long hex = strtol("0x123", NULL, 0); // hex = 291 em decimal
	printf("b = %.2lf, bin = %ld e %b, hex = %ld e %x\n", b, bin, (int) bin, hex, (int) hex);
	// "b = 51.20, bin = 37 e 100101, hex = 291 e 123"
	int c = abs(-25); // c = 25 | |-25|
	div_t res = div(70, 30); // Divisão inteira com quociente e resto (res.quot = 2, res.rem = 10)
	
	/* Funções para ordenação e busca */
	int numeros[] = {42, 13, 7, 99, 1, 25};
	int n = sizeof(numeros) / sizeof(numeros[0]);
	// Organiza os elementos de uma lista seguindo uma ordem definida pela função na última posição
	qsort(numeros, n, sizeof(int), crescente); // numeros = {1, 7, 13, 25, 42, 99}
	for(int i = 0; i < n; i++) printf("%d ", numeros[i]);
	putchar('\n'); // output: 1 7 13 25 42 99
	int chave = 25;
	// Faz uma busca binária em uma lista de organização variada e retorna o valor da chave se achá-la
	int* resultado = bsearch(&chave, numeros, n, sizeof(int), crescente);
	if (resultado != NULL) printf("Encontrado: %d\n", *resultado); // output: Encontrado: 25
	return 0;
}