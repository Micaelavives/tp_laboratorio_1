/*
 * calculos.c
 *
 *  Created on: 14 abr. 2022
 *      Author: micaela vives
 */

#include <stdio.h>
#include <stdlib.h>

/// RECIBE NUMEROS FLOTANTES
/// DEVUELVE DIFERENCIA ENTRE AMBOS NUMEROS
/// CONVIERTE A POSITIVO EN CASO DE NO SERLO.
float diferenciaPos(float a, float b){
	int resto;
	resto=a-b;
	if(resto<0){
	resto=resto*-1;
	}

	return resto;
}

///RECIBE DOS FLOTANTES
/// LOS MULTIPLICA
/// RETORNA UN FLOAT
float multiplicarFloat(float x, float z){

	float resultado;

	resultado=x*z;

	return resultado;
}


///RECIBE DOS FLOAT
/// VERIFICA QUE SEA DISTINTO DE CERO
/// DIVIDE
/// RETORNA EL TOTAL
float division(float x, float y){

	float total;

     if(y==0){

    	printf("ERROR. divide sobre 0!");
     }
     else{
    	 total=x/y;
     }

     return total;
}


