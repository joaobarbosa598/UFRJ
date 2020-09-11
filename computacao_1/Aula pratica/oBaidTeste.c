#include <stdio.h>
#include <string.h>

int main (int agrc, char** argv )
{
	char letra;
	int podeMostrar = 1;
	int a = 0;
	
	while(1)
	{
		scanf("%c", &letra);
		
		a++;
		
		if(letra == ';')
			podeMostrar = 0;
		
		
		if(podeMostrar)
			printf("%d: %c\n", a,letra);
			
		if(letra == ' ')
			break;
	}
	return 1;
}
