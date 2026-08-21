#include <stdio.h>
int main(){
    float a, b;
    printf("Digite um valor para ser convertido: ");
    scanf("%f", &a);
    b = a * 9/5 + 32;
    printf("O valor convertido é: %.2f \n", b);
    return 0;
}