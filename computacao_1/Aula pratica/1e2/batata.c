#include<stdio.h>
int main ( void )
{
	float a,b,x;
	printf("Este programa resolve uma equacao de primeiro grau.\n");
	printf("Entre com o coeficiente a, por favor. ");
	scanf("%f", &a);
	printf("Entre com o coeficiente b, por favor. ");
	scanf("%f", &b);
	
	if ( a == 0 )
	{
		printf("Esta equacao nao tem solução\n");
	}
	else
	{
		x = -b/a;
		printf("A solução da equacao vale %-10.3f\n", x);
	}
	return 0;
}
		
		
		
		
		
		
		
		
		
		
		
		
