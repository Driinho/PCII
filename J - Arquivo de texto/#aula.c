#include <stdio.h>

int main() {

    FILE *ptr_arq;
    char c, vetor[100];
    int i;

    ptr_arq = fopen("texto.txt", "a+");

    if(ptr_arq == NULL)
    {
        printf("\n\tErro ao abrir o arquivo.");
        return 0;
    }

    printf("\n\tDigite um texto: ");
    fflush(stdin);
    gets(vetor);

    for(i = 0; vetor[i] != '\0'; i++)
    {
        fputc(vetor[i], ptr_arq);
    }
    fputc('\n', ptr_arq);

    rewind(ptr_arq);

    do{

        c = fgetc(ptr_arq);
        printf("%c", c);
    
    }while(c != EOF);


/*
    i = 0;
    do{

        vetor[i] = fgetc(ptr_arq);
        i++;

    }while(vetor[i] != EOF);

    vetor[i] = '\0';

    printf("<%s>", vetor);
*/

    fclose(ptr_arq);

    printf("\n\n");
    return 0;
}