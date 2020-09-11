#include <stdio.h>

void troca (int *p1, int *p2);

/*AQUI A TROCA OCORRE POIS EU PEGO SEUS ENDERECOS, OU SEJA, A E B SAO TROCADOS NA MAIN TAMBÉM, POIS TROCO O VALOR PARA O QUAL
  ELES APONTAM*/
int main(void)
{
  int a, b;

  a = 2; b = 5;

  troca(&a,&b);
  printf("a:%d, b:%d\n",a,b);
}

void troca(int *p1, int *p2)
{
  int temp;

  temp = *p1;
  *p1 = *p2;
  *p2 = temp;
  printf("p1:%d, p2:%d\n", *p1,*p2);
}
