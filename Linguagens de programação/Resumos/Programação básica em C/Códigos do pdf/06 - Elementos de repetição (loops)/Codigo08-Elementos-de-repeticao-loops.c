/*
Código 08 do PDF: Programação em C
Sessão: Elementos de repetição (loops)
Autor: Kayky Moreira Praxedes
*/

#include <stdio.h>
		
int main(){
	int u = 0;
	for (int i = 0; u < 20; i++){ // Incrementa interna do for (i) de 1 em 1
		u += 2;
		printf("%d ", u);
	} printf("\n"); // output: 2 4 8 10 12 14 16 18 20
	for(u; u >= 10; u -= 3) // Decrementa variável externa ao for (u) de 3 em 3 
		printf("%d ", u);
	printf("\n"); // output: 20 17 14 11
	return 0;
}