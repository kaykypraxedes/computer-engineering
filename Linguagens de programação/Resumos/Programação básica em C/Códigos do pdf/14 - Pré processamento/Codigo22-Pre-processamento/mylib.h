/*
Código 22 do PDF: Programação em C
Sessão: Pré-processamento
Autor: Kayky Moreira Praxedes
*/

/* mylib.h */
#ifndef QUALQUER_NOME // Include guard
#define QUALQUER_NOME // Previne que o mesmo arquivo seja incluído múltiplas vezes no mesmo código fonte.
/* Supondo códigos derivados do mylib.h (mylib1.h, mylib2.h, etc.), cada um com uma chamada de mylib.h, 
Usando múltiplas bibliotecas sem o include guard, o compilador veria a definição de mylib.h várias vezes no 
mesmo arquivo, causando erro.*/
#define DEZ 10 // Constantes públicas
typedef struct { int x, y; } Ponto; // Estruturas públicas
double media(double* , int); // Protótipo de funções
#endif // Fim da atuação do include guard