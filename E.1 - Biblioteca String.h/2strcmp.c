#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// int strcmp(char *, char *)

int main() {

    //strcmp("Gil", "Eduardo") > 0
    //strcmp("Eduardo", "Gil") < 0
    //strcmp("Gil", "Gil") = 0

    int result;
    char *n1 = malloc(50 * sizeof(char));
    char *n2 = malloc(50 * sizeof(char));

    printf("Primeiro Nome: ");
    fflush(stdin);
    gets(n1);
    printf("Segundo Nome: ");
    fflush(stdin);
    gets(n2);

    result = strcmp(n1, n2);

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