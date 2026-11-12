#include <stdio.h>
#include <stdlib.h> // Necesario para malloc y free

int main() {
    int *arr;
    int n;

    printf("Bienvenido al programa de memoria dinamica en C.\n");
    printf("Ingrese el numero de elementos para el arreglo: ");
    scanf("%d", &n);

    // Asignacion de memoria dinamica usando malloc
    arr = (int*) malloc(n * sizeof(int));

    // Verificar si la asignacion de memoria fue exitosa
    if (arr == NULL) {
        printf("Error: No se pudo asignar memoria.\n");
        return 1;
    }

    printf("Memoria asignada exitosamente para %d enteros.\n", n);

    // Liberar la memoria asignada
    free(arr);
    printf("Memoria liberada.\n");

    return 0;
}