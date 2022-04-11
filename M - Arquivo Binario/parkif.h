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

} veiculo;

FILE *fp, *fp_b;
int pos = 0, i, flag = 0;

void init()
{
    fp = fopen("db.bin", "a+b");
    fclose(fp);
}

void add(veiculo v)
{
    fp = fopen("db.bin", "a+b");

    fwrite(&v, sizeof(veiculo), 1, fp);

    printf("[OK]");
    sleep(1);
    fclose(fp);
}

int rem(char *placa)
{
    veiculo v;
    int i, cont_placa, tam, ret, aux = 0, control = 0;
    fp = fopen("db.bin", "a+b");
    fp_b = fopen("db_b.bin", "a+b");

    do
    {
        cont_placa = 0;
        ret = fread(&v, sizeof(veiculo), 1, fp);
        tam = strlen(v.placa);

        if (ret == 1)
        {
            for (i = 0; v.placa[i] != '\0'; i++)
            {
                if (v.placa[i] == placa[i])
                {
                    cont_placa++;
                }
            }
            if (cont_placa == tam)
            {
                aux = 1;
                printf("[OK]");
                sleep(1);
            }
            else
            {
                fwrite(&v, sizeof(veiculo), 1, fp_b);
            }
        }

    } while (ret == 1);

    if (aux == 0)
    {
        printf("[ERRO]: Placa nao encontrada!");
        fflush(stdin);
        getchar();
    }

    fclose(fp);
    fclose(fp_b);
    remove("db.bin");
    rename("db_b.bin", "db.bin");
}

void view()
{
    veiculo v;
    int ret, cont = 1;

    fp = fopen("db.bin", "a+b");
    rewind(fp);

    printf("[VISUALIZACAO DE VEICULOS]");

    do
    {

        ret = fread(&v, sizeof(veiculo), 1, fp);
        if (ret == 1)
        {
            printf("\n%i | %s / %s / %s / %s ", cont, v.marca, v.modelo, v.cor, v.placa);
            cont++;
        }

    } while (ret == 1);

    fflush(stdin);
    getchar();

    fclose(fp);
}

#endif