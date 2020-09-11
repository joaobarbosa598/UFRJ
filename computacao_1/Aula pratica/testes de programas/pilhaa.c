#include<stdio.h>
#include<stdlib.h>
#define m 5
 
typedef struct {
    int item[m];
    int topo;
} Pilha;
 
void iniciaPilha(Pilha *p){
    p->topo = -1;
}
 
int pilhaVazia(Pilha *p){
    if(p->topo == -1){
        return 1;
    }
    else
        return 0;
}
 
int pilhaCheia(Pilha *p){
    if(p->topo == m-1){
        return 1;
    }
    else
        return 0;
}
 
void inserePilha(Pilha *p){
    if(pilhaCheia(p) == 1){
        printf("\nPilha cheia.");
    }
    else
    {
        p->topo++;
        printf("Digite o numero que deseja adicionar: ");
        scanf("%d",&(p->item[p->topo]));
    }
}
 
int removePilha(Pilha *p){
    int aux;
    if(pilhaVazia(p) == 1){
        printf("\nPilha vazia.");
    }
    else{
        aux = p->item[p->topo];
        p->topo--;
        return aux;
    }
}
 
int main(){
    Pilha *p;
    int num, aux;
 
    p = (Pilha* )malloc(sizeof(Pilha));
    iniciaPilha(p);
    for (int i=0;i<m;i++){
        inserePilha(p);
    }
    aux = removePilha(p);
    printf("\n Valor removido: %d",aux);
 
    system("pause");
}