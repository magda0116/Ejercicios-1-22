#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char *argv[])
 {
	char seguir, nombre[15];
	float sueldo;
	int legajo;
	float fem, masc, sexo;
	seguir='s';
	fem=0;
	masc=0;
	
	while (seguir!='n')
	{
		
		printf("Ingrese numero de legajo:\n");
		scanf("%d", &legajo);
		fflush(stdin);
		printf("Ingrese nombre:\n");
		scanf("%s", &nombre);
		fflush(stdin);
		printf("Ingrese sexo: 1-femenino 2-masculino\n");
		scanf("%f", &sexo);
		fflush(stdin);
		printf("Ingrese sueldo:\n");
		scanf("%f", &sueldo);					
		fflush(stdin);
		
			if (sexo==1 && sueldo>500)
				{
				fem = fem+1;			
				}
				
			if	(sexo==2 && sueldo<400)
				
				{
					masc = masc+1;
				}
							
				printf("Desea continuar s/n \n");
				scanf("%s", &seguir);
				
				while (seguir!='s'&& seguir!='n')
				{
					printf("Error. continua??? s/n \n");
					scanf("%s", &seguir);	
				}
	}
	printf("Las mujeres que ganan mas de 500 son: %.2f \n ",fem);
	printf("Los hombres que ganan menos de 400 son: %.2f \n ",masc);

	system("PAUSE");
	return 0;
}
