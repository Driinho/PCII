#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

    int result, i, qtde = 0;
    char *pala1 = malloc(50 * sizeof(char));
    char *pala2 = malloc(50 * sizeof(char));
    char *destino = malloc(50 * sizeof(char));

    printf("Digite duas palavras: ");
    fflush(stdin);
    gets(pala1);
    fflush(stdin);
    gets(pala2);

    result = 0;

    for(i = 1; result == 0 ; i++)
    {
        result = strncmp(pala1, pala2, i);
        if(result == 0)
        {
            qtde++;
        }
    }

    destino[qtde] = '\0';

    strncpy(destino, pala2, qtde);

    printf("- Letras iguais: %i / %s", qtde, destino);

    printf("\n\n");
    return 0;
}