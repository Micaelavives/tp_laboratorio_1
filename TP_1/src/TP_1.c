/*
 ============================================================================
 Name        : TP_1.c
 Author      : Micaela vives
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================

 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {


	int numeros [6];
	int costos,distancia;
	char tipo,A,B;
	int min = -1;
	int max= 10000000;


	setbuf(stdout,NULL);
	// Ingresar Kilómetros: ( km=x) MENU 1
	switch(numeros){
	case '1':

		printf("ingrese cantidad de kilometros:");
		scanf("%d",&distancia);

	break;
	case '2':
	// Precio de Vuelos: (Aerolíneas=y, Latam=z)
	//- Precio vuelo Aerolíneas:- Precio vuelo Latam:

		printf("ingrese empresa: A) Aerolineas , B) Latam");
		scanf("%c",&tipo);
		if(tipo!=A&&tipo!=B){
			printf("eliga una empresa valida: ");
			if(tipo==A){
				printf(" a) precio Aerolineas:");

			}
			else
			{
			 printf(" b) precio Latam:");
			}

		 }
		if(costos<min||costos>max){
			printf("Reingrese costo valido : ");

		}
		else {

			printf("Ingrese costo:"); //declarar min y max
			scanf("%d",&costos);

		}

	break;
	case "3":

		printf("a)");// Tarjeta de débito (descuento 10%)
		//b) Tarjeta de crédito (interés 25%)
//c) Bitcoin (1BTC -> 4606954.55 Pesos Argentinos)
//d) Mostrar precio por km (precio unitario)
//e) Mostrar diferencia de precio ingresada (Latam - Aerolíneas)*/
	break;
	case "4":
	break;
	case "5":
	break;
	case "6":
	break;
	}




	return 0;
}
