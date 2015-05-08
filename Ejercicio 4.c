#include <stdio.h>
#include <stdlib.h>
/* Ejercicio 4*/
int main(int argc, char *argv[])
 {
 	printf ("\tDisenar un algoritmo que calcule la superficie de un triángulo\n");
	printf ("\ta partir del ingreso de su base y altura y muestre el resultado.\n\n");
	int base, alt,sup;
	base=0;
	alt=0;
	sup=0;
		
		printf ("Ingrese base de un triangulo:\n");
		scanf ("%d",&base);
		fflush(stdin);
		printf ("Ingrese base de un triangulo:\n");
		scanf ("%d",&alt);
		fflush(stdin);
		sup=(base*alt)/2;

	printf ("La superficie de un triangulo es: %d \n",sup);
	system ("PAUSE");
	return 0; 
 }  
