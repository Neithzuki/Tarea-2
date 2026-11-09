/*Cristian Ariel Lopez Santiago
el precio de un ticket ida y vuelta
en ferrocarril, conociendo la distancia de ida y el tiempo de estancia.
Tambi ́en se sabe que si el numero de d ́ıas de estancia es mayor a 7 y la
distancias total (ida y vuelta) a recorrer es mayor a 800 km, el ticket tiene
un descuento del 30%. El precio por km es de 0.23.
ejercicio 7 estructuras de condicion
*/
 #include<stdio.h>

 int main()
 {
   //variables
    float distancia, tiempo,precio, total, descuento;
    const float precio_por_km = 0.23;
    //lectura de tatos
    printf("Ingrese la distancia de ida en kilometros: ");
    scanf("%f", &distancia);
    printf("Ingrese el tiempo de estancia en dias: ");
    scanf("%f", &tiempo);
    //primera condicion
    if (tiempo > 7)
    {   //segunda condicion
        if ((distancia * 2) > 800)
        {
            descuento = 0.30;
            total = (distancia * 2) * precio_por_km;
            total = total - (total * descuento);
            printf("El precio del ticket ida y vuelta con descuento es: %f\n", total);
        }
        else
        {   //si no
            total = (distancia * 2) * precio_por_km;
            printf("El precio del ticket ida y vuelta sin descuento es: %f\n", total);
        }
    }
    else //necsario para que nos devuelva la cantida sin descuento
    {
        total = (distancia * 2) * precio_por_km;
        printf("El precio del ticket ida y vuelta sin descuento es: %f\n", total);
    }
 return 0;
 }
