#include <stdio.h>
#include <stdlib.h>
/*Ejercicio 13 */
int main(int argc, char *argv[])
 {
	printf ("\tHacer el algoritmo que imprima los números del 100 al 0 en orden decreciente.\n\n");
	
	int i;
	
	for (i=100;i>=0;i--)
	{
		printf ("%d \n", i);
	}
	system ("PAUSE");
	return 0;
}
