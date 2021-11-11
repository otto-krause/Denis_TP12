#include<stdio.h>
#include<stdlib.h>

float i(float num1,float num2)
{
	printf("Ingrese la fuerza y la superficie ");
	scanf("%f%f",&num1,&num2);
	return (num1/num2);
}
int main()
{
	float num1,num2,num3,num4;
	num3=i(num1,num2);
	printf("La presion es de %0.2f ",num3);
	return 0;
}
