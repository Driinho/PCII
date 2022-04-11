#include <stdio.h>
#include "parkif.h"

int main()
{

    int sair, op;
    veiculo vei;
    char *placa = malloc(10 * sizeof(char));

    sair = 0;

    init();

    do
    {
        system("cls");

        printf("-------------------------");
        printf("\n- 1) Entrada de Veiculo -");
        printf("\n- 2) Saida de Veiculo   -");
        printf("\n- 3) Visualizar Veiculos-");
        printf("\n- 0) Sair               -");
        printf("\n-------------------------");
        printf("\n>> ");
        scanf("%i", &op);

        switch (op)
        {
        case 1:
            printf("\n[ENTRADA DE VEICULO]");
            printf("\n- Marca: ");
            fflush(stdin);
            gets(vei.marca);
            printf("- Modelo: ");
            fflush(stdin);
            gets(vei.modelo);
            printf("- Cor: ");
            fflush(stdin);
            gets(vei.cor);
            printf("- Placa: ");
            fflush(stdin);
            gets(vei.placa);

            add(vei);

            break;

        case 2:
            printf("[SAIDA DE VEICULO]\n");
            printf(">> ");
            fflush(stdin);
            gets(placa);

            rem(placa);

            break;

        case 3:

            view();

            break;

        case 0:

            sair = 1;
            printf("\n[TCHAU]");

            break;
        }

    } while (sair == 0);

    printf("\n\n");
    return 0;
}