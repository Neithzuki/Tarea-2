/*Cristia Ariel Lopez Santiago
Calcule la suma de los numeros pares
comprendidos entre el 10 y 50.
ejercicio 11 estructuras de repeticion
*/

#include<stdio.h>
int main()
{
    int i=0, suma=0;
    for(i=10; i<=50; i++)
    {
        if(i%2==0)
        {
            suma+=i;
        }
    }
    printf("La suma de los numeros pares comprendidos entre 10 y 50 es: %d\n", suma);
    return 0;
}
