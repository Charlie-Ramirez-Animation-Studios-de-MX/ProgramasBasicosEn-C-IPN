/*Copyright (c) 2021 Boyzo Ramirez Carlos|©-Archivo Historico Digitalizado Charlie Ramirez Animation Studios de Mexico
“Realizar un programa que calcule el peso y la longitud (expresadas en kg y ft respectivamente)
de un dinosaurio. El usuario deberá digitar el peso y la longitud, a la salida, deberá mostrar el
peso en toneladas y la longitud en metros, Version 16 de Mayo 2021. 01:01 a.m.
CODIGO BAJO "LICENCIA MIT". PARA CODIGO ABIERTO (OPEN SOURCE  https://opensource.org/licenses/MIT).*/

#include <stdio.h>
#define FEET 0.3048 //equivalencia en metros

int main(){
//variables
float kilos;
float pies;

	printf("Conversor a Dinosaurios Metricos\n");
	printf("Cuantos kilos pesa el dino?\n");
		scanf("%f", &kilos);
	printf("Cuanto mide en Pies?\n");
		scanf("%f", &pies);
	printf("\nEl dino en sistema Metrico equivale a:\n");
	printf("%.3f Toneladas\n", kilos/1000);
	printf("%.3f Metros\n",pies*FEET);
	
	


return 0;
}

