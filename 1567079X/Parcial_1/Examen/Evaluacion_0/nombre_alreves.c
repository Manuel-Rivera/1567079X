#include<stdio.h>
#include<string.h>

int main(){
    char nombre[50];
    
    printf("Dame tu nombre\n");
    scanf("%s", nombre);
    
    for (int i = strlen(nombre) - 1; i >= 0; i--){
        printf("%c", nombre[i]);
    }
    return 0;
}