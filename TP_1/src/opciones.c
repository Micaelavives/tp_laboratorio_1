/*
 * opciones.c
 *
 *  Created on: 14 abr. 2022
 *      Author: micaela vives
 */

#include <stdio.h>
#include <stdlib.h>

///RECIBE UN MINIMO Y UN MAXIMO.
///VALIDA QUE EL NUMERO ELEGIDO ESTE DENTRO DEL RANGO


 int opciones(int start, int theEnd){///FUNCION


	 int numero;

	 printf( "Ingresar opcion %d a %d : ",start,theEnd);
	 scanf("%d",&numero);

	 while(numero<start || numero>theEnd){
		 printf("Opcion incorrecta.");
		 scanf("%d",&numero);

	 }
	 return numero;
 }
