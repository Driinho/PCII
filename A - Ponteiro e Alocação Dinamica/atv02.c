#include <stdio.h>
#include <stdlib.h>

int main() {

    int n1, n2, *ptr1, *ptr2, soma;

    printf("Digite dois valores inteiros: ");
    fflush(stdin);
    scanf("%i %i", &n1, &n2);

    ptr1 = &n1;
    ptr2 = &n2;

    soma = *ptr1 + *ptr2;

    printf("- Soma = %i", soma);

    printf("\n\n");
    return 0;
}