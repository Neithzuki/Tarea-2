/*Cristian Ariel lópez Santiago 
Determinar, dados dos n ́umeros
enteros, si un n ́umero es divisor del otro.
ejercicio 8 estructuras de condicion
*/

#include<stdio.h>
int main()
{
    int num1, num2;

    printf("Ingrese el primer numero: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &num2);

    //aplicamos modulo (mod = %)
    if (num1 % num2 ==0)
    {
        printf("%d es divisor de %d\n", num2, num1);
    }
    else
    {
        printf("%d no es divisor de %d\n", num2, num1);
    }
    return 0;
}
