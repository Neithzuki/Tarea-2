/*Cristian Ariel Lopez Santiago 
Dado datos dos numeros calcular la suma, resta y multiplicacion de dichos numeros
Problemas simples ejercicio uno*/

#include<stdio.h>

int main ()
{
    int num1, num2, opcion;
    //menu de operaciones
    printf("\nOperaciones disponibles a realizar: \n");
    printf("1. Suma\n");
    printf("2. Resta\n");
    printf("3. Multiplicacion\n");
    printf("Ingrese la opcion: ");
    scanf("%d", &opcion);

    //lectura de datos
    printf("Ingrese el primer numero: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &num2);
    
    //Calculo de opoeraciones 
    if (opcion ==1)
    {
        printf("La suma de %d y %d es: %d\n", num1, num2, num1 + num2);
    }
    else if (opcion ==2)
    {
        printf("La resta de %d y %d es: %d\n", num1, num2, num1 - num2);
    }
    else if (opcion ==3)
    {
        printf("La multiplicacion de %d y %d es: %d\n", num1, num2, num1 * num2);
    }
    else
    {
        printf("Opcion invalida.\n");
    }
return 0;

}
