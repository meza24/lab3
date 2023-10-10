/*
Axel Alberto Meza Mejias
*/

#include <stdio.h>

// Valor mínimo del array
int encontrarMin(int array[], int tamano) {
    int min = array[0];
    for (int i = 1; i < tamano; i++) {
        if (array[i] < min) {
            min = array[i];
        }
    }
    return min;
}

// Valor máximo del array
int encontrarMax(int array[], int tamano) {
    int max = array[0];
    for (int i = 1; i < tamano; i++) {
        if (array[i] > max) {
            max = array[i];
        }
    }
    return max;
}

// Mínimo y máximo con punteros
void encontrarMinMax(int *array, int *min, int *max, int longitud) {
    if (longitud <= 0) {
        return;
    }
    for (int i = 1; i < longitud; i++) {
        if (*(array + i) < *min) {
            *min = *(array + i);
        }
        if (*(array + i) > *max) {
            *max = *(array + i);
        }
    }
}

int main() {
    // Creamos el array
    int array[] = {21, 24, 65, 3, 56, 12, 35, 15};

    // Calculamos el tamaño del array
    int tamano = sizeof(array) / sizeof(array[0]);

    // Creamos las variables para almacenar el máximo y el mínimo
    int min, max;

    // Llamamos a las funciones para calcular los máximos y mínimos
    min = encontrarMin(array, tamano);
    max = encontrarMax(array, tamano);
    encontrarMinMax(array, &min, &max, tamano);

    printf("El valor mínimo del array es: %d y el máximo es: %d\n", min, max);
    printf("Por el método de punteros, los valores mínimos y máximos del array son: %d y %d\n", min, max);

    return 0;
}

