/*
Programa :   Begin .c
Autor:      João Vitor Freitas
Data :       21/04/2017
Descricao : Este  programa  faz  algo  muito importante .
*/


#include <stdio.h>

#define TAM 5

double MaiorElementoVetor(double vetor[], int tam);
double MediaVetor(double vetor[], int tam);
void OrdenaVetor(double vetor[], int tam);
void ImprimeVetor(double vetor[], int tam);
void LeVetor(double vetor[], int tam);

int main(int argc, char **argv)
{
	double vetor[TAM];
	double media, maior;
	
	LeVetor(vetor, TAM);
	maior = MaiorElementoVetor(vetor, TAM);
	media = MediaVetor(vetor, TAM);
	printf("Maior elemento e: %1.2f\n", maior);
	printf("Media do Vetor e: %1.2f\n", media);
	OrdenaVetor(vetor, TAM);
	ImprimeVetor(vetor, TAM);
	
	return 0;
}
double MaiorElementoVetor(double vetor[], int tam)
{
	int i;
	double maior;
	maior = 0;
	
	for(i = 0; i < tam; i++)
	{
		if(vetor[i] > maior)
			maior = vetor[i];
	}
	return maior;
}

double MediaVetor(double vetor[], int tam)
{
	int i;
	double media;
	media = 0;
	for(i = 0; i < tam; i++)
	{
		media+= vetor[i];
	}
	media = media/tam;
	return media;
}
void OrdenaVetor(double vetor[], int tam)
{
	int i, j, k;
	double temp;
	temp = 0;
	k = tam - 1;
	
	for(i = 0; i < tam; i++)
	{
		for(j = 0; j < k; j++)
		{
			if(vetor[j] > vetor[j+1])
			{
				temp = vetor[j+1];
				vetor[j+1] = vetor[j];
				vetor[j] = temp;
			}
		}
		k--;
	}
}
void ImprimeVetor(double vetor[], int tam)
{
	int i; 
	
	printf("Meu vetor\n");
	for(i = 0; i < tam; i++)
	{
		printf("%1.2f\n", vetor[i]);
	}
}
void LeVetor(double vetor[], int tam)
{
	int i;
	i = 0;
	for(i = 0; i < tam; i++)
		scanf("%lf", &vetor[i]);
}


