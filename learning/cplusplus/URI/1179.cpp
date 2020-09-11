#include <iostream>
#include <vector>

int main()
{
	int i, x;
	int parPos, imparPos;
	std::vector<int> impar;
	std::vector<int> par;

	impar.resize(5);
	par.resize(5);

	for(i = 0, parPos = 0, imparPos = 0; i < 15; i++)
	{
		std::cin >> x;
		if(x%2==0)
		{
			par.insert(par.begin()+parPos,x);
			parPos++;
			if(parPos>=5)
			{
				for(int j = 0; j < 5; j++)
					std::cout << "par[" << j << "] = " << par.at(j) << std::endl;
				par.erase(par.begin(),par.begin()+par.size());
				parPos=0;
			}
		}
		else
		{
			impar.insert(impar.begin()+imparPos,x);
			imparPos++;
			if(imparPos>=5)
			{
				for(int j = 0; j < 5; j++)
					std::cout << "impar[" << j << "] = " << impar.at(j) << std::endl;
				impar.erase(impar.begin(),impar.begin()+impar.size());
				imparPos=0;
			}
		}
		
	}
	for(int j = 0; j < impar.size(); j++)
		std::cout << "impar[" << j << "] = " << impar.at(j) << std::endl;
	for(int j = 0; j < par.size(); j++)
		std::cout << "par[" << j << "] = " << par.at(j) << std::endl;
		
	return 0;


}

//VERSAO MAIS SIMPLES ENVIADA AO SITE

/*	
int main()
{
	int i, x;
	int parPos, imparPos;
	std::vector<int> impar;
	std::vector<int> par;


	for(i = 0, parPos = 0, imparPos = 0; i < 15; i++)
	{
		std::cin >> x;
		if(x%2==0)
		{
			par.push_back(x);
			parPos++;
			if(parPos>=5)
			{
				for(int j = 0; j < 5; j++)
					std::cout << "par[" << j << "] = " << par.at(j) << std::endl;
				par.erase(par.begin(),par.begin()+5);
				parPos=0;
			}
		}
		else
		{
			impar.push_back(x);
			imparPos++;
			if(imparPos>=5)
			{
				for(int j = 0; j < 5; j++)
					std::cout << "impar[" << j << "] = " << impar.at(j) << std::endl;
				impar.erase(impar.begin(),impar.begin()+5);
				imparPos=0;
			}
		}
		
	}
	for(int j = 0; j < impar.size(); j++)
		std::cout << "impar[" << j << "] = " << impar.at(j) << std::endl;
	for(int j = 0; j < par.size(); j++)
		std::cout << "par[" << j << "] = " << par.at(j) << std::endl;
		
	return 0;

}
*/