#include <stdio.h>
#include <stdlib.h>
/*Ejercicio 21*/
int main(int argc, char *argv[])
 {
	int i,num,total;
	total=0;

	printf("Tabla de multiplicar: ");
	scanf("\t%d",&num);
	fflush (stdin);
	
	for (i=0;i<=10;i++)
	{
		printf("\t %d x %d = %d \n",num,i,num*i);	
	}
	system ("PAUSE");
	return 0;
}
