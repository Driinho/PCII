#include <stdio.h>
#include <stdlib.h>

int main() {

    FILE *ptr_covid;
    int tam, i, control, con_seq, cont, sequencias, j;
    char l, sair;
    char *vet = malloc(1 * sizeof(char));
    char *seq = malloc(100 * sizeof(char));
    char *arquivo = malloc(40 * sizeof(char));

    control = 0;
    cont = 0;
    sequencias = 0;
    tam = 0;
    i = 0;

    ptr_covid = fopen("covid.txt", "r");

    do{
        do{

            l = fgetc(ptr_covid);
            if(l == '\n')
            {
                l = fgetc(ptr_covid);
            }
            vet[i] = l;
            i++;
            vet = realloc(vet, i + 1 * sizeof(char));

        }while(l != EOF);
        vet[i - 1] = '\0';

        printf("- Digite a sequencia: ");
        fflush(stdin);
        gets(seq);

        for(i = 0; seq[i] != '\0'; i++)
        {
            if(seq[i] >= 97 && seq[i] <= 122)
            {
                seq[i] = seq[i] - 32;
            }
        }

        printf("- Buscando (%s)...", seq);

        sleep(2);

        for(tam = 0; seq[tam] != '\0'; tam++){ }

        seq = realloc(seq, tam * sizeof(char));

        for(i = 0; vet[i] != '\0'; i++)
        {
            if(vet[i] == seq[0])
            {
                for(cont = 0, j = control; vet[j] == seq[cont]; cont++, j++)
                {
                    con_seq++;
                }
            }

            if(con_seq == tam)
            {
                sequencias++;
            }
            con_seq = 0;
            control++;
        }

        printf("\n- Quantidade de sequencia: %i", sequencias);

        printf("\nDeseja efetuar uma nova analise (s) ou (n): ");
        scanf("%c", &sair);

    }while(sair == 's');

    if(sair == 'n')
    {
        printf("\n[TCHAU]");
    }

    printf("\n\n");
    return 0;
}