#include<stdio.h>
#include<stdlib.h>
int i(int num1)
{
	printf("Ingresar la cantidad de hombres postulados ");
	scanf("%d",&num1); 
	
	return (num1);
}
int o(int num2)
{
	printf("Ingrese la cantidad de mujeres postuladas ");
	
	scanf("%d",&num2);
	return (num2);
}
int main ()
{
	int num1,num2,num3,num4,cal1=0,cal2=0;
	
	num3=i(num1);
	num4=o(num2);
	cal1=(100*num3)/(num3+num4);
	
	cal2=(100*num4)/(num3+num4);
	
	printf("El porcentaje de hombres postulados es de: %d y de mujeres postuladas es de: %d ",cal1,cal2);
	return 0;
}
