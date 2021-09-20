/*Copyright (c) 2021 Boyzo Ramirez Carlos|©-Archivo Historico Digitalizado Charlie Ramirez Animation Studios de Mexico
Calcular el nuevo salario de un obrero si obtuvo un incremento del 25% sobre su salario anterior, Version 09/05/21 20:44
CODIGO BAJO "LICENCIA MIT". PARA CODIGO ABIERTO (OPEN SOURCE  https://opensource.org/licenses/MIT).*/

#include <stdio.h>
int main(){
//#include <stdio.h>
#define incremento 1.25 //Convertir el porcentaje en un valor decimal  25% -> = 1.25
	//Variables
	float salario;
	printf("Calculadora de aumento\n");
printf("Digite cual es su salario actual\n");
	printf("$");
	scanf("%f", &salario);

//Area de calculo
printf("Tu salario con el aumento del 25%% asciende a: $%.2f\n",salario*incremento);
return 0;
}
