#include <stdio.h>
#include <stdlib.h>

int fibonacci(int x);

main ()
{
	int n, fibona;
	printf("Ingrese un numero positivo para calcular la serie Fibonacci: ");
	scanf("%d",&n);
	system("cls");
	
	fibona= fibonacci(n);
	if(fibona != -1)
	{
	printf("El numero de la serie de Fibonacci es: %d",fibona);
	}
	else printf("El numero ingresado no es valido");
}

int fibonacci(int x)
{
	if(x>1)
	{
		return fibonacci(x-1) + fibonacci(x-2);
	}
	else
	{
		if(x==0) return 0;
		if(x==1) return 1;
		if(x<0) return -1;
	}
}
