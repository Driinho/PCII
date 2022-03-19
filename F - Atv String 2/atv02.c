#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

    int n;
    char *pala1 = malloc(50 * sizeof(char));
    char *pala2 = malloc(50 * sizeof(char));
    char *pala3 = malloc(50 * sizeof(char));
    char *concat = malloc(50 * sizeof(char));

    printf("Digite o valor inteiro: ");
    scanf("%i", &n);
    printf("Digite tres palavra: ");
    fflush(stdin);
    gets(pala1);
    fflush(stdin);
    gets(pala2);
    fflush(stdin);
    gets(pala3);

    concat[0] = '\0';

    strncat(concat, pala1, n);
    strncat(concat, pala2, n);
    strncat(concat, pala3, n);

    printf("- Concatenado: %s", concat);


    printf("\n\n");
    return 0;
}