#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

    int result;
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

    result = strcmp(pala1, pala2);

    printf("- Ordem Alfabetica: ");

    if(result < 0)
    {
        result = strcmp(pala1, pala3);
        if(result < 0)
        {
            result = strcmp(pala2, pala3);
            if(result < 0 || result == 0)
            {
                printf("%s-%s-%s", pala1, pala2, pala3);
            }
            else if(result > 0)
            {
                printf("%s-%s-%s", pala1, pala3, pala2);
            }
        }
        else if(result > 0)
        {
            printf("%s-%s-%s", pala3, pala1, pala2);
        }
        else
        {
            printf("%s-%s-%s", pala1, pala3, pala2);
        }
    }
    else if(result > 0)
    {
        result = strcmp(pala2, pala3);
        if(result < 0)
        {
            result = strcmp(pala1, pala3);
            if(result < 0 || result == 0)
            {
                printf("%s-%s-%s", pala2, pala1, pala3);
            }
            else if(result > 0)
            {
                printf("%s-%s-%s", pala2, pala3, pala1);

            }
        }
        else if(result > 0)
        {
            printf("%s-%s-%s", pala3, pala2, pala1);
        }
        else
        {
            printf("%s-%s-%s", pala2, pala3, pala1);
        }
    }
    else
    {
        printf("%s-%s-%s", pala1, pala2, pala3);
    }

    printf("\n\n");
    return 0;
}