#include <stdio.h>

int primo(int num);

int main() {

    int valor;

    printf("Digite um valor: ");
    scanf("%i", &valor);

    valor = primo(valor);

    if(valor == 2)
    {
        printf("- PRIMO");
    }
    else
    {
        printf("- NAO PRIMO");
    }

    printf("\n\n");
    return 0;
}

int primo(int num) {

    int cont, cont_p = 0;

    for(cont = num; cont >= 1 && cont <= num; cont--)
    {
        if(num%cont == 0)
        {
            cont_p++;
        }
    }

    num = cont_p;
    return num;
}