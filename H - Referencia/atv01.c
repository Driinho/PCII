#include <stdio.h>
#include <string.h>

void referencial(char *nome);

int main() {

    char *nome = malloc(100 * sizeof(char));

    printf("\nDigite um nome: ");
    fflush(stdin);
    gets(nome);

    referencial(nome);

    printf("\n\n");
    return 0;
}

void referencial(char *nome) {

    int tam, tam2, tam3, t1, t2, t3, cont, cont2, i, flag, flag1, sinal, aux, cont_esp, cont2_esp, n1, n2;
    char *u_nome, *p_nome, *referencia;

    t1 = 0;
    t2 = 0;
    t3 = 0;
    tam2 = 0;
    tam3 = 0;
    flag = 0;
    flag1 = 0;
    sinal = 0;
    aux = 0;
    cont_esp = 0;
    cont2_esp = 0;

    tam = strlen(nome);

    for(cont = 0; cont < tam; cont++)
    {
        if(nome[cont] == ' ')
        {
            cont_esp++;          
        }
    }

    //Pega o ultimo nome, que vai antes da virgula
    for(cont = tam - 1; cont >= 0; cont--)
    {
        if(flag == 0)
        {
            t1++;
        }
        if(nome[cont] == ' ' && flag == 0)
        {
            flag = 1;
            u_nome = malloc(t1 * sizeof(char));
            for(cont2 = cont + 1, i = 0; cont2 < tam; cont2++, i++)
            {
                u_nome[i] = nome[cont2];
                if(u_nome[i] >= 97 && u_nome[i] <= 122)
                {
                    u_nome[i] = u_nome[i] - 32;
                }
            }
            u_nome[i] = ',';
            i++;
            u_nome[i] = ' ';
            i++;
            u_nome[i] = '\0';
        }        
    }

    flag = 0;
    tam2 = tam - t1;

    //Pegas todos os nomes e abreviações que veem dps da virgula
    for(cont = 0; cont < tam2; cont++)
    {
        if(nome[cont] == ' ' && flag == 0 || nome[cont] == '\0')
        {
            flag = 1;
            t2 = cont;
            p_nome = malloc(tam2 * sizeof(char));

            for(cont = 0; cont < t2; cont++)
            {
                if(nome[cont] >= 97 && nome[cont] <= 122 && flag1 == 0)
                {
                    p_nome[sinal] = nome[cont] - 32;
                    flag1 = 1;
                    sinal++;
                }
                else
                {
                    p_nome[sinal] = nome[cont];
                    sinal++;
                }
            }
            p_nome[sinal] = ' ';
            sinal++;
            cont2_esp++;
        }
        if(nome[cont] == ' ' && flag == 1)
        {
            cont++;
            aux = cont;

            for(; nome[cont] != ' '; cont++)
            {
                t3++;
            }

            if(t3 <= 3)
            {
                cont2_esp++;
            }
            cont = aux;

            if(nome[cont] >= 97 && nome[cont] <= 122 && t3 > 3)
            {            
                p_nome[sinal] = nome[cont] - 32;
                sinal++;
            }
            else if(nome[cont] >= 65 && nome[cont] <= 90 && t3 > 3)
            {
                p_nome[sinal] = nome[cont];
                sinal++;
            }
            if(t3 > 3)
            {
                p_nome[sinal] = '.';
                sinal++;
                p_nome[sinal] = ' ';
                sinal++;
                cont2_esp++;
                t3 = 0;
            }
            if(cont2_esp == cont_esp)
            {
                p_nome[sinal] = '\0';
            }
        }
    }

    //Passa os 2 vetores para 1 só
    flag = 0;
    cont2 = 0;
    n1 = strlen(u_nome);
    n2 = strlen(p_nome);
    tam3 = n1 + n2;
    referencia = malloc(tam3 * sizeof(char));

    for(cont = 0; cont < tam3; cont++)
    {
        if(u_nome[cont] != '\0' && flag == 0)
        {
            referencia[cont] = u_nome[cont];
        }
        else if(u_nome[cont] == '\0')
        {
            flag = 1;
        }
        if(flag == 1)
        {
            referencia[cont] = p_nome[cont2];  
            cont2++; 
        }
    }
    referencia[cont] = '\0';

    printf("\n%s", referencia);
}