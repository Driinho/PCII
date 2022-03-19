#include <stdio.h>
#include <stdlib.h>

int main() {

    int num, *ptr1, erro = 0;
    char letra, *ptr2;

    printf("Digite um numero inteiro e um caracter: ");
    fflush(stdin);
    scanf("%i %c", &num, &letra);

    ptr1 = &num;
    ptr2 = &letra;

    printf("- [INTEIRO]: Endereco = %p / Conteudo = %i", ptr1, *ptr1);
    printf("\n- [CARACTERE]: Endereco = %p / Conteudo = %c", ptr2, *ptr2);

    printf("\n\n");
    return 0;
}