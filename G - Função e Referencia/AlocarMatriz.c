#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 3

int main() {

    int lin, col;
    int **mat = (int**)malloc(TAM * sizeof(int*));

    for(lin = 0; lin < TAM; lin++)
    {
        printf("\n");
        mat[lin] = (int*) malloc(TAM * sizeof(int));
        for(col = 0; col < TAM; col++)
        {
            mat[lin][col] = 0;
            printf(" %i", mat[lin][col]);
        }
    }




    printf("\n\n");
    return 0;
}