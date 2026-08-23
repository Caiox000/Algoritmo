#include <stdio.h>

int main() {
    int numero;
    int soma = 0;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);

    while (numero >= 0) {
        soma = soma + numero;

        printf("Digite outro numero: ");
        scanf("%d", &numero);
    }

    printf("Soma dos numeros positivos: %d\n", soma);

    return 0;
}