/* Cristian Ariel Lopez Santiago
   Hacer un diagrama de flujo que calcule e imprima el producto de los N
   primeros numeros naturales.
   Ejercicio 12: Estructuras de repeticion*/

#include <stdio.h>
int main()
{
    int i = 1, N;
    int producto = 1; 

    printf("Bienvenido al programa que calcula el producto de los N primeros numeros naturales\n");

    // Validacion
    do {
        printf("Ingrese el valor de N (entre 1 y 10): ");
        scanf("%d", &N);

        if (N <= 0 || N > 10) {
            printf("Error: El valor debe ser un numero natural positivo menor o igual a 10.\n\n");
        }
    } while (N <= 0 || N > 10);

    // Calculo del producto (factorial de N)
    while (i <= N) {
        producto *= i;
        i++;
    }

    // Impresion del resultado
    printf("El producto de los %d primeros numeros naturales es: %lld\n", N, producto);

    return 0;
}
