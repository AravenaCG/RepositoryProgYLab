#include <stdio.h>
#include <stdlib.h>
#define CANTIDADNUMEROS 10
int main()
{
int cantidadPositivos=0;
int cantidadNegativos=0;
int i=0;
float num;


for (i=0; i < CANTIDADNUMEROS;i++)
{
        printf("ingrese un numero\n");
        scanf("%f",&num);
            if (num > 0 )
            {
                cantidadPositivos++;
            }
            else
            {
                cantidadNegativos++;
            }

}

printf("la cantidad de positivos es: %d \n ", cantidadPositivos);
printf("la cantidad de negativos es : %d \n ", cantidadNegativos);

return 0;

}
