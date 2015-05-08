#include <stdio.h>
#include <stdlib.h>

/* Ejercicio 1 */

int main(int argc, char *argv[]) 
{
	printf ("\tIngresar 5 numeros y calcular su media \n\n");
	int i,cont,num,sum;
	float prom;
	sum=0;
	prom=0;
	cont=0;
	#define TABLA 5

		for (i=0;i<TABLA;i++)
		{
			printf ("Ingrese un numero cualquiera: \n");
			scanf ("%d", &num);
			fflush(stdin);
			sum=sum+num;
			prom= (float)sum/TABLA;
			cont++;
		}
	printf ("El promedio es: %.2f \n",prom);
	system ("PAUSE");
	return 0;
}
