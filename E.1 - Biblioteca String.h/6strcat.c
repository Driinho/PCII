#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// strcat(char *n1, char *n2)

int main() {

    char *n1 = malloc(50 * sizeof(char));
    char *n2 = malloc(50 * sizeof(char));

    printf("Primeiro Nome: ");
    fflush(stdin);
    gets(n1);
    printf("Segundo Nome: ");
    fflush(stdin);
    gets(n2);

    strcat(n1, " ");
    strcat(n1, n2);

    printf("- Concatenado: %s", n1);

    printf("\n\n");
    return 0;
}