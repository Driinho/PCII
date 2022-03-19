#include <stdio.h>

void piramide(char **, int , int );

int main() {

    int l, c, tam_l, tam_c;
    char **pira;

    printf("Altura da piramide: ");
    scanf("%i", &tam_l);

    tam_c = (tam_l + tam_l) - 1;

    pira = (int **) malloc(tam_l * sizeof(int*));

    for(l = 0; l < tam_l; l++)
    {
        pira[l] = (int *) malloc(tam_c * sizeof(int));
    }

    piramide(pira, tam_l, tam_c);

    for(l = 0; l < tam_l; l++)
    {
        printf("\n");
        for(c = 0; c < tam_c; c++)
        {   
            printf("%c", pira[l][c]);
        }
    }

    printf("\n\n");
    return 0;
}

void piramide(char **pira, int tam_lin, int tam_col) {

    int lin, col, esp, ast;

    ast = 0;

    esp = (tam_col - 1) / 2;

    for(lin = 0; lin < tam_lin; lin++)
    {
        for(col = 0; col < tam_col; col++)
        {
            if(col == esp)
            {
                for(; ast <= lin; col++)
                {
                    if(lin % 2 != 0)
                    {
                        if(col % 2 == 0)
                        {
                            pira[lin][col] = '*';
                            ast++;
                        }
                        else
                        {
                            pira[lin][col] = ' ';
                        }
                    }
                    else
                    {
                        if(col % 2 != 0)
                        {
                            pira[lin][col] = '*';
                            ast++;
                        }
                        else
                        {
                            pira[lin][col] = ' ';
                        }
                    }
                }
                ast = 0;
                esp--;
            }
            pira[lin][col] = ' ';
        }
    }
}