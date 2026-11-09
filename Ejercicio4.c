/*Cristian Ariel lópez Santiago 
Una perosna invierte dinero en el banco a una cierta tasa de interes. Obtener el monto del dinero que obtendra al finalizaarel mes.
ejercicio 4*/

#include<stdio.h>

int main()
{
    float Cantidad, interes, total;
    //ingreso de datos
    printf("Ingrese la cantidad de dinero que desea invertir: ");
    scanf("%f", &Cantidad);
    //ingreso del interes
    printf("Ingrese la tasa de interes (en porcentaje): ");
    scanf("%f", &interes);
    interes = interes / 100;
    //cantidad al mes
    total = Cantidad + (Cantidad * interes);
    printf("El monto del dinero que obtendra al finalizar el mes es: %f\n", total);
}
