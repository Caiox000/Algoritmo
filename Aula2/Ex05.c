#include <stdio.h>

int main() {
    int n;
    int numero = 2;
    int quantidade = 0;

    printf("Digite quantos numeros primos deseja: ");
    scanf("%d", &n);

    while (quantidade < n) {
        int divisores = 0;

        for (int i = 1; i <= numero; i++) {
            if (numero % i == 0) {
                divisores++;
            }
        }

        if (divisores == 2) {
            printf("%d ", numero);
            quantidade++;
        }

        numero++;
    }

    return 0;
}