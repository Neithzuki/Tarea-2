/*Cristian Ariel Lopez Santiago
Dado como dato el sueldo de un trabajador considere un aumento del
15% si un sueldo es inferior a 1,000 y de un 12% en caso contrario.
Imprimir el sueldo con el aumento incorporado.
ejercicio 6 estructuras de condicion
*/

#include<stdio.h>

int  main()
{
    float sueldo, aumento, sueldo_final;
    const float aumento1 = 0.15;
    const float aumento2 = 0.12;

   printf("Ingrese su sueldo: ");
   scanf("%f", &sueldo);

   if(sueldo < 1000)
   {
        aumento = sueldo * aumento1;
        sueldo_final = sueldo + aumento;
        printf("Sue sueldo a incrementado en un 15 porciento, su sueldo final es: %f\n", sueldo_final);
   }
   else
   {
        aumento = sueldo * aumento2;
        sueldo_final = sueldo + aumento;
        printf("Su sueldo a incrementado en un 12 porciento, su sueldo final es: %f\n", sueldo_final);
   }
   return 0;
}
