#include <stdio.h>
#include <stdlib.h>
/*Ejercicio 18*/
int main(int argc, char *argv[])
 {
	char seguir;
	float peso, men, mayor;
	men=0;
	mayor=0;
	seguir='s';
	
		while (seguir!='n')
		{
			
			printf ("PESO\n\n");
			scanf ("%f",&peso);
			fflush(stdin);
				
				if (peso <= 80)
				{
						men= men + 1;
				}  			 
					else
					{
						mayor= mayor + 1;
					}
						
				printf("Desea continuar s/n \n");
				scanf("\n %s",&seguir);
				
					while(seguir!= 's' && seguir!='n')
					{
						printf ("Error,reingrese ");
						printf("Desea continuar s/n \n");
						scanf("\n %s",&seguir);
					}
		}
		
	printf ("Los empleados que pesan mas de 80 son: %.2f \n", mayor);
	printf ("Los empleados que pesan menos 80 inclusive son: %.2f \n", men);
	system ("PAUSE");
	return 0;
} 
