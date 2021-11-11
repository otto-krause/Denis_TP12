#include<stdio.h>
#include<stdlib.h>

int i(int num1)
{
	printf ("Ingrese la primera resistencia : ");
	
	scanf("%d",&num1);
	
	return(num1);
	
}
int o(int num2)
{
	printf("Ingrese la segunda resistencia : ");
	
	scanf("%d",&num2);
	
	return (num2);
	
}
int a(int num3)
{
	printf("Ingrese la tercera resistencia : ");
	
	scanf("%d",&num3);
	
	return (num3);
	
}
int b(int num4)
{
	printf("Ingrese la cuarta resistencia : ");
	
	scanf("%d",&num4);
	
	return (num4);
	
}
int c(int num5)
{
	printf("Ingrese la quinta resistencia : ");
	
	scanf("%d",&num5);
	
	return (num5);
	
}
int main()
{
	int num1,num2,num3,num4,num5,num6,num7,num8,num9,num10,cal=0;
	
	num6=i(num1);
	
	num7=o(num2);
	
	num8=a(num3);
	
	num9=b(num4);
	
	num10=c(num5);
	cal=num6+num7+num8+num9+num10;
	
	printf("La primera resistencia es de : %d\n La segunda resistencia es de : %d\n La tercera resistencia es de : %d\n La cuarta resistencia es de : %d\n La quinta resistencia es de : %d\n La suma total es de :%d ",num6,num7,num8,num9,num10,cal);
	return 0;
}
