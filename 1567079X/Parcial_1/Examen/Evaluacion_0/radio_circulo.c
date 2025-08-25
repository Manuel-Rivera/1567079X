#include<stdio.h>

#define PI 3.1416

int main(){
   float radio;
   
   printf("Dame el radio \n");
   scanf("%f", &radio);

   printf("El area del circulo es: %f\n", PI * radio * radio);


   return 0;
}
