#ifndef _PARKIF_
#define _PARKIF_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct veiculo
{
    char marca[50];
    char modelo[50];
    char cor[20];
    char placa[10];

}veiculo;

veiculo *db;
int pos = 0, i, flag = 0;

void init()
{
    db = malloc(1 * sizeof(veiculo));
}

void add(veiculo v)
{
    if(flag == 1)
    {
        pos++;
    }
    db[pos] = v;
    pos++;
    db = realloc(db, (pos + 1) * sizeof(veiculo));
    if(flag == 1)
    {
        pos--;
        db[pos - 1] = db[pos];
        db = realloc(db, pos * sizeof(veiculo));
        flag = 0;
    }

    printf("[OK]");
    sleep(1);
}

int rem(char *placa)
{
    int j = 0, seq = 0;

    for(i = 0; i < pos; i++)
    {
        do{
            if(placa[j] == db[i].placa[j])
            {
                seq++;
            }
            j++;

            if(seq == 8)
            {
                do{
                    
                    db[i] = db[i + 1];
                    i++;
                }while(i < pos);

                pos--;
                db = realloc(db, pos * sizeof(veiculo));
                flag = 1;
                printf("[OK]");
                sleep(2);
                return 0;
            }

        }while(placa[j] == db[i].placa[j]);
    }

    printf("[ERRO]: Placa nao encontrada!");
    sleep(2);
    return -1;

}

void view()
{
    printf("[VISUALIZACAO DE VEICULOS]");
    for(i = 0; i < pos; i++)
    {
        printf("\n%i | %s / %s / %s / %s", i + 1,  db[i].marca, db[i].modelo, db[i].cor, db[i].placa);
    }
    fflush(stdin);
    getchar();
}

#endif