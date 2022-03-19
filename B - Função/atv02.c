#include <stdio.h>
#include <math.h>

void fatorial(int a);

int main() {

    int valor;

    printf("Digite um valor: ");
    scanf("%i", &valor);

    fatorial(valor);

    printf("\n\n");
    return 0;
}

void fatorial(int a) {

    int cont, fat = a;

    for(cont = a - 1; cont > 1; cont--)
    {
        fat = fat * cont;

        a--;
    }

    printf("- Fatorial: %i", fat);
}