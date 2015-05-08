#include <stdio.h>
#include <stdlib.h>
/*Ejercicio 14*/
int main(int argc, char *argv[])
 {
	printf ("\tDisenar un algoritmo que imprima y sume la serie de numeros 3,6,9,12.,99.\n\n");
	
	int i,sum;
	sum=0;
		for (i=1;i<100;i++)
		{
			i= i+2;	
			printf ("%d \n",i);
		}
	system ("PAUSE");
	return 0;
}
