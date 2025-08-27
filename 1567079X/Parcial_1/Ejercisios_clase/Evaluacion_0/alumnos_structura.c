#include <stdio.h>
#include <string.h>

typedef struct {
    char nombre[50];
    int edad;
    float calificacion;
} Alumno;

int mejor_promedio(Alumno alumnos[], int n) {
    int indice_mejor = 0;
    for (int i = 1; i < n; i++) {
        if (alumnos[i].calificacion > alumnos[indice_mejor].calificacion) {
            indice_mejor = i;
        }
    }
    return indice_mejor;
}

void imprimir_alumnos(Alumno alumnos[], int n) {
    printf("\n--- Información de los alumnos ---\n");
    for (int i = 0; i < n; i++) {
        printf("Alumno %d:\n", i + 1);
        printf("  Nombre: %s\n", alumnos[i].nombre);
        printf("  Edad: %d\n", alumnos[i].edad);
        printf("  Calificación: %.2f\n", alumnos[i].calificacion);
    }
}

int main() {
    int n = 3;
    Alumno alumnos[3];

    for (int i = 0; i < n; i++) {
        printf("Ingrese el nombre del alumno %d: ", i + 1);
        scanf("%[^\n]",alumnos[i].nombre);
        alumnos[i].nombre[strcspn(alumnos[i].nombre, "\n")] = 0;

        printf("Ingrese la edad del alumno %d: ", i + 1);
        scanf("%d", &alumnos[i].edad);

        printf("Ingrese la calificación del alumno %d: ", i + 1);
        scanf("%f", &alumnos[i].calificacion);

        getchar(); 
        printf("\n");
    }

    imprimir_alumnos(alumnos, n);

    int indice_mejor = mejor_promedio(alumnos, n);
    printf("\nEl alumno con mejor calificación es:\n");
    printf("Nombre: %s\n", alumnos[indice_mejor].nombre);
    printf("Edad: %d\n", alumnos[indice_mejor].edad);
    printf("Calificación: %.2f\n", alumnos[indice_mejor].calificacion);

    return 0;
}
