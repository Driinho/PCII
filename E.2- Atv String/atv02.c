#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

    int qtde1, qtde2, qtde3;
    char *pala1 = malloc(50 * sizeof(char));
    char *pala2 = malloc(50 * sizeof(char));
    char *pala3 = malloc(50 * sizeof(char));

    printf("Digite tres nomes: ");
    fflush(stdin);
    gets(pala1);
    fflush(stdin);
    gets(pala2);
    fflush(stdin);
    gets(pala3);

    qtde1 = strlen(pala1);
    qtde2 = strlen(pala2);
    qtde3 = strlen(pala3);

    printf("- Ordem Crescente: ");
    if(qtde1 < qtde2 && qtde1 < qtde3)
    {
        if(qtde2 < qtde3 || qtde2 == qtde3)
        {
            printf("%s-%s-%s", pala1, pala2, pala3);
        }
        else if(qtde2 > qtde3)
        {
            printf("%s-%s-%s", pala1, pala3, pala2);
        }
    }
    else if(qtde1 < qtde2 && qtde1 > qtde3 || qtde1 == qtde3)
    {
        printf("%s-%s-%s", pala3, pala1, pala2);
    }
    else if(qtde1 > qtde2 && qtde2 < qtde3)
    {
        if(qtde1 < qtde3 || qtde1 == qtde3)
        {
            printf("%s-%s-%s", pala2, pala1, pala3);
        }
        else if(qtde1 > qtde3)
        {
            printf("%s-%s-%s", pala2, pala3, pala1);
        }
    }
    else if(qtde1 > qtde2 && qtde2 > qtde3)
    {
        printf("%s-%s-%s", pala3, pala2, pala1);
    }

    printf("\n\n");
    return 0;
}