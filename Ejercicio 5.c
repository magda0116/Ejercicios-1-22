#include <stdio.h>
#include <stdlib.h>
/* Ejercicio 5  */
int main(int argc, char *argv[]) 
{
	printf ("\t Hacer el algoritmo que nos permita introducir un numero\n"); 
	printf ("\t por teclado y nos informe si es positivo o negativo\n\n");
	
	int num;
	
	printf ("Ingrese un numero: \n");
	scanf ("%d",&num);
	fflush(stdin);
	if (num>0)
		printf ("El numero es positivo\n");
		else
			printf ("El numero es negativo\n");

	system ("PAUSE");
	return 0;		
}
