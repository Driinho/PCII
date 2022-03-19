#include <stdio.h>

#define TAM 5

void ordenar(char l1, char l2, char l3, char l4, char l5);

int main() {

    char le1, le2, le3, le4, le5;

    printf("Digite cinco letras: ");
    scanf("%c %c %c %c %c", &le1, &le2, &le3, &le4, &le5);

    ordenar(le1, le2, le3, le4, le5);

    printf("\n\n");
    return 0;
}

void ordenar(char l1, char l2, char l3, char l4, char l5) {

    char vet[TAM];
    int cont, ord, maior;

    for(cont = 0; cont < TAM; cont++)
    {
        if(cont == 0)
        {
            if(l1 > 96 && l1 < 123) {l1 = l1 - 32;}
            vet[cont] = l1;
        }
        else if(cont == 1)
        {
            if(l2 > 96 && l2 < 123) {l2 = l2 - 32;}
            vet[cont] = l2;
        }
        else if(cont == 2)
        {
            if(l3 > 96 && l3 < 123) {l3 = l3 - 32;}
            vet[cont] = l3;
        }
        else if(cont == 3)
        {
            if(l4 > 96 && l4 < 123) {l4 = l4 - 32;}
            vet[cont] = l4;
        }
        else if(cont == 4)
        {
            if(l5 > 96 && l5 < 123) {l5 = l5 - 32;}
            vet[cont] = l5;
        }
    }

    for(cont = 0; cont < TAM; cont++)
    {
        for(ord = cont + 1; ord < TAM; ord++)
        {
            if(vet[cont] > vet[ord])
            {
                maior = vet[ord];
                vet[ord] = vet[cont];
                vet[cont] = maior;
            }
        }
    }

    printf("- Ordenado: ");

    for(cont = 0; cont < TAM; cont++)
    {
        printf("%c ", vet[cont]);
    }
}