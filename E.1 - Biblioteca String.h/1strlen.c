#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//int strlen(char *)

int main() {

    int tam;
    char *nome = malloc(50 * sizeof(char));

    printf("Nome: ");
    fflush(stdin);
    gets(nome);

    tam = strlen(nome);

    printf("O tamanho de (%s) = %i", nome, tam);

    printf("\n\n");
    return 0;
}