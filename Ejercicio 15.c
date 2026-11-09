/* Cristian Ariel López Santiago
   Dado como entrada un arreglo unidimensional de enteros, determinar cuántos de ellos son positivos, negativos o nulos.
   Ejercicio 15: Problemas con arreglo.*/

#include <stdio.h>

int main()
{
    int i, v;
    int positivos = 0, negativos = 0, nulos = 0;

    // Lectura del tamaño del arreglo
    printf("Ingrese el tamano del arreglo: ");
    scanf("%d", &v);

    int arr[v]; 

    
    for(i = 0; i < v; i++)
    {
        printf("Ingrese el elemento %d del arreglo: ", i + 1);
        scanf("%d", &arr[i]); 
    }

   
    for(i = 0; i < v; i++)
    {
        if(arr[i] > 0)
        {
            positivos++;
        }
        else if(arr[i] < 0)
        {
            negativos++;
        }
        else
        {
            nulos++;
        }
    }

    //Impresion de los resultados
    printf("\n--- Resultados ---\n");
    printf("Cantidad de numeros positivos: %d\n", positivos);
    printf("Cantidad de numeros negativos: %d\n", negativos);
    printf("Cantidad de numeros nulos: %d\n", nulos);

    return 0;
}
