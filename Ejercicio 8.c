#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/* Ejercicio 8 */
int main(int argc, char *argv[]) 
{
	printf ("\tEscribir en codificar en C un programa que lea  20 caracteres.\n");
	printf ("\tLuego de la lectura indicar cuantas a, e, i, o, u\n\n");
	
	int cont;
	char vocal, a, e, i, o, u;
	a=0, e=0, i=0, o=0, u=0;
	cont=0;

		while (cont <20)
		{	
			printf ("Ingrese una vocal:\n");
			scanf ("%c", &vocal);
			fflush(stdin);
			vocal= tolower(vocal);	
				switch (vocal)	
					{
						case 'a': 
									a++;
									break;	
						case 'e': 
									e++;
									break;
						case 'i': 
									i++;
									break;
						case 'o': 
									o++;
									break;							
						case 'u': 
									u++;
									break;
						default :
									printf ("Error. ingrese una vocal: \n");													
					}			
			cont++;
		}		
	printf ("La cantidad de a son: %d \n", a);	
	printf ("La cantidad de e son: %d \n", e);	
	printf ("La cantidad de i son: %d \n", i);	
	printf ("La cantidad de o son: %d \n", o);	
	printf ("La cantidad de u son: %d \n", u);	
	system ("PAUSE");
	return 0;
}
