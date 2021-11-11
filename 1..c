#include<stdio.h>
#include<stdlib.h>
int i(int num1)
{
	printf("Ingrese un numero ");
	scanf("%d",&num1);
	return num1;
}
int main()
{
	int num1,num2,num3;
	num2=i(num1);
	num3=i(num1);
	printf("El primer numero es %d y el segundo es %d ",num2,num3);
	return 0;
}
