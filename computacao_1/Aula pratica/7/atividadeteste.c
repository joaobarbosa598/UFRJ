#include<stdio.h>
#include<stdlib.h>
#define m 10

void insertion(int x, int *v)
{
    int j;

    for(j=0;j<m;j++)
    {
       if(v[j]==0)
       {
           *(v+j) = x;
           break;
       }

    }
}
int main()
{
    int vet[m]={1,2,3,4,5};
    int numero;
    printf("adicione um numero: "); scanf("%d",&numero);
    insertion(numero,vet);

    for(int i = 0; i < m; i++)
        printf("%d\n", vet[i]);

    return 1;
}