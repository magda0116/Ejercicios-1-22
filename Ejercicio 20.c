#include <stdio.h>
#include <stdlib.h>
/*Ejercicio 20*/
int main(int argc, char *argv[])
 {
	float val_hora, antig, cant_hs_trab, totalbrut, imp_a_cob, descuento;
	char nombre[20];
	totalbrut=0;
	imp_a_cob=0;
	descuento=0;
	
	printf ("Ingrese nombre del empleado: \n");
	scanf  ("%s", &nombre);
	fflush (stdin);
	printf ("Ingrese antiguedad del empleado: \n");
	scanf  ("%f", &antig);
	fflush (stdin);
	printf ("Ingrese el valor de la hora de un empleado: \n");
	scanf  ("%f", &val_hora);
	fflush (stdin);
	printf ("Ingrese cantidad de horas trabajadas en el mes: \n");
	scanf  ("%f", &cant_hs_trab);
	fflush (stdin);
	
	totalbrut= (val_hora * cant_hs_trab) +(antig *30);
	imp_a_cob= totalbrut*0.87;
	descuento= totalbrut - imp_a_cob;
	
	printf("NOMBRE\tANTIGUEDAD\tVALORHORA\tTOTBRUTO\tDESCUENTO\tTOTNETO\n\n");
	
	printf("%s\t%.2f\t\t%.2f\t\t%.2f\t\t%.2f\t\t%.2f\n\n", nombre,antig,val_hora,totalbrut,descuento,imp_a_cob);
	
	system ("PAUSE");
	return 0;
}
