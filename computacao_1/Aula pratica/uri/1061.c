/*
Programa :   Begin .c
Autor:      João Vitor Freitas
Data :       19/04/2017
Descricao : Este  programa  faz  algo  muito importante .
*/


#include <stdio.h>

int main(int argc, char **argv)
{
	int day, hour, min, seg,
		day2, hour2, min2, seg2,
		diffd, diffh, diffm, diffs,
		difft, resto, diffk;
	char dia[4], c;
		
	day = 0; hour = 0; min = 0; seg = 0; day2 = 0; hour2 = 0; min2 = 0; seg2 = 0; diffd = 0; diffh = 0; diffm = 0; diffs = 0; 
	difft = 0; resto = 0; diffk = 0;
	
	scanf("%s %d", dia, &day);
	scanf("%d %c %d %c %d", &hour, &c, &min, &c, &seg);
	scanf("%s %d", dia, &day2);
	scanf("%d %c %d %c %d", &hour2, &c, &min2, &c, &seg2);
	
	if(hour > hour2){
		day2-=1;
		hour2+= 24;}
	if(min > min2){
		hour2-=1;
		min2+= 60;}
	if(seg > seg2){
		min2-=1;
		seg2+= 60;}
	
	diffd = (day2 - day)*24*60*60;
	diffh = (hour2 - hour)*60*60;
	diffm = (min2 - min)*60;
	diffs = (seg2 - seg);
	difft = diffd+diffh+diffm+diffs;
	
	diffk = difft/(60*60*24);
	printf("%d dia(s)\n", diffk);
	resto = difft - diffk*(60*60*24);
	diffk = resto/(60*60);
	printf("%d hora(s)\n", diffk);
	resto = resto - diffk*(60*60);
	diffk = resto/60;
	printf("%d minuto(s)\n", diffk);
	resto = resto - diffk*60;
	diffk = resto;
	printf("%d segundo(s)\n", diffk);
	
	
	return 0;
}

