/*
Programa :   Begin .c
Autor:      João Vitor Freitas
Data :       18/05/2017
Descricao : Este  programa  faz  algo  muito importante .
*/


#include <stdio.h>

int main(int argc, char **argv)
{
	int i, n, *pvetor, contador;
	float media;
	
	contador = 0;
	scanf("%d", &n);
	pvetor = (int *)malloc(n*sizeof(int));
	if(!pvetor)
	{
		puts("Sem memoria.");
		return 1;
	}
	
	for(i = 0; i < n; i++)
	{
		//pvetor+i - pvetor na posicao i possui um endereço, e eu jogo um valor nesse endereço.
		scanf("%d", pvetor+i);
	}
	
	media = 0.0;
	for(i = 0; i < n; i++)
	{
		//Nesse caso eu passo o valor que pvetor na posicao i aponta. Ou seja, em pvetor na posicao i eu possuo um endereço
		// e ele aponta para algo.
		media+= *(pvetor + i);
	}
	
	media/=n;
	
	for(i = 0; i < n; i++)
	{
		if( *(pvetor+i) > media)
		{
			contador+=1;
		}
	}
	
	printf("media: %1.2f\n", media);
	//*(pvetor+1) - pvetor na posicao 1 possui um endereço, quando coloco *, indico que quero mostrar o valor que esse endereço aponta.
	printf("elemento na posicao 1: %d\n", *(pvetor+1));
	printf("elementos acima da media: %d\n", contador);
	
	free(pvetor);
	
	return 0;
}


