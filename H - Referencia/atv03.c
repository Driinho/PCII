#include <stdio.h>

void progressao(int tam, int termo, int razao, int *vet);

int main() {

    int tam, termo, razao, cont, *vetor;

    printf("Tamanho Vetor (impar): ");
    scanf("%i", &tam);
    printf("Termo Inicial e Razao: ");
    scanf("%i %i", &termo, &razao);

    vetor = malloc(tam * sizeof(int));

    progressao(tam, termo, razao, vetor);

    printf("\n\n");
    return 0;
}

void progressao(int tam, int termo, int razao, int *vet) {

    int cont, ini_vet, sub;

    ini_vet = (tam - 1) / 2;
    sub = termo - (ini_vet * razao);

    for(cont = 0; cont < tam; cont++)
    {
        vet[cont] = sub;
        sub = sub + razao;
    }

    printf("- Progressao Aritimetica: ");
    for(cont = 0; cont < tam; cont++)
    {
        printf("%i ", vet[cont]);
    }
}