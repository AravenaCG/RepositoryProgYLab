#include <stdio.h>
#include <stdlib.h>

/*Escribir  un programa que realice las siguientes acciones
1. Limpie la pantalla
2. Asigne a 2 variables numero1 y numero2 valores distintos de cero
3. Efectœe el producto de dichas variables
4. Muestre el resultado pos pantalla
Obtenga el cuadrado de numero1 y lo muestre par pantalla*/


int main(int argc, char *argv[]) {

	int numero1;
	int numero2;
	int producto;
	int cuadrado;

	system("cls");

	do{
	printf("\nIngrese 1 numero: ");
	scanf("%d",&numero1);
	printf("______________________________________\n");
		if(numero1==0)
		{
            printf("\nIngrese numero mayor a 0\n");
            printf("______________________________________\n");
		}
    }while(numero1==0);

	do{
	printf("\nIngrese 2\247 numero: ");
	scanf("%d",&numero2);
	printf("______________________________________\n");
		if(numero2==0)
		{
		printf("\nIngrese numero mayor a 0\n");
		printf("______________________________________\n");
		}
    }while(numero2==0);

	producto=numero1*numero2;
	cuadrado=numero1*numero1;

	printf("\nEl valor 1\247: %d\nEl valor 2\247: %d\n\nEl producto es: %d\n\nEl cuadrado del 1\247 valor %d es: %d \n",numero1,numero2,producto,a,cuadrado);
	printf("______________________________________\n\n\n\n");



	return 0;
}
