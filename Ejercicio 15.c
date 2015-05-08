#include <stdio.h>
#include <stdlib.h>
/*Ejercicio 15*/

int main(int argc, char *argv[])
 {
	printf ("\tCodificar en C un programa que muestre los múltiplos de 2 y de 3\n");
	printf ("\ty de ambos comprendidos entre 0 y 100.\n\n");

	int i;
	
	for (i=0;i<100;i++)
	{
		if(i%3==0 || i%2==0)
		printf ("%d \n",i);
	}

	system ("PAUSE");
	return 0;
}
