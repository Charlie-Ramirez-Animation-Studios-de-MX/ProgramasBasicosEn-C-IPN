/*Copyright (c) 2021 Boyzo Ramirez Carlos|©-Archivo Historico Digitalizado Charlie Ramirez Animation Studios de Mexico
Programa de Operaciones Matematicas Basicas, Version 16 de Mayo 2021. 01:01 a.m.
CODIGO BAJO "LICENCIA MIT". PARA CODIGO ABIERTO (OPEN SOURCE  https://opensource.org/licenses/MIT).*/

#include <stdio.h>
// //Convertir el porcentaje en un valor decimal y restarselo a 1 30% -> 1 - .30 = 0.70
#define ganancia 0.7
int main(){
	float producto;
	printf("Ponle el precio del producto\n");
	printf("$");
	scanf("%f", &producto);
	
//area de calculo
	printf("Para tener ganancias del 30%% se tiene que vender a:$%.2f\n",producto/ganancia);
return 0;
}

