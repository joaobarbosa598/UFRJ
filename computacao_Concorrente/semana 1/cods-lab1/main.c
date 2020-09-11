#include <stdio.h>




double error = 1;
double  store = 0;


void area_main(double a, double b){
	
	double mid = (b-a)/2;
	//double cx = b-a;      //change in x	
	double mid_i = (mid-a)/2;
	double mid_ii= (b-mid)/2;
	double area1, area2, area3, area_total, diff_total;
	
	area1 = (b-a)*(1+mid);    //for function (1+x)
	area2 = (mid-a)*(1+mid_i);
	area3 = (b-mid)*(1+mid_ii);

	diff_total = (area1)-(area2+area3);
	//area_total = area1+area2+area3;
	printf("difference: %lf\n", diff_total);
	//printf("total: %lf\n", area1);

	if(diff_total <= error){
		printf("aceitavel\n");
		printf("%lf\n", area1);
		store += area1;
		

	}
	else{
		
		printf("Nao aceito\n");
		area_main(a, mid);
		printf("aqui fazendo 2R\n");
		area_main(mid, b);
		

	}



}



int main(){
	double a = 0.0, b = 2.0;
	double area = 0;


	area_main(a, b);



	printf("%lf\n", store);



	//printf("area abaixo da curva é %lf\n", area);


	return 0;
}