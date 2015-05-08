#include <stdio.h>
#include <stdlib.h>
/*Ejercicio 17*/
int main(int argc, char *argv[])
 {
	printf ("\tEscribir un programa que visualice una tabla de los N primeros numeros,\n");
	printf ("\tsiendo N un numero que ingresa el usuario.Utilizar el\n");
	printf ("\tsiguiente diseno de salida suponiendo que el usuario ingreso un tres.\n\n");

	int i, num, cua, cubo;
	cua=0;
	cubo=0;
	printf ("\tNUMERO\tCUADRADO\tCUBO \n");
	for (i=1;i<=3;i++)
	{
		printf ("\t%d\t%d\t\t%d \n",i,i*i,i*i*i);
	}
	system ("PAUSE");
	return 0;
}
