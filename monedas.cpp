/*Copyright (c) 2021 Boyzo Ramirez Carlos|©-Archivo Historico Digitalizado Charlie Ramirez Animation Studios de Mexico
Conversión de pesos mexicanos a 4 monedas distintas, Version 10/05/21 16:45
CODIGO BAJO "LICENCIA MIT". PARA CODIGO ABIERTO (OPEN SOURCE  https://opensource.org/licenses/MIT).*/

#include <stdio.h>
#define USD 19.93
#define YEN 0.18
#define GBP 28.14
#define COP 0.0053
int main(){
//variables
float MXN;
printf("\t\t\t\tConversor de Divisas\n\n");
printf("\tCantidad en MXN?\n");
printf("$"); scanf("%f", &MXN);
//Area de calculo

printf("\n\t\t$%.2f Pesos Mexicanos cotizan hoy En el mercado por:\n\n",MXN);
	printf("\tDolar US ($%f): $%.2f",USD,MXN*USD);
	printf("\t\t\tYenes ($%f): %c%.2f",YEN,190,MXN*YEN);
	printf("\n\tLibras UK ($%f): %c%.2f",GBP,156,MXN*GBP);
	printf("\t\tPeso COP ($%f): $%f",COP,MXN*COP);

return 0;
}

