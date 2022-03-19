#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10

void ordenar(int *num);

int main() {

    srand(time(NULL));

    int cont;
    int *num = malloc(TAM * sizeof(int));

    printf("Vetor Aleatorio: ");
    for(cont = 0; cont < TAM; cont++)
    {
        num[cont] = 10 + rand() % 90;
        printf("%i ", num[cont]);
    }

    ordenar(num);

    printf("\n- Vetor Ordenado: ");
    for(cont = 0; cont < TAM; cont++)
    {
        printf("%i ", num[cont]);
    }

    printf("\n\n");
    return 0;
}

void ordenar(int *num) {

    int cont, cont2, aux;

    for(cont = 0; cont < TAM; cont++)
    {
        for(cont2 = cont + 1; cont2 < TAM; cont2++)
        {
            if(num[cont2] < num[cont])
            {
                aux = num[cont2];
                num[cont2] = num[cont];
                num[cont] = aux;
            }
        }
    }
}