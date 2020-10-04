//Programa para calcular promedio de calificaciones
//4/10/2020
//Realizado por Humberto Sanluis Cervantes

#include <stdio.h>

int main()
{
   float CT;
   float C1,C2,C3;

    printf("Escribr la califaicacion 1\n");
    scanf("%f",&C1);
    printf("Escribr la califaicacion 2\n");
    scanf("%f",&C2);
    printf("Escribr la califaicacion 3\n");
    scanf("%f",&C3);

    CT=(C1+C2+C3)/3;

    printf("El promedio es:%.1f\n",CT);

    if(CT==10){
        printf("Autonomo \n   A");
    }
    else if(CT>=9 ){
        printf("Destacado\n   B");
    }
    else if(CT>=8){
        printf("Satisfactorio\n    C");
    }
    else if(CT<8){
        printf("Reprobado\n    D");
    }
    else{
        printf("Error\n");
    }
    return 0;
}
