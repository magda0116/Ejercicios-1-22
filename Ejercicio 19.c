#include <stdio.h>
#include <stdlib.h>
/*Ejercicio 19 */
int main(int argc, char *argv[])
 {

	int vendedor,vacio;
	float vendedor1, vendedor2, vendedor3, precio, porc, sue1, sue2, sue3;
	vendedor1=0;
	vendedor2=0;
	vendedor3=0;
	porc=0;
	sue1=0;
	sue2=0;
	sue3=0;
	vacio=0;
	char seguir;
	seguir='s';
	
	while (seguir!='n')
	{
		printf("Ingrese vendedor: \n");
		scanf ("%d", &vendedor);
		fflush(stdin);
			switch (vendedor)
			{

				case 0:
						vacio= vacio+1;
						break;
				case 1:
						printf("Ingrese precio:\n");
						scanf("%f", &precio);
						porc=precio*0.05 ;
						sue1= sue1+porc;	
						break;
				case 2:
						printf("Ingrese precio:\n");
						scanf("%f", &precio);
						porc=precio*0.05;
						sue2= sue2+porc;	
						break;
				case 3:
						printf("Ingrese precio:\n");
						scanf("%f", &precio);
						porc=precio*0.05 ;
						sue3= sue3+porc;		
						break;				
				default: 
						printf("Error. continua??\n");		
			}
		printf ("Desea continuar s/n \n");
    	scanf ("\n\n%s",&seguir);   
		while(seguir!= 's' && seguir!='n')
		{
		printf ("Error,reingrese ");
		printf("Desea continuar s/n \n");
		scanf("\n %s",&seguir);
		}
	}
	printf("La comision del dia del primer vendedor es: %.2f \n",sue1);
	printf("La comision del dia del segundo vendedor es: %.2f \n",sue2);
	printf("La comision del dia del tercero vendedor es: %.2f \n",sue3);
	printf("Las boletas vacias del dia son vacio: %d \n",vacio);

	system ("PAUSE");
	return 0;
}
