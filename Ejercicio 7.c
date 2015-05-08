#include <stdio.h>
#include <stdlib.h>
/* Ejercicio 7 */
int main(int argc, char *argv[])
 {
	int pies;
	float cmts, pulgadas;
	
		printf ("Ingrese centimetros:\n");
		scanf ("%f",&cmts);
		fflush(stdin);
		pies=cmts/12;
		pulgadas=(float)cmts/2.54;
		
		printf ("Los centimetros son:%.2f \n", cmts);
		printf ("Los pies son:%d \n", pies);
		printf ("Las pulgadas son:%.1f \n", pulgadas);
		
	system ("PAUSE");
	return 0;
}
