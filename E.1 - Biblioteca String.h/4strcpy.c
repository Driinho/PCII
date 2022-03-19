#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// strcpy(char *destino, char *origem)

int main() {

    char *origem = malloc(50 * sizeof(char));
    char *destino = malloc(50 * sizeof(char));
    
    printf("Origem: ");
    fflush(stdin);
    gets(origem);

    strcpy(destino, origem);

    printf("- Destino: %s", destino);

    printf("\n\n");
    return 0;
}