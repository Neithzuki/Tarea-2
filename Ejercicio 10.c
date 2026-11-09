/*Cristian Ariel Lopez Santiago
lea 100 numeros naturales y cuente
cuantos de ellos son positivos, negativos o nulos.
ejercicio 10 estructuras de repeticion
*/

#include<stdio.h>
int main()
{
    int i=0, num, positivos=0, negativos=0, nulos=0;
    for(i=1; i<=100; i++)
    {
        printf("Ingrese el numero %d: ", i);
        scanf("%d", &num);

        if(num > 0)
        {
            positivos++;
        }
        else if(num < 0)
        {
            negativos++;
        }
        else
        {
            nulos++;
        }
    }

    printf("Cantidad de numeros positivos: %d\n", positivos);
    printf("Cantidad de numeros negativos: %d\n", negativos);
    printf("Cantidad de numeros nulos: %d\n", nulos);
    return 0;
}
