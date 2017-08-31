#include <stdio.h>
#include <stdlib.h>



/**
* \brief solicita un numero  y lo devuelve
* \param mensaje es el mensaje que se muestra
* \return El numero ingresado por el usuario
*
*/

float getFloat(char mensaje[])
{
float aux;
printf("%s",mensaje);
scanf("%f",&aux);


return aux;
}


/** \brief calcula el radio de un circulo
 *
 * \param radio es el radio con el que se calcula el area
 * \param
 * \return retorna el area del circulo
 *
 */

float getArea(float radioIngresado)
{
    float area =0;

    area = radioIngresado * radioIngresado * 3.14;

    return area;

}
