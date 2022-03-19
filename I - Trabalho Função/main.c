#include <stdio.h>
#include "pilha.h"
#include "fila.h"

int main() {

    int dado, opcao, sair;

    sair = 0;

    do{
        system("cls");

        printf("=============================");
        printf("\n(1) Inserir dados na PILHA");
        printf("\n(2) Inserir dados na FILA");
        printf("\n(3) Remover dados da PILHA");
        printf("\n(4) Remover dados da FILA");
        printf("\n(5) Visualizar dados da PILHA");
        printf("\n(6) Visualizar dados da FILA");
        printf("\n(0) Sair");
        printf("\n=============================");
        printf("\nOpcao: ");
        scanf("%i", &opcao);
        printf("=============================");

        switch(opcao)
        {
            case 1:

                printf("\nValor a ser inserido: ");
                scanf("%i", &dado);
                PUSH(dado);

            break;

            case 2:

                printf("\nValor a ser inserido: ");
                scanf("%i", &dado);
                ENQUEUE(dado);

            break;

            case 3:

                POP(1);

            break;

            case 4:

                DEQUEUE(1);

            break;

            case 5:

                VIEW_LIFO();

            break;

            case 6:

                VIEW_FIFO();

            break;

            case 0:

                printf("\n[TCHAU]");
                sair = 1;

            break;
        }

    }while(sair == 0);


    printf("\n\n");
    return 0;
}