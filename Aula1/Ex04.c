#include <stdio.h>
int main(){
    int a, b, c;
    printf("Digite um valor: ");
    scanf("%d", &a);
    printf("Digite um valor: ");
    scanf("%d", &b);
    printf("Digite um valor: ");
    scanf("%d", &c);
    if (a < b && a <c){
        if(b<c){
            printf("A ordem é: %d %d %d \n", a , b, c);
        }else{
            printf("A ordem é: %d %d %d \n", a , c, b);
        }
    }else if (b < a && b < c){
        if(a<c){
            printf("A ordem é: %d %d %d \n", b , a, c);
        }else{
            printf("A ordem é: %d %d %d \n", b , c, a);
        }
    }else{  
        if(a<b){
            printf("A ordem é: %d %d %d \n", c , a, b);
        }else{
            printf("A ordem é: %d %d %d \n", c , b, a); 
        }
    }
    return 0;
}