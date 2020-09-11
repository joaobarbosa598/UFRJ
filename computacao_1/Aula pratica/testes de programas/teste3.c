/*
Programa :   Begin .c
Autor:      João Vitor Freitas
Data :       19/04/2017
Descricao : Este  programa  faz  algo  muito importante .
*/

//don't work :(
#include <stdio.h>
#include <string.h>
#define null 0

int main( void )
{
	char v1[50];
	char v2[50];
	char v3[100] = "";
	int cont, i, k, j;
	
	scanf("%d", &cont);
	
	for(k = 0; k < cont; k++)
	{
		scanf("%s", &v1);
		scanf("%s", &v2);
		//printf("v1:%s\nv2:%s\n", v1, v2);
		
		for(i = 0, j = 0; j < strlen(v1)+strlen(v2); i++)
		{
			if (i >= strlen(v1)){
				v3[j++] = v2[i];
				if (i+1 <= strlen(v2)) {
				    v3[j++] = v2[++i];
				}
			}
			else if (i >= strlen(v2)){
				v3[j++] = v1[i];
				if (i+1 <= strlen(v1)) {
				    v3[j++] = v1[++i];
				}
			}
			else{
				v3[j++] = v1[i];
				v3[j++] = v2[i];
			}
		}
		printf("%s\n", v3);
		memset(&v3, 0, sizeof(v3));
	}
	
	
	return 0;
}

