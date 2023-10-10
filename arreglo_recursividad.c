/*
Axel Alberto Meza Mejias
*/

#include <stdio.h>

// Función búsqueda binaria 
int busqueda_binaria(int array[], int tamano, int valor) {
    int izquierda = 0;
    int derecha = tamano - 1;

    while (izquierda <= derecha) {
        int medio = izquierda + (derecha - izquierda) / 2;

        if (array[medio] == valor) {
            return medio; 
        } else if (array[medio] < valor) {
            izquierda = medio + 1;
        } else {
            derecha = medio - 1;
        }
    }

    return -1; 
}

// Función búsqueda lineal 
int busqueda_lineal(int array[], int tamano, int valor) {
    for (int i = 0; i < tamano; i++) {
        if (array[i] == valor) {
            return i; 
        }
    }
    return -1;
}

int main() {
 // Creamos el arreglo solicitado en el enunciado
    int array[] = {2, 4, 6, 23, 56, 79};
 // Calcula el tamaño del array
    int tamano_array = sizeof(array) / sizeof(array[0]); 
    int numero;

 // Pedimos y almacenamos el número entero al usuario
    printf("Ingrese un número, por favor:\n ");
    scanf("%d", &numero);

 // Usamos la función de búsqueda binaria
    printf("Por el método de busqueda binaria:\n ");
    int posicion_binaria = busqueda_binaria(array, tamano_array, numero);
    if (posicion_binaria != -1) {
        printf("El número %d está en la posición %d del array.\n", numero, posicion_binaria);
    } else {
        printf("El número %d no se encuentra en el array.\n", numero);
    }

    printf("Por el método de busqueda lineal:\n ");
 // Usamos la función de búsqueda lineal
    int posicion_lineal = busqueda_lineal(array, tamano_array, numero);
    if (posicion_lineal != -1) {
        printf("El número %d está en la posición %d del array.\n", numero, posicion_lineal);
    } else {
        printf("El número %d no se encuentra en el array.\n", numero);
    }

    return 0;
}


