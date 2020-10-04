//Programa para calcular corrientes y voltajes en un circuito en paralelo
//27/09/2020
//Realizado por Humberto Sanluis Cervantes

#include <stdio.h>
int main()
{
     float Vt; //voltaje de la fuente
     int R1,R2,R3;//Resistencias
     float I1,I2,I3;// corrientes

     printf("Ingrese el valor de la fuente de voltaje:\n");
     scanf("%f",&Vt);
     printf("ingrese los valores de las resistencias separadas por comas:\n");
     scanf("%d,%d,%d", &R1, &R2, &R3);

     I1=Vt/R1;
     I2=Vt/R2;
     I3=Vt/R3;

     printf("La corriente que pasa por la resistencia 1 es %.2f\n", I1);
     printf("La corriente que pasa por la resistencia 2 es %.2f\n", I2);
     printf("La corriente que pasa por la resistencia 3 es %.2f\n", I3);
     printf("El voltaje que pasa por cada resistencia es el mismo del voltaje de la fuente");




    return 0;
}
