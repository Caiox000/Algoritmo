#include <stdio.h>

int main() {
    int n;
    int divisores = 0;

    printf("Digite um numero: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            divisores++;
        }
    }

    if (divisores == 2) {
        printf("O numero e primo.\n");
    } else {
        printf("O numero nao e primo.\n");
    }

    return 0;
}