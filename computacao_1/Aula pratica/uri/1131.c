/*
Programa :   Begin .c
Autor:      João Vitor Freitas
Data :       21/04/2017
Descricao : Este  programa  faz  algo  muito importante .
*/


#include <stdio.h>

int main(int argc, char **argv)
{
	int grenal, new, i , g, vi, vg, draw;
	
	vi = 0;
	vg = 0;
	draw = 0;
	new = 1;
	grenal = 1;
	scanf("%d %d", &i, &g);
	if(i > g)
		vi+= 1;
	else if(i < g)
		vg+=1;
	else if(i == g)
		draw+=1;
	printf("Novo grenal (1-sim 2-nao)\n");
	scanf("%d", &new);
	
	/*switch (new)
	{
		case 1:
			scanf("%d %d", &i, &g);
			grenal+= 1;
			printf("Novo grenal (1-sim 2-nao)\n");
			scanf("%d", &new); break;
		case 2:
			break;
		default:			
	}*/
	
	for(; new == 1;)
	{
		scanf("%d %d", &i, &g);
		if(i > g)
			vi+= 1;
		else if(i < g)
			vg+=1;
		else if(i == g)
			draw+=1;
			
		grenal+= 1;
		printf("Novo grenal (1-sim 2-nao)\n");
		scanf("%d", &new);
	}
	
	printf("%d grenais\n", grenal);
	printf("Inter:%d\n", vi);
	printf("Gremio:%d\n", vg);
	printf("Empates:%d\n", draw);
	if(vi > vg)
		printf("Inter venceu mais\n");
	else if(vi < vg)
		printf("Gremio venceu mais\n");
	else if(vi == vg)
		printf("Nao houve vencedor\n");
	
	return 0;
}


