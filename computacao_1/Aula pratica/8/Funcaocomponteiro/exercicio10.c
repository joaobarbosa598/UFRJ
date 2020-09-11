/*
Programa :   Begin .c
Autor:      João Vitor Freitas
Data :       18/05/2017
Descricao : Este  programa  faz  algo  muito importante .
*/


#include <stdio.h>

int main(int argc, char **argv)
{
	int i, j, n, *pvetor, contador, temp;
	float media;
	
	temp = 0;
	contador = 0;
	scanf("%d", &n);
	pvetor = (int *)malloc(n*sizeof(int));
	if(!pvetor)
	{
		puts("Sem memoria.");
		return 1;
	}
	
	//Lendo o vetor
	for(i = 0; i < n; i++)
	{
		//pvetor+i - pvetor na posicao i possui um endereço, e eu jogo um valor nesse endereço.
		scanf("%d", pvetor+i);
	}
	
	media = 0.0;
	//Acrescentando valor a media
	for(i = 0; i < n; i++)
	{
		//Nesse caso eu passo o valor que pvetor na posicao i aponta. Ou seja, em pvetor na posicao i eu possuo um endereço
		// e ele aponta para algo.
		media+= *(pvetor + i);
	}
	
	media/=n;
	//Calculando a quantidade de elementos maiores que a media
	for(i = 0; i < n; i++)
	{
		if( *(pvetor+i) > media)
		{
			contador+=1;
		}
	}
	
	printf("elemento na posicao 1: %d\n", *(pvetor+1));
	
	//Ordenando o vetor por bubble sort
	for(i = 0; i < n - 1; i++)
	{
		for(j = 0; j < n-1-i; j++)
		{
			if( *(pvetor+j) > *(pvetor+j+1) )
			{
				temp = *(pvetor+j);
				*(pvetor+j) = *(pvetor+j+1);
				*(pvetor+j+1) = temp;
			}
		}
	}
	
	//Imprimindo o vetor
	for(i = 0; i < n; i++)
	{
		printf("%d\n", *(pvetor+i));
	}
	
	printf("media: %1.2f\n", media);
	//*(pvetor+1) - pvetor na posicao 1 possui um endereço, quando coloco *, indico que quero mostrar o valor que esse endereço aponta.
	printf("elemento na posicao 1: %d\n", *(pvetor+1));
	printf("elementos acima da media: %d\n", contador);
	
	free(pvetor);
	
	return 0;
}
