#include "functions.h"
#include <iostream>
using namespace std;

int soma(int i, int j)	//definicao das funcoes
{
	return i+j;
}

int subtrai(int i, int j)
{
	int k = i-j;
	if(k<0){ k *= -1; }

	return k;
}

int multiplica(int i, int j)
{
	return i*j;
}

int divide(int i, int j)
{
	return i/j;
}