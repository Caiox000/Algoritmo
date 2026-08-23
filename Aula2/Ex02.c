#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secreto;
    int palpite;

    srand(time(NULL));

    secreto = rand() % 100 + 1;

    printf("Digite seu palpite: ");
    scanf("%d", &palpite);

    while (palpite != secreto) {

        if (palpite > secreto) {
            printf("Menor!\n");
        } else {
            printf("Maior!\n");
        }

        printf("Digite outro palpite: ");
        scanf("%d", &palpite);
    }

    printf("Acertou!\n");

    return 0;
}