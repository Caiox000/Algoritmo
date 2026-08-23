#include <stdio.h>

int main() {
    int n;
    int soma = 0;

    printf("Digite um numero: ");
    scanf("%d", &n);

    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            soma = soma + i;
        }
    }

    if (soma == n) {
        printf("O numero e perfeito.\n");
    } else {
        printf("O numero nao e perfeito.\n");
    }

    return 0;
}