/*
Código 30 do PDF: Programação em C
Sessão: Apêndice B
Autor: Kayky Moreira Praxedes
*/

#include <stdio.h>
#include <math.h>

int main() {
	printf("98.0001: %.2lf, 10.8: %.2lf\n", ceil(98.0001), floor(10.8)); // output: 98.0001: 99.00, 10.8: 10.00
	printf("10.00: %.2lf, %.2lf\n", floor(10.00), ceil(10.00)); // output: 10.00: 10.00, 10.00
	printf("A raiz quadrada de 8 é: %.4lf\n", sqrt(8)); // output: A raiz quadrada de 8 é: 2.8284
	printf("A raiz cúbica de 27 é: %.4lf\n", pow(27, 1.0/3)); // output: A raiz cúbica de 27 é: 3.0000
	printf("(2.3)^(7.5) é: %.4lf\n", pow(2.3, 7.5)); // output: (2.3)^(7.5) é: 516.3673
	printf("%.3lf, %.3lf, %.3lf\n",sin(3.1416/2),cos(3.1416/3),tan(3.1416/4)); // output: 1.000, 0.500, 1.000
	printf("ln(e) é: %.4lf\n", log(2.71828)); // output: ln(e) é: 1.0000
	printf("log10(1000) é: %.4lf\n", log10(1000)); // output: log10(1000) é: 3.0000
	return 0;
}