/*
Código 21 do PDF: Programação em C
Sessão: Pré-processamento
Autor: Kayky Moreira Praxedes
*/

// #include:
/* Inclui arquivos para a execução do programa */
#include <stdio.h>    // Biblioteca padrão
#include "mylib.h"    // Biblioteca autoral
// #define e #undef:
/* O primeiro define e copia macros (constantes e funções) e o segundo os apaga (diretivas locais e externas)*/
#define PI 3.14
#define NOME_PROGRAMA "Calculadora Financeira"
#define PROGRAMA NOME_PROGRAMA // Dois macros com o mesmo valor
#define AREA_CIRCULO(raio) (PI * (raio) * (raio))
// Seria o mesmo que fazer: double area_circulo(double raio){ return PI * (raio) * (raio);}
#undef DEZ // Definido em mylib.h (biblioteca externa)
// #if, #elif e #else: 
/* Verifica a condição de uma diretiva (atua até o próximo teste ou até o #endif) */
#ifndef DEZ // if (!defined(NOME)), também tem if defined(NOME)
#warning "DEZ não definido!"
#define DEZ 15  // Lança uma mensagem no terminal
#endif	// fim da atuação do #ifndef
#if (DEZ > 20)
#undef DEZ
#define DEZ 25
#elif (DEZ < 15) // else if de diretivas (fim da atualção do #if)
#undef DEZ
#define DEZ 5
#else // fim da atualção do #elif
#undef DEZ
#define DEZ 10
#endif // fim da atualção do #else

int main(){
    printf("%d\n", DEZ);
    return 0;
}