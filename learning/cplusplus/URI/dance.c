#include <stdio.h>
#include <string.h>


//programa 1234.cpp aceito pelo site uri em c++
int main() {
 
    int j, k;
	char v[50];

	k = 1;
	
    fgets(v, 50, stdin);
	while(feof(stdin) == 0) 
	{
		for(j = 0; j < strlen(v); j++)
		{
			if( (v[j] >= 65 && v[j] <= 90) || (v[j] >= 97 && v[j] <= 122) )
			{
				if(k)
				{
					v[j] = toupper(v[j]);
					k = 0;
				}
				else
				{
					v[j] = tolower(v[j]);
					k = 1;
				}
			}
		}		
		printf("%s", v);
		fgets(v, 50, stdin);
	}
 
    return 0;
}