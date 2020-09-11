#include <stdio.h>
#include <stdlib.h>
int main (void)
{
   int                   a;
   short int             b;
   long int              c;
   unsigned int          d;
   unsigned short int    e;
   unsigned long int     f;
   float                 g;
   double                h;
   long double           i;
   char                  j;
   int *l;
   l = (int *)malloc(sizeof(int)*17);
   for(int i=0; i < 17; i++)
      l[i] =0;
 
   printf("Tamanho do a : %d\n", sizeof(a));
   printf("Tamanho do b : %d\n", sizeof(b));
   printf("Tamanho do c : %d\n", sizeof(c));
   printf("Tamanho do d : %d\n", sizeof(d));
   printf("Tamanho do e : %d\n", sizeof(e));
   printf("Tamanho do f : %d\n", sizeof(f));
   printf("Tamanho do g : %d\n", sizeof(g));
   printf("Tamanho do h : %d\n", sizeof(h));
   printf("Tamanho do i : %d\n", sizeof(i));
   printf("Tamanho do j : %d\n", sizeof(j));
   printf("Tamanho do vetor L : %d\n", sizeof(l)/sizeof(int*));


   printf("Tamanho do int                : %d\n", sizeof(int));
   printf("Tamanho do int*               : %d\n", sizeof(int*));
   printf("Tamanho do short int          : %d\n", sizeof(short int));
   printf("Tamanho do long int           : %d\n", sizeof(long int));
   printf("Tamanho do unsigned int       : %d\n", sizeof(unsigned int));
   printf("Tamanho do unsigned short int : %d\n", sizeof(unsigned short int));
   printf("Tamanho do unsigned long int  : %d\n", sizeof(unsigned long int));
   printf("Tamanho do float              : %d\n", sizeof(float));
   printf("Tamanho do double             : %d\n", sizeof(double));
   printf("Tamanho do long double        : %d\n", sizeof(long double));
   printf("Tamanho do char               : %d\n", sizeof(char));
 
   return 0;
}
