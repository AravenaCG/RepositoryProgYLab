#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {

	int numero1;
	int numero2;
	int resultado;

    system("cls");

	do{
	printf("\nIngrese 1 numero: ");
	scanf("%d",&numero1);

        if(numero1==0)
        {
            printf("Ingrese un numero distinto a 0\n");
            scanf("%d",&numero1);
        }
	}while (numero1 ==0);

	do{

	printf("\nIngrese 2 numero: ");
	scanf("%d",&numero2);
        if(numero2 ==0)
        {
            printf("ingrese un numero distinto a 0 \n");
            scanf("%d",&numero2);
        }
	}while (numero2==0);


	resultado=numero1-numero2;

	printf("______________________________________\n");
	printf("\nEl resultado es: %d \n",resultado);

	if(resultado>0){
        printf("\nResultado positivo \n");
	}
	if(resultado<=0 ){
        printf("\nResultado negativo \n");
	}
	printf("______________________________________\n\n\n\n");


	return 0;
}
