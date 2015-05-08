#include <stdio.h>
#include <stdlib.h>
/* Ejercicio 11 */
int main(int argc, char *argv[])
 {
	printf("\tHacer el algoritmo que imprima los numeros pares entre el 1 y el  100.\n\n");

	int i,par;
	par=0;
	
	for (i=1;i<=100;i++)
	{	
		printf("%d \n", ++i);	
		par=par+1;
	}
	printf ("Los numeros pares son: %d \n",par);
	system ("PAUSE");
	return 0;
}
