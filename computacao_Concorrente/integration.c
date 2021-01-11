/***********************************************************
* You can use all the programs on  www.c-program-example.com
* for personal and learning purposes. For permissions to use the
* programs for commercial purposes,
* contact info@c-program-example.com
* To find more C programs, do visit www.c-program-example.com
* and browse!
* 
*                      Happy Coding
***********************************************************/

#include <stdio.h>
#include <math.h>
/* Propram to perform definite integration of a given function between
 two boundary limits input by user. Feel free to use and modify it, but
 please do not remove this comment.
 source: C for Engineering, http://c4engineering.hypermart.net */

//quanto maior o N, maior a precisao
#define N 10000

int main(int argc, char **argv) 
{
    float i, a, b, x, y, sum = 0;
    printf("This program will integrate a function between two boundary limits.\n");
    printf("Enter the first boundary limit:\n");
    scanf("%f", &a);
    printf("Enter the second boundary limit:\n");
    scanf("%f", &b);
    if (a > b) 
    {
        i = a;
        a = b;
        b = i;
    }

    for (i = a; i < b; i += (b - a) / N) 
    {
        /* Define your function below, and include the suitable header files */
        x=i;
        //area das funcoes
        //y = x * x + 2 * x - 4;
        y = cos(5*x);
        sum += y * (b - a) / N;
    }

    printf("Value of integration is:%.5f", sum);
    printf("\n");
    return 0;
}