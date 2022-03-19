#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// int strncmp(char *, char *, int)

int main() {

    //strncmp('Banana', 'Barco', 2) = 0
    //strncmp('Banana', 'Barco', 3) < 0
    //strncmp('Barco', 'Banana', 3) > 0

    int result, total;
    char *n1 = malloc(50 * sizeof(char));
    char *n2 = malloc(50 * sizeof(char));

    printf("Primeiro Nome: ");
    fflush(stdin);
    gets(n1);
    printf("Segundo Nome: ");
    fflush(stdin);
    gets(n2);
    printf("Total de caracteres para comparacao: ");
    scanf("%i", &total);

    result = strncmp(n1, n2, total);

    if(result < 0)
    {
        printf("- O Nome (%s) e menor que o nome (%s)", n1, n2);
    }
    else if(result > 0)
    {
        printf("- O Nome (%s) e maior que o nome (%s)", n1, n2);
    }
    else
    {
        printf("- O Nomme (%s) e igual o nome (%s)", n1, n2);
    }

    printf("\n\n");
    return 0;
}