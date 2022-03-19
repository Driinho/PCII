#include <stdio.h>
#include <stdlib.h>

int main() {

    int tam1, tam2, i, j;
    char *ptr_1, *ptr_2, *ptr_3;

    printf("Digite dois tamanhos: ");
    fflush(stdin);
    scanf("%i %i", &tam1, &tam2);

    ptr_1 = malloc(tam1 * sizeof(char));
    ptr_2 = malloc(tam2 * sizeof(char));
    ptr_3 = malloc((tam1 + tam2 + 2) * sizeof(char));

    printf("Digite a primeira palavara: ");
    fflush(stdin);
    gets(ptr_1);

    printf("Digite a segunda palavra: ");
    fflush(stdin);
    gets(ptr_2);

    for(i = 0; i < tam1; i++)
    {
        ptr_3[i] = ptr_1[i];
    }

    ptr_3[i] = '-';
    i++;

    for(j = 0; j < tam2; j++, i++)
    {
        ptr_3[i] = ptr_2[j];
    }
    ptr_3[i] = '\0';

    printf("- Concatenadas: %s", ptr_3);

    free(ptr_1);
    free(ptr_2);
    free(ptr_3);

    printf("\n\n");
    return 0;
}