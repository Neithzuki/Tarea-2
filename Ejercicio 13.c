/*Cristian Ariel lopez santiago
Escribir un diagrama de ujo tal que dado como entrada un arreglo uni-
dimensional de enteros, obtenga como resultado la suma de los mismos.
ejercicio 14 problemas con arreglos
*/

#include<stdio.h>
int main()
{
    int i=0, suma=0, V;
    int arr[V];
    printf("Ingrese el tamaño del arreglo: ");
    scanf("%d", &V);

    for(i=0; i<V; i++)
    {
        printf("Ingrese el elemento %d del arreglo: ", i+1);
        scanf("%d", &arr[i]);
        suma+=arr[i];
    }

    while(V<0)
    {
        printf("Error, esto es ilegal; el tamaño del arreglo debe ser mayor o igual a cero.\n");
        printf("Ingrese el tamaño del arreglo: ");
        scanf("%d", &V);
          for(i=0; i<V; i++)
    {
        printf("Ingrese el elemento %d del arreglo: ", i+1);
        scanf("%d", &arr[i]);
        suma+=arr[i];
    }
    }
    

    printf("La suma de los elementos del arreglo es: %d\n", suma);
 return 0;

}
