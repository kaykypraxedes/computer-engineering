/*
Código 24 do PDF: Programação em C
Sessão: Apêndice A
Autor: Kayky Moreira Praxedes
*/

#include <stdio.h>
int main(){
	// Casos de conversão:
	double pi = 3.1415926535;
	int i_pi = (int) pi; // i_pi = 3
	int* intPtr;
	char* charPtr = (char*) intPtr;
	unsigned int u = 5;
	int s = -5;
	if(s < (int) u){ /*Realiza uma ação */}
	/* Sem a conversão, ambos seriam tratados como unsigned. Assim, em binário:
	-5 = (1) 111111 11111111 11111111 11111011 = 4.294.967.291 (unsigned) > 10 */
	// Casos onde ocorre a conversão implícita:
	char a = 'A';        // char (65 na tabela ASCII)
	int b = a;           // char -> int implícito ((int) a == 65)
	float c = b;         // int -> float implícito ((float) b == 65.0)
	double d = c;        // float -> double implícito ((double) c == 65.0)
	int e = d;           // double -> int implícito ((int) d == 65)
	double op1 = b/10;   // op1 = (double)(65/10) = (double)6 = 6.0
	double op2 = b/10.0; // op2 = ((double)65)/10.0 = 65.0/10.0 = 6.5
	return 0;
}