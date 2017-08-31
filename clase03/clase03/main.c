#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"


int main()
{

float areaDelCirculo=0;
float rad;

rad = getFloat("ingrese un radio para calcular \n ");

areaDelCirculo = getArea(rad);

printf("El area del circulo es: %.2f \n ", areaDelCirculo);


}

