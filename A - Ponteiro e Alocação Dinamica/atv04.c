#include <stdio.h>
#include <stdlib.h>

int main() {

    int tam, i;
    char *ptr;

    printf("Digite o tamanho: ");
    fflush(stdin);
    scanf("%i", &tam);

    ptr = malloc(tam*sizeof(char));

    printf("Digite a palavra: ");
    fflush(stdin);
    gets(ptr);

    printf("- Invertida: ");

    for(i = tam; i >= 0; i--)
    {
        printf("%c", ptr[i]);
    }

    free(ptr);

    printf("\n\n");
    return 0;
}