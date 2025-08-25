#include <stdio.h>

int main() {
    int n;
    printf("Ingrese un número mayor que 0: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Número inválido.\n");
        return 1;
    }

    int totalFilas = n;
    int totalColumnas = 2 * n - 1;

    for (int pos = 0; pos < totalFilas * totalColumnas; pos++) {
        int fila = pos / totalColumnas;
        int col = pos % totalColumnas;

        int inicio = n - fila - 1;
        int fin = n + fila - 1;

        if (col >= inicio && col <= fin)
            printf("*");
        else
            printf(" ");

        if (col == totalColumnas - 1)
            printf("\n");
    }

    return 0;
}
