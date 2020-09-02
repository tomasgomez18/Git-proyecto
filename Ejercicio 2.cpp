#include <stdio.h>
#include <stdlib.h>
#include "lib.h"



main()
{
	int Num1, Num2;
	
	printf("Ingrese dos numeros los cuales seran calculados con operaciones entre si \nIngrese el primer numero: ");
	scanf("%d",&Num1);
	printf("\nIngrese el segundo numero: ");
	scanf("%d",&Num2);	
	Operaciones(Num1,Num2);

	
}


