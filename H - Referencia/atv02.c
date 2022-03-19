#include <stdio.h>
#include <string.h>

void desembaralhar(char *p_pala, char *e_pala);

int main() {

    char *p_pala = malloc(30 * sizeof(char));
    char *e_pala = malloc(30 * sizeof(char));

    printf("Digite uma palavra: ");
    fflush(stdin);
    gets(p_pala);
    printf("Digite a mesma palavra embaralhada: ");
    fflush(stdin);
    gets(e_pala);

    desembaralhar(p_pala, e_pala);

    printf("- Desembaralhada: %s", e_pala);

    printf("\n\n");
    return 0;
}

void desembaralhar(char *p_pala, char *e_pala) {

    int cont1, cont2, tam;
    char aux;

    tam = strlen(p_pala);

    for(cont1 = 0; cont1 < tam; cont1++)
    {
        for(cont2 = 0; cont2 < tam; cont2++)
        {
            if(p_pala[cont1] == e_pala[cont2])
            {
                aux = e_pala[cont1];
                e_pala[cont1] = p_pala[cont1];
                e_pala[cont2] = aux;
            }
        }
    }
}