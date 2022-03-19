#include <stdio.h>

int agregar(int n1, int n2);

int main() {

    int num1, num2, soma;

    printf("Digite dois numeros com 3 digitos: ");
    scanf("%i %i", &num1, &num2);

    soma = agregar(num1, num2);

    printf("- Resultado: %i", soma);

    printf("\n\n");
    return 0;
}

int agregar(int n1, int n2) {

    int l1, l2, l3, m1, m2, m3, s1, s2, s3, soma = 0;

    l1 = n1 / 100;
    l2 = (n1 % 100) / 10;
    l3 = n1 % 10;

    m1 = n2 / 100;
    m2 = (n2 % 100) / 10;
    m3 = n2 % 10;

    s1 = l1 + m1;
    s2 = l2 + m2;
    s3 = l3 + m3;

    if(s1 > 9)
    {
        s1 = 0;
    }
    if(s2 > 9)
    {
        s2 = 0;
    }
    if(s3 > 9)
    {
        s3 = 0;
    }

    soma = s3;
    soma = soma + (s2*10);
    soma = soma + (s1*100);
    
    return soma;
}