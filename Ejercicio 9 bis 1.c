#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
 {
	int num;
	char seguir;
	seguir='s';
	
	while (seguir!='n' )
	{
		printf ("Ingrese un numero para dia de semana:\n");
		scanf ("%d", &num);
		fflush(stdin);		
		
		switch (num)
		{
			
			case 1: 
					printf ("Domingo\n");
					break;
			case 2: 
					printf ("Lunes\n");
					break;
			case 3: 
					printf ("Martes\n");
					break;
			case 4: 
					printf ("Miercoles\n");
					break;
			case 5: 
					printf ("Jueves\n");
					break;
			case 6: 
					printf ("Viernes\n");
					break;
			case 7: 
					printf ("Sabado\n");
					break;
		}
			printf("Desea continuar: s/n \n");
			scanf("%s", &seguir);
			
			while (seguir!='s'&& seguir!='n')	
			{
				printf (" Error. Desea seguir?? s/n \n");
				scanf ("%s", &seguir);
			}
	}
	system ("PAUSE");	
	return 0;
}
