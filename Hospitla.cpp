/*Copyright (c) 2021 Boyzo Ramirez Carlos|©-Archivo Historico Digitalizado Charlie Ramirez Animation Studios de Mexico
En un hospital existen 3 áreas: ginecología, pediatría y traumatología. El presupuesto
anual del hospital se reparte conforme a la siguiente tabla Ginecología 40%
Pediatría 30% Traumatología 30%,Obtener la cantidad de dinero que recibirá cada área para cualquier monto presupuestal
Version 10/05/21 16:22
CODIGO BAJO "LICENCIA MIT". PARA CODIGO ABIERTO (OPEN SOURCE  https://opensource.org/licenses/MIT).*/

#include <stdio.h>
int main(){
//variables
float GIN,PED,CTOT;
printf("\t\t\t\tCalculadora Presupuestal\n\n");
printf("\tCual es el presupuesto anual?\n");
printf("$"); scanf("%f", &CTOT);
//Area de calculo

GIN = 40*CTOT/100;
PED = 30*CTOT/100;

	printf("\n\t\tEl presupuesto anual del hospital se reparte conforme a la siguiente tabla\n");
	printf("\tGinecologia 40%%: $%.2f",GIN);
	printf("\t\tPediatria 30%%: $%.2f",PED);
	printf("\t\tTraumatologia 30%%: $%.2f",PED);

return 0;
}


