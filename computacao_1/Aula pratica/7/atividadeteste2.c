#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define m 5
 
  int i;
 
void list_add(int *v);
int change_elements(int *v);
 
int main(){
    int *l1;
    int num;
    l1 = malloc (m * sizeof (int *));
    list_add(l1);
    for(i=0; i<m; i++)
    {
        printf("%d\n", l1[i]);
    }
    change_elements(l1);
    for(i=0; i<m; i++)
    {
        printf("%d\n", l1[i]);
    }
 
}
void list_add(int *v){
 
    for(i=0;i<m;i++){
        printf("\nPreencha a lista: "); scanf("%d",&v[i]);
    }
}
int change_elements(int *v){
    int j;
    printf("Quantos valores quer trocar?: "); scanf("%d",&j);
    int aux;
    for(i=0;i>j-2;i--)
    {
        aux=v[i];
        v[i] = v[m-j-i+1];
        v[m-j-i+1]=aux;
        printf("v[i]: %d\n", v[i]);
        printf("v[m-j-i+1]: %d\n", v[m-j-i+1]);
        //1 2 3 4 5
    }
}