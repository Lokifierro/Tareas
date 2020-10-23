//Practica 1 "Circuito Digital"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 int main (){
 int opc,x,z,y,a;
 while (opc!=4) {
 printf("\tCircuito Digital \n");
printf("================================= \n\n\n");
printf("\tElige una opcion \n");
 printf("1.- Dos compuertas al inicio\n");
 printf("2.- Cuatro compuertas al inicio\n");
 printf("3.- Ocho compuertas al inicio\n");
 printf("4.- Salir\n");
 scanf("%d",&opc);
           if (opc==4){
                printf("\tAdios");
                return 0;
			}

 switch(opc) {
 case 1:

printf("\t\t Dos compuertas al inicio\n\n");
 printf("Escriba que tipo de compuertas componen el nivel 1\n");
     printf("1.- OR \n");
	 printf("2.- AND \n");
  scanf("%d",&x);
  switch(x) {
  case 1: printf("Escriba que tipo de compuertas componen el nivel 2\n");
     printf("1.- OR \n");
	 printf("2.- AND \n");
   scanf("%d",&y);
   if (y==1){
   printf("Z=(A+B)+(C+D)\n"); }
   else if (y==2) {
   printf("Z=(A+B)(C+D)\n"); }
   else{printf("Error\n");}
   break;
   case 2:
    printf("Escriba que tipo de compuertas componen el nivel 2\n");
        printf("1.- OR \n");
     	 printf("2.- AND \n");
	   scanf("%d",&y);
	   if (y==1){
	   printf("Z=(AB+CD)\n"); }
	   else if (y==2) { printf("z=(AB)(CD)\n"); }
	   else{printf("Error\n");}
	   break;
	    default:
		{
		 printf("Opcion incorecta\n"); } }
		  system("pause");
		   system("cls");
		   break;

case 2:
 printf("\t\t Cuatro compuertas al inicio\n\n");
printf("Escriba que tipo de compuertas componen el nivel 1\n");
     printf("1.- OR \n");
	 printf("2.- AND \n");
 scanf("%d",&x);
 printf("Escriba que tipo de compuertas componen el nivel 2\n");
     printf("1.- OR \n");
	 printf("2.- AND \n");
   scanf("%d",&y);
   printf("Escriba que tipo de compuertas componen el nivel 3\n");
     printf("1.- OR \n");
	 printf("2.- AND \n");
	scanf("%d",&z);
	switch(x) {
	case 1:
	if (y==1 && z==1){
	printf("Z=((A+B)+(C+D))+((E+F)+(G+H))\n"); }
	else if (y==1 && z==2){
	printf("Z=((A+B)+(C+D))((E+F)+(G+H))\n"); }
	 else if (y==2 && z==1){
	 printf("Z=((A+B)(C+D))+((E+F)(G+H))\n"); }
	 else if (y==2 && z==2){ printf("Z=((A+B)(C+D))((E+F)(G+H))\n"); }
	 else{printf("Error\n");}
	  break;
	  case 2:
	   if (y==1 && z==1){
	   printf("Z=(AB+CD)+(EF+GH)\n"); }
	    else if (y==1 && z==2){
		printf("Z=(AB+CD)(EF+GH)\n"); }
		 else if (y==2 && z==1){
		 printf("Z=(AB)(CD)+(EF)(GH)\n"); }
		 else if (y==2 && z==2){ printf("Z=((AB)(CD))((EF)(GH))\n"); }
		 else{printf("Error\n");}
		  break;
		  default:
		{
		 printf("Opcion incorecta\n"); }  }
		  system("pause");
		  system("cls");
		  break;

case 3:
 printf("\t\t Ocho compuertas al inicio\n\n");
 printf("Escriba que tipo de compuertas componen el nivel 1\n");
     printf("1.- OR \n");
	 printf("2.- AND \n");
 scanf("%d",&x);
 printf("Escriba que tipo de compuertas componen el nivel 2\n");
         printf("1.- OR \n");
          printf("2.- AND \n");
scanf("%d",&y);
 printf("Escriba que tipo de compuertas componen el nivel 3\n");
          printf("1.- OR \n");
	      printf("2.- AND \n");
	scanf("%d",&z);
printf("Escriba que tipo de compuertas componen el nivel 4\n");
	 printf("1.- OR \n");
	 printf("2.- AND \n");
	  scanf("%d",&a);
	   switch(x) {

	   case 1:
	   if (y==1 && z==1 && a==1){
	   printf("Z=[((A+B)+(C+D))+((E+F)+(G+H))]+[((I+J)+(K+L))+((M+N)+(O+P))]\n"); }
	   else if (y==1 && z==1 && a==2 ){
	   printf("Z=[((A+B)+(C+D))+((E+F)+(G+H))][((I+J)+(K+L))+((M+N)+(O+P))]\n"); }
	   else if (y==1 && z==2 && a==1){
	   printf("Z=[((A+B)+(C+D))((E+F)(G+H))]+[((I+J)+(K+L))+((M+N)+(O+P))]\n"); }
	   else if (y==1 && z==2 && a==2){
	   printf("Z=[((A+B)+(C+D))((E+F)+(G+H))][((I+J)+(K+L))((M+N)+(O+P))]\n"); }
	   else if (y==2 && z==1 && a==1){
	   printf("Z=[((A+B)(C+D))+((E+F)(G+H))]+[((I+J)(K+L))+((M+N)(O+P))]\n"); }
	   else if (y==2 && z==1 && a==2 ){
	   printf("Z=[((A+B)(C+D))+((E+F)(G+H))][((I+J)(K+L))+((M+N)(O+P))]\n"); }
	   else if (y==2 && z==2 && a==1){
	   printf("Z=[((A+B)(C+D))((E+F)(G+H))]+[((I+J)(K+L))((M+N)(O+P))]\n"); }
	   else if (y==2 && z==2 && a==2){ printf("Z=[((A+B)(C+D))((E+F)(G+H)][((I+J)(K+L))((M+N)(O+P))]\n)"); }
	   else{printf("Error\n");}
	   break;
	   case 2:
	   if (y==1 && z==1 && a==1){
	    printf("Z=((AB+CD)+(EF+GH))+((IJ+KL)+(MN+OP))\n"); }
		else if (y==1 && z==1 && a==2 ){
		printf("Z=((AB+CD)+(EF+GH))((IJ+KL)+(MN+OP))\n"); }
		else if (y==1 && z==2 && a==1){
		printf("Z=((AB+CD)(EF+GH))+((IJ+KL)(MN+OP))\n"); }
		else if (y==1 && z==2 && a==2){
		 printf("Z=((AB+CD)(EF+GH))((IJ+KL)(MN+OP))\n"); }
		 else if (y==2 && z==1 && a==1){
		 printf("Z=((ABCD)+(EFGH))+((IJKL)+(MNOP))\n"); }
		 else if (y==2 && z==1 && a==2 ){
		  printf("Z=((ABCD)+(EFGH))((IJKL)+(MNOP))\n"); }
		  else if (y==2 && z==2 && a==1){
		  printf("Z=((ABCD)(EFGH))+((IJKL)(MNOP))\n"); }
		  else if (y==2 && z==2 && a==2){ printf("Z=((ABCD)(EFGH))((IJKL)(MNOP))\n"); }
		  else{printf("Error\n");}
		  break;
		  default:
		{
		 printf("Opcion incorecta\n"); }  }
		  system("pause");
		  system("cls");
		   break;
		   default:
		   {
  printf("Escribe otro numero que este dentro de las opciones\n");
		    system("pause");
			system("cls"); }

			} } }
