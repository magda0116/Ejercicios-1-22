#include <stdio.h>
#include <stdlib.h>
/* Ejercicio 2 */
int main(int argc, char *argv[])
 {
	printf ("\t Calcular y mostrar el cuadrado de un numero.\n"); 
	printf ("\t El numero debe ser mayor que cero,\n");
	printf ("\t en caso de error que aparezca el mensaje\n");
	printf ("\t Error, el numero debe ser mayor que cero. \n\n");
	int num,cua;
	cua=0;
	
	printf ("Ingrese un numero: \n");
	scanf ("%d", &num);
	fflush(stdin);	
	cua= num*num;
		
		 if (num>0)
				printf ("El cuadrado de un numero es: %d  \n", cua);
			
				else
			 			printf ("Error, el numero debe ser mayor que cero.\n");		
	system ("PAUSE");
	return 0;
}
