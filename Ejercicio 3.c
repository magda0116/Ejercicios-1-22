#include <stdio.h>
#include <stdlib.h>
/* Ejercicio 3 */
int main(int argc, char *argv[]) 
{
	printf ("\t De 10 numeros ingresados indicar cuantos son mayores a cero\n");
	printf ("\t y cuantos son menores a cero \n\n");
	int num, may,men,i,cont,sum;
	may=0;
	men=0;
	cont=0;
			for (i=0;i<10;i++)
			{
				printf ("Ingresar un numero: \n");
				scanf ("%d", &num);
				fflush (stdin);
						if (num>0)
							may=may+1;
						else
							men=men+1;
			}
	printf ("Los numeros mayores a cero son: %d \n", may);		
	printf ("Los numeros menores a cero son: %d \n", men);		
	system ("PAUSE");
	return 0;
}
