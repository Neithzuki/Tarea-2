/*Cristian Ariel lópez Santiago 
Una casa de cambio necesita un programa que dado una cantidad expresada en dolares, convierta dicha cantidad a pesos mexicanos
ejercicio 3
*/

#include<stdio.h>

int main()
{
    float dolares, pesos;
    const float dolar = 11.96;

    printf("Convierta sus dolares a pesos mexicanos\n");

    //lectura de datos
    printf("Ingrese la cantidad de dolares que desea convertir: ");
    scanf("%f", &dolares);

    if (dolares < 0)
    {
        printf("La cantidad de dolares no puede ser negativa.\n");
    }
    else
    {
        //calculo de pesos
        pesos = dolares * dolar;

        //impresion de resultados
        printf("La cantidad de pesos mexicanos es: %f\n", pesos);
    }
}
