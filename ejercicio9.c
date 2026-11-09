/*Cristian Ariel Lopez Santiago
Obtener la tabla de multiplicar de un
numero entero V, comenzando desde el 1.
ejercicio 9 estructuras de repeticion
*/

#include<stdio.h>
int main()
{
    int V, i=1;
    printf("Ingrese el numero de la tambla de multiplicar que desea obtener: ");
    scanf("%d", &V);

    while(i<=10)
    {
        //salto de linea
        printf("|%d x %d| = %d\n", V, i, V*i);
        i++;
    }
    return 0;
}
