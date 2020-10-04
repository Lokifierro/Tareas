//Programa para calcular resistencias de LED's
//27/09/2020
//Realizado por Humberto Sanluis Cervantes

#include <stdio.h>
int main()
{
     float Vs; //voltaje de la fuente
     int R1,R2,R3;
     float VF1,VF2,VF3; //voltaje de los LED's
     float IF1,IF2,IF3;// amperaje de los LED's

     //LED rojo brillante
     VF1=2;
     IF1=0.02;
     //LED azul brillante
     VF2=3;
     IF2=0.02;
     //LED blanco
     VF3=2.8;
     IF3=0.02;

     printf("Ingrese el valor de la fuente de voltaje:\n");
     scanf("%f", &Vs);

     R1=(Vs-VF1)/IF1;
     R2=(Vs-VF2)/IF2;
     R3=(Vs-VF3)/IF3;

     printf("La resistencia para el LED rojo brillante es \n%d Ohms", R1);
     printf("\nLa resistencia para el LED azul brillante es \n%d Ohms", R2);
     printf("\nLa resistencia para el LED blanco es \n%d Ohms", R3);


    return 0;
}
