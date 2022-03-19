#include <stdio.h>
#include <math.h>

void pitagoras(int o, int a);

int main() {

    int c_a, c_o;

    printf("Digite o valor dos catetos: ");
    scanf("%i %i", &c_a, &c_o);
    
    pitagoras(c_a, c_o);

    printf("\n\n");
    return 0;
}

void pitagoras(int o, int a) {

    double hip;

    hip = sqrt((pow(o, 2) + pow(a, 2)));

    printf("- Hipotenusa: %.1lf", hip);
}