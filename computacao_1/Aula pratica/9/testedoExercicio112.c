#include <stdio.h>

void troca (int p1, int p2);

/*AQUI A TROCA OCORRE NAS VARIAVEIS DE DENTRO DA FUNCAO, E COMO NAO HA RETORNO DE VALOR, A VARIAVEL "A" E "B"
  CONTINUAM COM O MESMO VALOR NA MAIN*/
int main(void)
{
  int a, b;

  a = 2; b = 5;

  troca(a,b);
  printf("a:%d, b:%d\n",a,b);
}

void troca(int p1, int p2)
{
  int temp;

  temp = p1;
  p1 = p2;
  p2 = temp;
  printf("p1:%d, p2:%d\n", p1,p2);
}
