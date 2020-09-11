/*
Programa :   Begin .c
Autor:      João Vitor Freitas
Data :       17/03/2017
Descri ̧c~ao : Este  programa  faz  algo  muito importante .
*/


#include <stdio.h>


int main( void )
{
	float raio, pi;
	double resultado;
	

	printf("Digite o raio desejado\n");
	scanf("%f", &raio);
	pi = 3.1415;
	resultado = pi*raio*raio;
	
	printf("Area do circulo e %f\n", resultado);
	
	return 0;
}

