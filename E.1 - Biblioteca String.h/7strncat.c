#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// strncat(char *n1, char *n2, int qtde)

int main() {

    int qtde;
    char *n1 = malloc(50 * sizeof(char));
    char *n2 = malloc(50 * sizeof(char));

    printf("Primeiro Nome: ");
    fflush(stdin);
    gets(n1);
    printf("Segundo Nome: ");
    fflush(stdin);
    gets(n2);
    printf("Quantidade de letras: ");
    scanf("%i", &qtde);

    strcat(n1, " ");
    strncat(n1, n2, qtde);

    printf("- Concatenado: %s", n1);

    printf("\n\n");
    return 0;
}