/*Copyright (c) 2021 Boyzo Ramirez Carlos|©-Archivo Historico Digitalizado Charlie Ramirez Animation Studios de Mexico
Realizar un programa que calcule el pago que recibirá un trabajador en una semana,
considerando el número de horas trabajadas y el número de horas extras trabajadas. El pago
de las horas extras será el doble de las horas normales.

El usuario deberá digitar el total de horas laboradas en la semana y el total de horas extras
laboradas en la semana. A la salida, deberá mostrar el pago normal por las horas, el pago extra
por las horas extras laboradas y el pago total., Version 09/05/21 17:30.
CODIGO BAJO "LICENCIA MIT". PARA CODIGO ABIERTO (OPEN SOURCE  https://opensource.org/licenses/MIT).*/

#include <stdio.h>
int main(){
//Variables
float normales;
float extras;
float tarifa;

	printf("Calculadora de pago semanal\n\n");
	printf("Cual es su tarifa?\n");
		scanf("%f", &tarifa);
	printf("Cuantas horas normales trabajo esta semanja?\n");
		scanf("%f", &normales);
	printf("Cuantas Extras?\n");
		scanf("%f", &extras);
		//Area de calculos
printf("Esta semana le tocan\n");
	printf("Por %.2f horas normales:$ %.2f \n",normales,normales*tarifa);
//extras
	printf("Por %.2f horas extras:$ %.2f \n",extras,extras*(tarifa*2));
//totales
	printf("Pago total: $%.2f\n",(normales*tarifa+(extras*(tarifa*2))));
return 0;
}

