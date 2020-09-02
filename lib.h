float Operaciones(int Numero1,int Numero2)
{
	float Resultado;
	Resultado=Numero1+Numero2;
	printf("La suma de %d + %d es igual a %f",Numero1,Numero2,Resultado);
	Resultado=Numero1-Numero2;
	printf("\nLa resta de %d - %d es igual a %f",Numero1,Numero2,Resultado);	
	Resultado=Numero1*Numero2;
	printf("\nLa multiplicacion de %d * %d es igual a %f",Numero1,Numero2,Resultado);
		if (Numero2==0)
		{	printf("\nNo se puede calcular la division por cero ");
		}
		else 
		{	Resultado=Numero1/Numero2;
	printf("\nLa divicion de %d / %d es igual a %f",Numero1,Numero2,Resultado);
		}
}
