/*Copyright (c) 2021 Boyzo Ramirez Carlos|©-Archivo Historico Digitalizado Charlie Ramirez Animation Studios de Mexico
Realizar un programa que calcule los años, semanas, días, horas, minutos y segundos de vida
de una persona. El usuario tendrá que digitar el año actual y el año en que nació., Version 09/05/21 19:04
CODIGO BAJO "LICENCIA MIT". PARA CODIGO ABIERTO (OPEN SOURCE  https://opensource.org/licenses/MIT).*/

#include <stdio.h>
int main(){
//variables
float inicio;
float actual;
float edad;


printf("cronometro de Vida\n\n");

printf("En que a");
printf("%c",-92);
printf("o naciste?\n");
	scanf("%f", &inicio);
printf("En que a");
printf("%c",-92);
printf("o estamos?\n");
scanf("%f", &actual);

//conversion
edad = actual-inicio;
printf("Haz vivido:\n");
//años
printf("%.f ",edad);
		printf("a");
		printf("%c",-92);
		printf("os\n");
//meses
printf("%.f meses\n",edad*12);
//semanas
printf("%f semanas\n",edad*52.1429);
//dias
printf("%.f dias\n",edad*365);
//horas
printf("%.f horas\n",edad*8760);
//min
printf("%.f minutos\n",edad*525600);
//sec
printf("%.f segundos\n",edad*31536000);
return 0;
}

