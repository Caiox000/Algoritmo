#include <stdio.h>
int main(){
    int a, b, c;
    printf("Digite um valor: ");
    scanf("%d", &a);
    printf("Digite um valor: ");
    scanf("%d", &b);
    printf("Digite um valor: ");
    scanf("%d", &c);
    if(a > b && a > c){
        printf("O maior valor é: %d \n", a);
    }else if(b > a && b > c){
        printf("O maior valor é: %d \n", b);
    }else{
        printf("O maior valor é: %d \n", c);
    }
    return 0;
}