/*
 ============================================================================
 Name        : tp_laboratorio_1.c
 Author      : Micaela vives
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#include "calculos.h"
#include "opciones.h"
#include "validaEntero.h"


int main(void) {

	setbuf(stdout,NULL);

	float km;
	int opcion;
	float aerolineas;
	float latam;
	float debitoA;
	float creditoA;
	float debitoL;
	float creditoL;
	float bitcoinA;
	float bitcoinL;
	float unitarioA;
	float unitarioL;
	float diferencia;
	float bitcoin;
	int flag;

	bitcoin=4606954.55;
	aerolineas=0;
	latam=0;
	opcion=0;
	km=0;
	flag=0;


	do
	{
		printf("\n1)Ingresar kilometros: (km = %.2f)",km);
		printf("\n2)Ingresar precio de vuelos:(Aerolineas = %.2f y Latam = %.2f)",aerolineas,latam);
		printf("\n3)Calcular costos");
		printf("\n4)Informar Resultados ");
		printf("\n5)Carga forzada de datos");
		printf("\n6)Salir\n\n");

		opcion=opciones(1,6);

		switch(opcion)
		{
		case 1:
			km=pedirValidarEntero("\nIngresar kilometros:", "ERROR ingrese kilometraje valido. ");
			break;
		case 2:
			aerolineas=pedirValidarEntero("\nIngresar Precio de Aerolíneas:" , "ERROR ingrese precio valido:" );
			latam=pedirValidarEntero("\nIngresar precio de Latam:","ERROR ingrese precio valido:" );

			break;

		case 3:
			if(km==0 || aerolineas==0 || latam==0){
				printf("ERROR. ingrese correctamente los datos");

			}
			else{
			debitoA=multiplicarFloat(aerolineas , 0.9);
			creditoA=multiplicarFloat(aerolineas, 1.25);
			debitoL=multiplicarFloat(latam , 0.9);
			creditoL=multiplicarFloat(latam, 1.25);
			unitarioA=division(aerolineas,km);
			unitarioL=division(latam,km);
			diferencia=diferenciaPos(aerolineas ,latam);
			bitcoinA=division(aerolineas, bitcoin);
			bitcoinL=division(latam, bitcoin);
			printf("\n\nLos calculos fueron realizados:\n\n");
			flag++;
			}

			break;
		case 4 :
			if(flag==0){
				printf("ERROR. DEBE INGRESAR TODOS LOS DATOS: ");
			}
			else{
			printf("\n\nKms ingresados %.2f km\n",km);
			printf("\nPrecio Aerolineas: $%.2f",aerolineas);
			printf("\na)Precio con tarjeta de debito: $%.2f",debitoA);
			printf("\nb)Precio con tarjeta de credito: $%.2f",creditoA);
			printf("\nc)Precio pagando con bitcoin: %f BTC",bitcoinA);
			printf("\nd)El precio unitario de aerolineas: $%.2f",unitarioA);
			printf("\n\nPrecio Latam: $%.2f",latam);
			printf("\na)Precio con tarjeta de debito: $%.2f",debitoL);
			printf("\nb)Precio con tarjeta de credito: $%.2f",creditoL);
			printf("\nc)Precio pagando con bitcoin: %f ",bitcoinL);
			printf("\nd)El precio unitario de Latam: $%.2f",unitarioL);

			printf("\n\nLa diferencia de precio es : $%.2f\n\n",diferencia);
			}
			break;
		case 5 :

			km=7090;
			aerolineas=162965;
			latam=159339;
			debitoA=multiplicarFloat(aerolineas , 0.9);
			creditoA=multiplicarFloat(aerolineas, 1.25);
			debitoL=multiplicarFloat(latam , 0.9);
			creditoL=multiplicarFloat(latam, 1.25);
			unitarioA=division(aerolineas,km);
			unitarioL=division(latam,km);
			diferencia=diferenciaPos(aerolineas ,latam);
			bitcoinA=division(aerolineas, bitcoin);
			bitcoinL=division(latam, bitcoin);
			flag=1;
			printf("\n\nKms ingresados %.2f km\n",km);
			printf("\nPrecio Aerolineas: $%.2f",aerolineas);
			printf("\na)Precio con tarjeta de debito: $%.2f",debitoA);
			printf("\nb)Precio con tarjeta de credito: $%.2f",creditoA);
			printf("\nc)Precio pagando con bitcoin: %f BTC",bitcoinA);
			printf("\nd)El precio unitario de aerolineas: $%.2f",unitarioA);
			printf("\n\nPrecio Latam: $%.2f",latam);
			printf("\na)Precio con tarjeta de debito: $%.2f",debitoL);
			printf("\nb)Precio con tarjeta de credito: $%.2f",creditoL);
			printf("\nc)Precio pagando con bitcoin: %f ",bitcoinL);
			printf("\nd)El precio unitario de Latam: $%.2f",unitarioL);
			printf("\n\nLa diferencia de precio es : $%.2f\n\n",diferencia);

			break;

		case 6:
			printf("\nPrograma terminado. %d",opcion);

			break;

		}

	}while(opcion!=6);
	return 0;
}













