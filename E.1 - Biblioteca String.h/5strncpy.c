#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// strncpy( char *destino, char *origem, int qtde)

int main() {

    int qtde;
    char *origem = malloc(50 * sizeof(char));
    char *destino = malloc(50 * sizeof(char));
    
    printf("Origem: ");
    fflush(stdin);
    gets(origem);
    printf("Quantidade de letras: ");
    scanf("%i", &qtde);

    strncpy(destino, origem, qtde);

    printf("- Destino: %s", destino);

    printf("\n\n");
    return 0;
}