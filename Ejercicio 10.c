#include <stdio.h>
#include <stdlib.h>
/*Ejercicio 10*/
int main(int argc, char *argv[])
 {
	printf ("\tCodificar en C un programa que muestre los numeros impares\n");
 	printf ("\tentre 0 y 100 y que imprima cuantos impares hay.\n\n");
 	
 	int imp, i;
 	imp=0;
 	
 	for (i=0;i<100;i++)
 		{
			printf("%d \n",++i);
			imp=imp+ 1;
		}
	printf ("Los numeros impares: %d \n",imp);
	system ("PAUSE");
	return 0;
}
