/*Copyright (c) 2021 Boyzo Ramirez Carlos|©-Archivo Historico Digitalizado Charlie Ramirez Animation Studios de Mexico
Tres personas deciden invertir su dinero para fundar una empresa. Cada uno de ellos invierte
una cantidad distinta. Obtener el porcentaje (%) que cada quien invierte con respecto a la
cantidad total invertida., Version 10/05/21 15:46
CODIGO BAJO "LICENCIA MIT". PARA CODIGO ABIERTO (OPEN SOURCE  https://opensource.org/licenses/MIT).*/

#include <stdio.h>
int main(){
//variables
float SOA,SOB,SOC,CTOT;
printf("\t\t\t\tCalculadora de Inversiones\n\n");
printf("\tCuanto ha aportado el SocioA?\n");
printf("$"); scanf("%f", &SOA);
printf("\tCuanto ha aportado el SocioB?\n");
printf("$"); scanf("%f", &SOB);
printf("\tCuanto ha aportado el SocioC?\n");
printf("$"); scanf("%f", &SOC);

//Area de calculo
CTOT = SOA+SOB+SOC;
SOA = SOA/CTOT*100;
SOB = SOB/CTOT*100;
SOC = SOC/CTOT*100;

	printf("\t\t\t\tLas participaciones de capital equivalen a:\n");
	printf("\tPara el Socio A: %.2f%%",SOA);
	printf("\t\tPara el Socio B: %.2f%%",SOB);
	printf("\t\tPara el Socio C: %.2f%%",SOC);

return 0;
}

