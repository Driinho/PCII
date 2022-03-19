#include <stdio.h>
#include <stdlib.h>

int main() {

    int i, pos;
    char *ptr_pala1, *ptr_pala2, letra_pala1, letra_pala2;

    ptr_pala1 = malloc(50*sizeof(char));
    ptr_pala2 = malloc(50*sizeof(char));  

    printf("Primeira palavra: ");
    fflush(stdin);
    gets(ptr_pala1);
    printf("Segunda palavra: ");
    fflush(stdin);
    gets(ptr_pala2);

    for(i = 0; ptr_pala1[i] != '\0' || ptr_pala2[i] != '\0'; i++)
    {
        if(ptr_pala1[i] != ptr_pala2[i])
        {
            pos = i;
            letra_pala1 = ptr_pala1[i];
            letra_pala2 = ptr_pala2[i];
            break;
        }
    }

    printf("- Diferentes, posicao %i: '%c' != '%c'", pos, letra_pala1, letra_pala2);

    free(ptr_pala1);
    free(ptr_pala2);

    printf("\n\n");
    return 0;
} 