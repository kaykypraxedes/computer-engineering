/*
Código 09 do PDF: Programação em C
Sessão: Funções
Autor: Kayky Moreira Praxedes
*/

#include <stdio.h>  // Biblioteca p/ input e output

int dobro(int); // Prototipo que tem que ser posicionado acima, pois é chamado em funcaoSemPrototipo
void funcaoSemPrototipo(int valor){
	printf("%d\n", dobro(valor));
}
int funcaoComPrototipo(); // Protótipo que pode ser posicionado abaixo
int main(){
	int a; double b;
	// Funções da biblioteca stdio.h
	scanf("%d %lf", &a, &b); // Assumindo um input: 10 25
	printf("2*a = %d, b/2 = %.2lf\n", a*=2, b/=2); // output: 2*a = 20, b/2 = 12.50
	// Funções próprias
	funcaoSemPrototipo(funcaoComPrototipo()); // Mesmo que: funcaoSemPrototipo(25);
	return 0; // output: 50
}
int dobro(int valor){
	return (valor * 2);
}
int funcaoComPrototipo(){ // void implícito no argumento
	return 25;
}