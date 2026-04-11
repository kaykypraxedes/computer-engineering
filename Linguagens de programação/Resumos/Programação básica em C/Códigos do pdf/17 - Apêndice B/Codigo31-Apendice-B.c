/*
Código 31 do PDF: Programação em C
Sessão: Apêndice B
Autor: Kayky Moreira Praxedes
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
	/* Funções do ctype.h */
	// Funções de comparação. Retornam 1 se o char tiver as propriedades, caso contrário, retornam 0
	// Número decimal
	printf("'8': %s\n", isdigit('8') ? "" : "não "); // 1
	printf("'.': %s\n", isdigit('.') ? "" : "não "); // 0
	// Letra do alfabeto
	printf("'b': %s\n", isalpha('b') ? "" : "não "); // 1
	printf("'4': %s\n", isalpha('4') ? "" : "não "); // 0
	// Letra maiúscula
	printf("'c': %s\n", isupper('c') ? "" : "não "); // 0
	printf("'F': %s\n", isupper('F') ? "" : "não "); // 1
	// Letra minúscula
	printf("'k': %s\n", islower('c') ? "" : "não "); // 1
	// Letra do alfabeto ou número
	printf("'A': %s\n", isalnum('A') ? "" : "não "); // 1
	printf("'7': %s\n", isalnum('7') ? "" : "não "); // 1
	printf("'&': %s\n", isalnum('&') ? "" : "não "); // 0
	// Espaço
	printf("'\\n': %s\n", isspace('\n') ? "" : "não "); // 1
	printf("' ': %s\n", isspace(' ') ? "" : "não ");   // 1
	printf("'_': %s\n", isspace('_') ? "" : "não ");   // 0
	// Funções de modificação. Caso sejam não seja possível modificar, é retornado o mesmo caracter
	printf("'u' toupper é '%c'\n", toupper('u'));
	printf("'7' toupper é '%c'\n", toupper('7'));
	printf("'W' tolower é '%c'\n", tolower('W'));
	printf("'m' tolower é '%c'\n", tolower('m'));
	
	/* Funções do string.h */
	char* str1 = "Feliz aniversário", str2[20], str3[20], str4[20];
	// Retorna a quantidade de caracteres da string (contando o '\0')
	printf("%ld\n", strlen(str1)); // output: 18
	// Copia a string do segundo vetor para o primeiro
	strcpy(str2, str1); // str2 = "Feliz aniversário\0"
	printf("str2 = %s\n", str2); // output: str2 = Feliz aniversário
	// Copia os n primeiros caracteres (se n > tamanho da str, copia tudo)
	strncpy(str3, str2, 5); str3[5] = '\0'; // == "Feliz\0"
	strncpy(str4, str2, 20); // str4 = "Feliz aniversário\0"
	printf("str 3 = %s - str4 = %s\n", str3, str4);
	//  output: str 3 = Feliz - str4 = Feliz aniversário
	char* str5 = "Feliz ano novo", str6[20] = "";
	// Anexa a string do segundo vetor ao final do primeiro
	strcat(str6, str5); // str6 = "Feliz ano novo\0"
	str6[strlen(str6)] = ' '; // == "Feliz ano novo "
	// Anexa os n primeiros caracteres
	strncat(str6, str5, 5); // str6 = "Feliz ano novo Feliz"
	str6[strlen(str6) + 1] = '\0'; // == "Feliz ano novo Feliz\0"
	printf("str6 = %s\n", str6); // output: str6 = Feliz ano novo Feliz
	// Compara as strings e retorna 0 se são iguais
	printf("São %s\n", !strcmp("Abc", "Abc") ? "iguais" : "diferentes"); // 0
	printf("São %s\n", !strcmp("Abc", "Abd") ? "iguais" : "diferentes"); // 1
	// Compara os n primeiros caracteres de duas strings
	printf("São %s\n", !strncmp("Abc", "Abd", 2) ? "iguais" : "diferentes"); // 0
	// Retorna a a string a partir da primeira ocorrência do caracter (retorna NULL se não achar)
	char* ptr7 = strchr("Uma maquina voadora", 'q'); // == "quina voadora\0"
	char* ptr8 = strrchr("Uma maquina voadora", 'z'); // == NULL
	// A mesma ação do strchr, mas para achar uma string
	char* ptr9 = strstr("O bebê saiu dai", "iu"); // == "iu dai\0"
	printf("%s\n", ptr9);
	return 0;
}