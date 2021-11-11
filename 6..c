#include<stdio.h>
#include<stdlib.h>
float i(float num1)
{
	printf("Ingrese un numero entero ");
	
	scanf("%f",&num1);
	
	return(num1/8);
}
int main ()
{
	float num1,num2;
	
	num2=i(num1);
	
	printf("La octaba parte es: %0.2f ",num2);
	return 0;
}
