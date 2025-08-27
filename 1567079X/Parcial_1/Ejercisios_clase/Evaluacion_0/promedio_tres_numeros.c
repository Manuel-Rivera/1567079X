#include<stdio.h>

int main(){
    float num1, num2, num3;
    
    printf("Dame el primer numero \n");
    scanf("%f", &num1);
    
    printf("Dame el segundo numero \n");
    scanf("%f", &num2);
    
    printf("Dame el tercer numero \n");
    scanf("%f", &num3);
    
    printf("El promedio es: %f\n", (num1 + num2 + num3) / 3);
    
    return 0;
}
