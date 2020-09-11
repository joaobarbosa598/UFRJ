#include<stdio.h>
int main ( void )
{
    float a,b,x;
    int m;
    int n;


    printf("Este programa calcula sua media.\n");
	printf("Entre com a primeira nota. ");
	m = scanf("%f", &a);
	printf("Entre com a segunda nota. ");
	n = scanf("%f", &b);


    if(m && n)
    {
        x = (a+b)/2;
        printf("A sua média final é %1.2f\n", x);
    }
    
}
