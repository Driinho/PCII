#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

    char *pala1 = malloc(50 * sizeof(char));
    char *pala2 = malloc(50 * sizeof(char));
    char *pala3 = malloc(50 * sizeof(char));

    printf("Digite tres palavra: ");
    fflush(stdin);
    gets(pala1);
    fflush(stdin);
    gets(pala2);
    fflush(stdin);
    gets(pala3);

    strcat(pala1, pala2);
    strcat(pala1, pala3);

    printf("- Concatenado: %s", pala1);

    printf("\n\n");
    return 0;
}