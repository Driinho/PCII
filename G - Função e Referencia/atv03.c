#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 3

void transposto(int **mat);

int main() {

    srand(time(NULL));

    int lin, col;
    int **matriz = (int **) malloc(TAM * sizeof(int*));

    for(lin = 0; lin < TAM; lin++)
    {
        matriz[lin] = (int *) malloc(TAM * sizeof(int));
    }

    printf("Matriz:");
    for(lin = 0; lin < TAM; lin++)
    {
        printf("\n");
        for(col = 0; col < TAM; col++)
        {
            matriz[lin][col] = 10 + rand() % 90;
            printf(" %i", matriz[lin][col]);
        }
    }

    transposto(matriz);

    printf("\n\nTransposta: ");
    for(lin = 0; lin < TAM; lin++)
    {
        printf("\n");
        for(col = 0; col < TAM; col++)
        {
            printf(" %i", matriz[lin][col]);
        }
    }

    printf("\n\n");
    return 0;
}

void transposto(int **mat) {

    int lin, col;
    int **mat_trans = (int **) malloc(TAM * sizeof(int*));

    for(lin = 0; lin < TAM; lin++)
    {
        mat_trans[lin] = (int *) malloc(TAM * sizeof(int));
    }

    for(lin = 0; lin < TAM; lin++)
    {
        for(col = 0; col < TAM; col++)
        {
            mat_trans[col][lin] = mat[lin][col];
        }
    }

    for(lin = 0; lin < TAM; lin++)
    {
        for(col = 0; col < TAM; col++)
        {
            mat[lin][col] = mat_trans[lin][col];
        }
    }
}