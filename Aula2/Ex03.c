#include <stdio.h>

int main() {
    int numero;
    int fatorial = 1;

    printf("Digite um numero positivo: ");
    scanf("%d", &numero);

    for (int i = 1; i <= numero; i++) {
        fatorial = fatorial * i;
    }

    printf("O fatorial de %d e: %d\n", numero, fatorial);

    return 0;
}