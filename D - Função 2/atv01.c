#include <stdio.h>
#include <math.h>

int fatorial(int fat);
int maiorPrimo(int primo);

int main() {

    int fato, m_primo, mult;

    printf("Fatoria: ");
    fflush(stdin);
    scanf("%i", &fato);

    printf("Maior primo: ");
    fflush(stdin);
    scanf("%i", &m_primo);

    fato = fatorial(fato);

    m_primo = maiorPrimo(m_primo);

    mult = fato * m_primo;

    printf("- Resultado: %i x %i = %i", fato, m_primo, mult);

    printf("\n\n");
    return 0;
}

int fatorial(int fat) {

    int cont;

    for(cont = fat - 1 ; cont >= 2; cont--)
    {
        fat = fat * cont;
    }

    return fat;
}

int maiorPrimo(int primo) {

    int cont, cont2, cont_prim;

    for(cont = primo; cont > 0; cont--)
    {
        for(cont2 = cont; cont2 > 0; cont2--)
        {
            if(cont % cont2 == 0)
            {
                cont_prim++;
            }
        }
        if(cont_prim == 2)
        {
            primo = cont;
            break;
        }
        else
        {
            cont_prim = 0;
        }
    }

    return primo;
}