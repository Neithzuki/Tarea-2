/* Cristian Ariel Lopez Santiago
   Construir un diagrama de flujo para almacenar en un arreglo unidimensional los 100 primeros numeros pares. Imprimir al final el arreglo.
   Ejercicio 16: Problemas con arreglos*/

#include <stdio.h>
int main()
{
    int i;
    int arr[100]; 

    //Generar y almacenar los 100 primeros numeros pares en el arreglo
    for(i = 0; i < 100; i++)
    {
        arr[i] = 2 * (i + 1); 
    }

    printf("Los primeros 100 numeros pares son:\n\n");
    for(i = 0; i < 100; i++)
    {
        printf("(%d)", arr[i]);
        
        // Salto de linea cada 10 numeros
        if((i + 1) % 10 == 0)
        {
            printf("\n");
        }
    }

    return 0;
}
