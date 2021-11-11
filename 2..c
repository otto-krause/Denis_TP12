#include<stdio.h>
#include<stdlib.h>
int i(int num1,int num2)
{
	printf("Ingrese dos numeros para calcular el perimetro ");
	scanf("%d%d",&num1,&num2);
	
	return (num1*2+num2*2);
}
int o(int num3,int num4)
{
	printf("Ingrese dos numeros para calcular la superficie o area ");
	
	scanf("%d%d",&num3,&num4);
	
	return(num3*num4);
}
int main ()
{
	int num1,num2,num3,num4,num5,num6;
	
	num5=i(num1,num2);
	
	num6=o(num3,num4);
	printf("El perimetro es de %d y la area es de %d ",num5,num6);
	
	return 0;
}
