/*Cristian Ariel Lopez Santiago
En un negocio de productos electrodom ́esticos aplican un descuento del
8% a todos aquellos clientes cuya compra es superior a 2,500. Dado como
dato el monto de la compra del cliente, calcule lo que el cliente debe pagar.
ejercio5.c Estructuras de condición
*/

#include<stdio.h>

int main()
{
    float monto, pagar, decuento;
    const float descuento = 0.08;

    printf("Introduzca el monto de su compra: ");
    scanf("%f", &monto);

    if(monto > 2500)
    {
        pagar = monto - (monto * descuento);
        printf("El monto a pagar con su descuento será de: %f\n", pagar);
        
    }
    else
    {    
        if(monto < 0)
        {
            printf("Error: El monto de la compra no puede ser negativo.\n");
        }
        else
        {
            printf("El monto a pagar sin descuento será de: %f\n", monto);
        }
    }
    return 0;
}
