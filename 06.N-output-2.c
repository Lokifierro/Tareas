//Programa para hacer impresiones de acuerdo a N
//11/10/2020
//Realizado por Humberto Sanluis Cervantes

#include <stdio.h>


int main()
{
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
    return 0;
}
