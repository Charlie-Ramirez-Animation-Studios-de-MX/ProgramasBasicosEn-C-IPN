/*Copyright (c) 2021 Boyzo Ramirez Carlos|©-Archivo Historico Digitalizado Charlie Ramirez Animation Studios de Mexico
Realiza un programa que calcule el descuento que se le aplica a un producto, deberá solicitar
al usuario que digite el precio del producto y el descuento que se le aplica. A la salida deberá
mostrar el descuento se le va a aplicar y el precio total del producto con su descuento, Version 9 de Mayo 2021. 04:13 p.m.
CODIGO BAJO "LICENCIA MIT". PARA CODIGO ABIERTO (OPEN SOURCE  https://opensource.org/licenses/MIT).
*/
#include <stdio.h>
int main(){
	float producto;
	float descuento;
printf("Digite el precio de producto\n");
	printf("$");
	scanf("%f", &producto);
printf("Cuanto es el descuento?\n");
	scanf("%f", &descuento);
//Area de calculo
	float x = (100-descuento)/100;
	float neto= (producto*x);
	printf("Tu producto de $ %.2f con descuento del %.f%%\n",producto,descuento);
	printf("Es: $%.2f\n",neto);
	
return 0;
}

