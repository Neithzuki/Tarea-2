/* Cristian Ariel Lopez Santiago
   Construya un programa tal que dado como entrada un arreglo unidimensional de enteros 
   y un numero entero, determine cuantas veces se encuentra el numero dentro del arreglo.
   Ejercicio 14: Problemas con arreglos
*/

#include <stdio.h>

int main()
{
    int i = 0, v, num, cont = 0;

    printf("Ingrese el tamaño del arreglo: ");
    scanf("%d", &v);
    
    int arr[v]; 


    for(i = 0; i < v; i++)
    {
        
        printf("Ingrese el elemento %d del arreglo: ", i + 1); 
        scanf("%d", &arr[i]);
    }


    printf("¿Que numero deseas buscar?: ");
    scanf("%d", &num);
    
    // Conteo de ocurrencias
    for(i = 0; i < v; i++)
    {
      
        if (arr[i] == num) 
        {
            cont++;
        }
    }

    // Impresion de resultados
    printf("El numero %d se encuentra %d vez/veces en el arreglo.\n", num, cont);

    return 0;
}
