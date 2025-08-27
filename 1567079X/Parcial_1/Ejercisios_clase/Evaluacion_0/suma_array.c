#include <stdio.h>
#include <stdlib.h>

#define N 10

void llenar(int array[10][10], int valor) {
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            array[i][j] = valor;
}

void print(int** array, int filas, int columnas) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("%3d ", array[i][j]);
        }
        printf("\n");
    }
}

int** suma_array(int array1[10][10], int array2[10][10]) {
    int** newArray = malloc(N * sizeof(int*));
    for (int i = 0; i < N; i++) {
        newArray[i] = malloc(N * sizeof(int));
        for (int j = 0; j < N; j++)
            newArray[i][j] = array1[i][j] + array2[i][j];
    }
    return newArray;
}

void liberar_matriz(int** matriz, int filas) {
    for (int i = 0; i < filas; i++) free(matriz[i]);
    free(matriz);
}

int main() {
    int A[N][N], B[N][N];

    llenar(A, 10);
    A[5][5] = 5;
    llenar(B, 5);
    B[5][5] = 10;

    int* ptrA[N];
    int* ptrB[N];
    for (int i = 0; i < N; i++) {
        ptrA[i] = A[i];
        ptrB[i] = B[i];
    }

    printf("Matriz A:\n");
    print(ptrA, N, N);

    printf("\nMatriz B:\n");
    print(ptrB, N, N);

    int** C = suma_array(A, B);
    printf("\nSuma A + B:\n");
    print(C, N, N);

    liberar_matriz(C, N);

    return 0;
}
