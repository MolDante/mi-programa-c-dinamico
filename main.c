#include <stdio.h>
#include <stdlib.h> // Necesario para malloc y free
//comentario desde github para probar
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
	// Inicializar y mostrar los elementos del arreglo
	printf("Inicializando y mostrando los elementos del arreglo:\n");
	for (int i = 0; i < n; i++) {
		arr[i] = i * 100; // Asignamos un valor simple para el ejemplo
		printf("Elemento en indice %d: %d\n", i, arr[i]);
	}
    // Liberar la memoria asignada
    free(arr);
    printf("Memoria liberada.\n");
    printf("Programna finalizado.\n");
    return 0;
}
