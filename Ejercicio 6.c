#include <stdio.h>
#include <stdlib.h>

/* Ejercicio 6 */

int main(int argc, char *argv[]) 
{
	printf ("\tHacer el algoritmo que nos permita introducir\n");
	printf ("\tun numero por teclado y nos informe si es par o impar\n\n");
	
	int num,par,impar;
	par=0;
	impar=0;
	
	printf ("Ingrese un numero:\n");
	scanf ("%d",&num);
	fflush(stdin);
	
	if (num%2==0)
		printf ("El numero es par\n");
		else 
			printf ("El numero es impar\n");
	
	system("PAUSE");
	return 0;
}
