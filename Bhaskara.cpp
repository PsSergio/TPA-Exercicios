#include <stdio.h>
#include <windows.h>
#include <math.h>
#include <stdlib.h>
int main ()
{
	float a, b , c, delta, x1, x2;
	printf("Para achar o resultado da Bhaskara, precisamos achar primeiramente o resultado de Delta");
	Sleep(1000);
	printf("\nInsira o valor de a: ");
	scanf("%f", &a);
	printf("Insira o valor de b: ");
	scanf("%f", &b);
	printf("Insira o valor de c: ");
	scanf("%f", &c);
	delta = b*b - 4*a*c;
	printf("Calculando...");
	Sleep(3000);
	printf("\nO valor de Delta eh: %f\nAgora vamos calcular o valor de x\nCalculando...", delta);
	Sleep(3000);
	if(delta>0){
		x1 = (-b+sqrt(delta))/(2*a);
		x2 = (-b-sqrt(delta))/(2*a);
		printf("\nO valor de x1 eh: %f\nE o valor de x2 eh: %f", x1, x2);
	}
	if(delta==0){
		x1 = (-b)/(2*a);
		printf("\nO valor de x1 eh: %f", x1);
	}
	if(delta<0){
		printf("\nNao ha raizes reais, pois delta eh menor que 0");
	}
}


