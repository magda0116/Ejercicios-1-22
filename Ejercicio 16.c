#include <stdio.h>
#include <stdlib.h>
/*Ejercicio 16*/
int main(int argc, char *argv[])  
{
	printf ("\tDiseñar el algoritmo necesario para que habiéndose leído el valor de 2\n");
	printf ("\tvariables Num1 y Num2 se intercambien los valores de las variables,\n");
	printf ("\tes decir que el valor que tenía NUM1 ahora lo contenga NUM2 y viceversa\n\n");

	int Num1, Num2, aux;
	
	printf ("Ingrese primer numero:\n");
	scanf ("%d", &Num1);
	fflush(stdin);
	printf ("Ingrese segundo numero: \n");
	scanf ("%d", &Num2);
	fflush(stdin);
	
	aux= Num1;
	Num1= Num2;
	Num2= aux;
	
	printf ("El nuevo numero de Num1 es: %d  \n", Num1);
	printf ("El nuevo numero de Num2 es: %d \n", Num2);	
	system ("PAUSE");
	return 0;
}
