#include <iostream>
#include <math.h>
using namespace std;

int calculaDelta(int a, int b, int c);
void calculaRaiz(int delta, int a, int b);

int main()
{
	int a,b,c;
	int delta;
	std::cout<<"Insira o valor da A, B e C: " << std::endl;
	std::cin >> a;
	std::cin >> b;
	std::cin >> c;
	delta = calculaDelta(a, b, c);

	if(delta < 0)
		std::cout<< "Nao ha raizes reais"<< std::endl;
	else
		calculaRaiz(delta, a, b);

	return 0;
}

int calculaDelta(int a, int b, int c)
{
	int delta;
	delta = b*b;
	delta = delta - (4*a*c);
	return delta;
}

void calculaRaiz(int delta, int a, int b)
{
	int x1,x2;
	if(delta == 0)
	{
		x1 = b*-1;
		x1 = x1/(2*a);
		std::cout<< "Duas raizes reais e iguais sendo elas iguais a" << x1 << std::endl;
	}
	else
	{
		x1 = b*-1;
		x2 = b*-1;
		x1 = x1 + sqrt(delta);
		x2 = x2 - sqrt(delta);
		x1 = x1/(2*a);
		x2 = x2/(2*a);

		std::cout<< "Duas raizes reais e diferentes sendo elas iguais a " << x1 << " e " << x2 << std::endl;
	}
}
