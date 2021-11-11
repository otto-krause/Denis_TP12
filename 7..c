#include <stdio.h>
#include <stdlib.h>
float volumen(float log, float ancho, float profun);

float capacidad(float volum);

void tiempo(float capacidad);

int main()
{
	float volum = 0, ancho = 0, log = 0, profun = 0, c = 0, capa = 0;
	printf("Ingrese la logitud, ancho y profundidad (en pies) de la piscina\n");
	scanf("%f""%f""%f", &log, &ancho, &profun);
	system("cls");
	volum =volumen( log, ancho, profun);
	printf("El volumen es %.2f\n", volum);
	capa = capacidad(volum);
	printf("La capacidad es %.2f\n", capa);
	tiempo(capa);
	system("pause");
	return 0;
}
float volumen(float log, float ancho, float profun )
{
	return log*ancho*profun;
}
float capacidad(float volum)
{
	return (volum*7.8);
}
void tiempo(float capa)
{
	float tiempo = 0;
	tiempo = capa / 20 / 60;
	printf("El tiempo es %.2f\n", tiempo);
}
