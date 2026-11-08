/*Cristian Ariel López Santiago 
Dado el radio de un cırculo, calcule
e imprima el  ́area y la circunferencia.*/

#include<stdio.h>

int main()
{
    float radio, area, circunferencia;
    const float pi = 3.141592654;

    printf("Calculo del area y circunferencia de un circulo\n");

    //lectura de datos
    printf("Ingrese el radio del circulo: ");
    scanf("%f", &radio);

    //calculo del area y circunferencia
    area = pi *( radio * radio);
    circunferencia = 2 * (pi * radio);

    //impresion de resultados
    printf("El area de tu circulo es %f\n ", area);
    printf("La circunferencia de tu circulo es:%f\n ", circunferencia);

    return 0;
}
