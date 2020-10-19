//Unión de programas
//19/10/2020
//Realizado por Humberto Sanluis Cervantes

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opc=1;
    int opc2;
    while(opc!=7){
        printf("\n*********MENU*********\n");
        printf("Seleccione alguna opcion: \n");
        printf("1.Circuito\n2.LED's\n3.Calificaciones\n4.Ecuaciones\n5.N-output-1\n6.N-output-2\n7.Salir\n\n");
        scanf("%d",&opc);


        if(opc==0){
            printf("https://matias.ma/nsfw/\n");
        }


        if(opc==1){
            float Vt; //voltaje de la fuente
     int R1,R2,R3;//Resistencias
     float I1,I2,I3;// corrientes

     printf("Ingrese el valor de la fuente de voltaje:\n");
     scanf("%f",&Vt);
     printf("ingrese los valores de las 3 resistencias separadas por comas:\n");
     scanf("%d,%d,%d", &R1, &R2, &R3);

     I1=Vt/R1;
     I2=Vt/R2;
     I3=Vt/R3;

     printf("La corriente que pasa por la resistencia 1 es %.2f\n", I1);
     printf("La corriente que pasa por la resistencia 2 es %.2f\n", I2);
     printf("La corriente que pasa por la resistencia 3 es %.2f\n", I3);
     printf("El voltaje que pasa por cada resistencia es el mismo del voltaje de la fuente");

     int out;
     printf("\n\nSi desea regresar al menu ingrese '1'\nSi desea salir presione '0'\n");
     scanf("%d",&out);
     if(out==0){
        return 0;
     }
        }


        else if(opc==2){
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


        int out;
     printf("\n\nSi desea regresar al menu ingrese '1'\nSi desea salir presione '0'\n");
     scanf("%d",&out);
     if(out==0){
        return 0;
     }
        }


        else if(opc==3){
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


        int out;
     printf("\n\nSi desea regresar al menu ingrese '1'\nSi desea salir presione '0'\n");
     scanf("%d",&out);
     if(out==0){
        return 0;
     }
        }


        else if(opc==4){
            int a,b,c;
    float x1,x2,ec1,ec2;


    printf("Ingresa el valor de a:\n");
    scanf("%d",&a);
    printf("Ingresa el valor de b:\n");
    scanf("%d",&b);
    printf("Ingresa el valor de c:\n");
    scanf("%d",&c);

    ec1=b*b-4*a*c;
    ec2=2*a;

    if(ec1<0){
        printf("x1=(-%d/%0.2f)+i(sqrt(%0.2f))/(%0.2f)\n",b,ec2,ec1,ec2);
        printf("x2=(-%d/%0.2f)-i(sqrt(%0.2f))/(%0.2f)\n",b,ec2,ec1,ec2);
    }
    else{
    x1=(-b+(sqrt(ec1)))/(ec2);
    x2=(-b-(sqrt(ec1)))/(ec2);

    printf("x1=%.2f\n",x1);
    printf("x2=%.2f",x2);
    }


     int out;
     printf("\n\nSi desea regresar al menu ingrese '1'\nSi desea salir presione '0'\n");
     scanf("%d",&out);
     if(out==0){
        return 0;
     }
        }


        else if(opc==5){
            int n,a,b;

    printf("Ingrese el valor de N=");
    scanf("%d",&n);
    b=n+n;
    a=n*n;
    while(n<=b){
        printf("%d ",a);
    a=a-2;
    n=n+1;
    }
    printf("\nFinal del ciclo");


        int out;
     printf("\n\nSi desea regresar al menu ingrese '1'\nSi desea salir presione '0'\n");
     scanf("%d",&out);
     if(out==0){
        return 0;
     }
        }


        else if(opc==6){
            int n,a,b;

    printf("Ingrese el valor de N=");
    scanf("%d",&n);
    b=n+n+n+1;
    a=n*3;
    while(n<=b){
        printf("%d ",a);
    a=a+2;
    n=n+1;
    }
    printf("\nFinal del ciclo");



        int out;
     printf("\n\nSi desea regresar al menu ingrese '1'\nSi desea salir presione '0'\n");
     scanf("%d",&out);
     if(out==0){
        return 0;
     }
        }


        else if(opc==7){
            printf("Adios");
        }


        else{
            printf("Este valor no esta dado en el menu, adios");
            opc=7;
        }

        getch();

        system("cls");
    }

    return 0;
}
