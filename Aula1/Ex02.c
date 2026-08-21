#include <stdio.h>
int main(){
    float a, b, pi = 3.141592;
    printf("Digite o raio da circunferencia: ");
    scanf("%f", &a);
    b = 4 *pi*(a*a);
    printf("O valor da area é: %.2f \n", b);
    return 0;
}