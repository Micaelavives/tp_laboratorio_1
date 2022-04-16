/*
 * validaEntero.c
 *
 *  Created on: 14 abr. 2022
 *      Author: micaela vives
 */

#include <stdio.h>
#include <stdlib.h>


 ///RECIBE DOS MENSAJES
 /// TOMA DATO DE NUM
 /// VALIDA QUE SEA MAYOR A 0
 /// RETORNA UN NUMERO.
float pedirValidarEntero (char* mensaje, char* error){///FUNCION

	float numero;

	printf(mensaje);
	scanf("%f",&numero);


  	 while(numero<1)
  	{
  		printf(error);
  		scanf("%f",&numero);

    }
  	return numero;
}
