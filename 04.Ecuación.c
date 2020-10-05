//Programa para resolver la ecuación cuadrática
//4/10/2020
//Realizado por Humberto Sanluis Cervantes

#include <stdio.h>
#include <math.h>
int main()
{
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
    return 0;
}
