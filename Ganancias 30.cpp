/*Copyright (c) 2021 Boyzo Ramirez Carlos|©-Archivo Historico Digitalizado Charlie Ramirez Animation Studios de Mexico
El dueño de una tienda compra un artículo a un precio determinado. Obtener el precio
en el que lo debe vender para obtener una ganancia del 30%, Version 09/05/21 20:37
CODIGO BAJO "LICENCIA MIT". PARA CODIGO ABIERTO (OPEN SOURCE  https://opensource.org/licenses/MIT).
*/
#include <stdio.h>
#define ganancia 0.7 //Convertir el porcentaje en un valor decimal y restarselo a 1 30% -> 1 - 0.30 = 0.70
int main(){
	float producto;
	//float descuento;
printf("Digite el precio de producto\n");
	printf("$");
	scanf("%f", &producto);

//Area de calculo
printf("Para obtener ganancias del 30%% se requiere vender a: $%.2f\n",producto/ganancia);
return 0;
}
