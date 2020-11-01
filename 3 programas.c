//tare de 3 programas
//31/10/2020
//Realizado por Humberto Sanluis Cervantes


#include <stdio.h>
#include <stdlib.h>


int main()
{
    int opc;
    double calcularPi(int n);
    int ok;
    int n;


    while (opc!=4) {
 printf("\n\t3 Programas \n");
 printf("////////////////////////////// \n\n");
 printf("\tElige una opcion \n");
 printf("1.- Asteriscos\n");
 printf("2.- Calcular el valor de pi\n");
 printf("3.- Sequencia de numeros\n");
 printf("4.- Salir\n");
 scanf("%d",&opc);
           if (opc==4){
                printf("\tHasta luego");
                return 0;
			}

//--------------------------------------------------//
//--------------------------------------------------//
//--------------------------------------------------//

     switch(opc) {
 case 1:

    printf("\nA)\n");
    int na=1; //# de steriscos
    int ia=1; //incremento de asteriscos
    for(int r=1;r<=10;r++){ //for de renglones

    for(int a=1;a<=na;a++){ // for de asteriscos
        printf("*");
        }
    printf("\n");

    na=na+ia;
    }

//--------------------------------------------------//

    int nb=10; //# de steriscos
    int ib=-1; //decremento de asteriscos

    printf("\nB)\n");

    for(int r=1;r<=10;r++){ //for de renglones

    for(int a=1;a<=nb;a++){ // for de asteriscos
        printf("*");
        }
    printf("\n");

    nb=nb+ib;
    }
//--------------------------------------------------//

    int nc=10; //# de steriscos
    int ne=0; //# de espacios
    int ic=-1; //decremento de asteriscos
    int ie=+1; //incremento de espacios

    printf("\nC)\n");

    for(int r=1;r<=10;r++){ //for de renglones

     for(int e=1;e<=ne;e++){ // for de espacios
            printf(" ");
        }

    for(int a=1;a<=nc;a++){ // for de asteriscos
        printf("*");
        }
    printf("\n");

    nc=nc+ic;
    ne=ne+ie;
    }


//--------------------------------------------------//

    int nd=1; //# de steriscos
    int ng=9; //# de espacios
    int id=1; //incremento de asteriscos
    int ig=-1; //decremento de espacios

    printf("\nD)\n");

    for(int r=1;r<=10;r++){ //for de renglones

     for(int e=1;e<=ng;e++){ // for de espacios
            printf(" ");
        }

    for(int a=1;a<=nd;a++){ // for de asteriscos
        printf("*");
        }
    printf("\n");

    nd=nd+id;
    ng=ng+ig;
    }
    system("pause");
    system("cls");
    break;

//--------------------------------------------------//
//--------------------------------------------------//
//--------------------------------------------------//

 case 2:
     printf("Valor de Pi \n");

     double calcularPi(int n) {
    int i;
    double pi = 0.0;
    double denominador;

    for(i = 0; i < n; ++i) {
        if((i % 2) == 0)
            denominador = (double) (2*i+1);
        else
            denominador = (double) -(2*i+1);

        pi += 4/denominador;
    }

    return pi;
}

                while(1) {

                    printf("Ingrese un numero entero positivo: ");
                    ok = scanf("%d",&n);
                    if(ok == 1) {
                        if(n > 0)
                            break;
                        else
                            printf("Error.\n");
                    } else
                        printf("Error. \n");
                }
                printf("pi: %f\n\n",calcularPi(n));
                system("pause");
                system("cls");
                break;

//--------------------------------------------------//
//--------------------------------------------------//
//--------------------------------------------------//
 case 3:


    printf("\nnumber sequence\n");

    int N,a,b,c,d;
    a=1;
    b=2;
    c=30;
    d=15;
    printf("Ingrese el valor de N: ");
    scanf("%d", &N);
    printf("a) ");
    for(int r=1;r<=N;r++){ //for de renglones

        printf("%d ", a);

    a=a+2;
    }
//----------------------------------------------
    printf("\nb) ");
    for(int r=1;r<=N;r++){ //for de renglones

        printf("%d ", b);

    b=b+3;
    }
//------------------------------------------------

    printf("\nc) ");
    for(int r=1;r<=N;r++){ //for de renglones

        printf("%d ", c);

    c=c-10;
    }
//--------------------------------------------------

    printf("\nd) ");
    for(int r=1;r<=N;r++){ //for de renglones

        printf("%d ", d);

    d=d+8;
    }
    printf("\n");
    system("pause");
    system("cls");
    break;
//--------------------------------------------------//
//--------------------------------------------------//
//--------------------------------------------------//

    default:
		   {
  printf("Escribe un numero que este dentro de las opciones\n");
		    system("pause");
			system("cls"); }
}}}



