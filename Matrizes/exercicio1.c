#include <stdio.h>

#define maxSize 100

struct Matriz{
    int elentos[maxSize][maxSize];
    int order;
};

void readMatriz(struct Matriz *m){
    printf("Digite a ordem da Matriz: ");
    scanf("%d",&m->order);

    for(int i = 0; i<m->order;i++){
        for(int j = 0;j <m->order; j++){
            printf("Elemento: [%d][%d]",i,j);
            scanf("%d",&m->elentos[i][j]);
        }
    }
}

void writeMatriz(struct Matriz m){
    printf("A matriz Digitada é:\n");

    for(int i=0;i<m.order;i++){
        for(int j=0;j<m.order;j++){
            printf("%d\t",m.elentos[i][j]);
        }
        printf("\n");
    }
}

int main(){
    struct Matriz matriz;

    readMatriz(&matriz);
    writeMatriz(matriz);

    printf("%d",matriz);
}