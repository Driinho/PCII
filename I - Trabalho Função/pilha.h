#ifndef _PILHA_
#define _PILHA_

#include <stdio.h>
#include <stdlib.h>

int pos_pilha = 0;
int *pilha = NULL;

int PUSH(int dado){

    printf("[OK]");
    sleep(1);

    if(pilha == NULL)
    {
        pilha = malloc(1 * sizeof(int));
        pos_pilha = 0;
    }

    if(pos_pilha >= 0)
    {
        pilha[pos_pilha] = dado;
        pos_pilha++;
        pilha = realloc(pilha, (pos_pilha + 1) * sizeof(int));

        return dado;
    }

    return -1;
}

int POP(dado){

    printf("\n[OK]");
    sleep(1);

    if(pos_pilha > 0)
    {
        pilha[pos_pilha] = NULL;
        pos_pilha--;
        pilha = realloc(pilha, pos_pilha * sizeof(int));
    
        return dado;
    }

    return -1;
}

void VIEW_LIFO(){

    if(pilha == NULL)
    {
        printf("\n[PILHA VAZIA]");
    }

    else
    {
        int i;

        printf("\n[PILHA]");
        
        for(i = pos_pilha - 1; i >= 0; i--)
        {
            if(pilha[i] >= 10)
            {
                printf("\n|%i|", pilha[i]);
            }
            else
            {
                printf("\n| %i|", pilha[i]);
            }
        }
    }

    fflush(stdin);
    getchar();
}

#endif