/*Copyright (c) 2021 Boyzo Ramirez Carlos|�-Archivo Historico Digitalizado Charlie Ramirez Animation Studios de Mexico
�Realiza un programa que calcule el peso de un avi�n en sus tres estados (al despegar, en el
aire y al aterrizar). El c�lculo es en base a lo siguiente:
o El peso de un avi�n al despegar es del doble
o El peso de un avi�n en el aire es igual a 0
o El peso de un avi�n al aterrizar es igual a su peso normal, El usuario deber� digitar cual es el peso total del avi�n y a la salida deber� dar el peso de cada
uno de los estados, Version 09/05/21 17:13.
CODIGO BAJO "LICENCIA MIT". PARA CODIGO ABIERTO (OPEN SOURCE  https://opensource.org/licenses/MIT).*/

#include <stdio.h>
int main(){
//Variables
float peso;
	
	printf("calcule el peso de un avion en sus tres estados\n");
printf("Cual es el peso total del avion?\n");
scanf("%f", &peso);
//area de calculo
	printf("\nEl peso al Despegar es de: %.3f kg\n",peso*2);
	printf("El peso en Aire es de: 0 kg\n");
	printf("El peso al Aterrizar es de: %.3f kg\n",peso);
return 0;
}

