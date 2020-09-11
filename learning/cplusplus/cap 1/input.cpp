#include <iostream>
using namespace std;

void calculaCobranca(float);

int main()
{
	float renda;
	std::cout<<"Insira o valor da renda: " << std::endl;
	std::cin >> renda;
	calculaCobranca(renda);

	return 0;
}

void calculaCobranca(float renda)
{
	if(renda <= 1903.98)
		std::cout<< "Isento"<< std::endl;
	else if(renda <= 2826.65)
		std::cout<< "Renda de R$"<< renda << ". Sera pago 7.5% de " << renda << " = R$" << renda*0.075 << std::endl;
	else if(renda <= 3751.05)
		std::cout<< "Renda de R$"<< renda << ". Sera pago 15% de " << renda << " = R$" << renda*0.15 << std::endl;
	else if(renda <= 4664.68)
		std::cout<< "Renda de R$"<< renda << ". Sera pago 22.5% de " << renda << " = R$" << renda*0.225 << std::endl;
	else
		std::cout<< "Renda de R$"<< renda << ". Sera pago 27.5% de " << renda << " = R$" << renda*0.275 << std::endl;

}
