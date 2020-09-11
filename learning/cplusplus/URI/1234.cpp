#include <iostream>
#include <string.h>

int main()
{
	char s0[50];
	while(gets(s0))
	{
		std::string myString (s0, 0, 50);
		char currentChar;
		int i, k=1;

		for(i = 0; i < myString.size(); i++)
		{
			currentChar = myString.at(i);
			if( (currentChar >= 65 && currentChar <= 90) || (currentChar >= 97 && currentChar <= 122) )
			{
				if(k==1)
				{
					putchar (toupper(currentChar));k=0;
				}
				else
				{
					putchar(tolower(currentChar));k=1;
				}
			}
			else
				std::cout << " ";
		}
		std::cout << std::endl;
	}

	return 0;


}