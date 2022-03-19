#ifndef _FILA_
#define _FILA_

#include <stdio.h>
#include <stdlib.h>

int pos_fila = 0;
int *fila = NULL;

int ENQUEUE(int dado){

    printf("[OK]");
    sleep(1);

    if(fila == NULL)
    {
        fila = malloc(1 * sizeof(int));
        pos_fila = 0;
    }

    if(pos_pilha >= 0)
    {
        fila[pos_fila] = dado;
        pos_fila++;
        fila = realloc(fila, (pos_fila + 1) * sizeof(int));
        fila[pos_fila] = '\0';

        return dado;
    }

    return -1;
}

int DEQUEUE(dado){

    printf("\n[OK]");
    sleep(1);

    int i, j;

    fila[0] = NULL;

    for(i = 0, j = 1; j != pos_fila; i++, j++)
    {
        fila[i] = fila[j];
    }

    if(pos_fila > 0)
    {
        pos_fila--;
        fila = realloc(fila, pos_fila * sizeof(int));
    
        return dado;
    }

    return -1;
}

void VIEW_FIFO(){

    printf("\n[FILA]");

    if(pos_fila >= 0)
    {
        int i;

        for(i = pos_fila - 1; i >= 0; i--)
        {
            if(fila[i] >= 10)
            {
                printf("\n|%i|", fila[i]);
            }
            else
            {
                printf("\n| %i|", fila[i]);
            }
        }
    }


    fflush(stdin);
    getchar();
}

#endif