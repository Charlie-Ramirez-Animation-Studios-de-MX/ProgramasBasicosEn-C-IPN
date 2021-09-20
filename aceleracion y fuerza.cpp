/*Copyright (c) 2021 Boyzo Ramirez Carlos|©-Archivo Historico Digitalizado Charlie Ramirez Animation Studios de Mexico
Una fuerza actúa sobre un objeto reduciendo su velocidad en cierto tiempo. Solicitar al
usuario la masa del objeto, sus velocidad inicial y final, así como el tiempo en que se redujo la
velocidad.
Calcula la fuerza y la aceleración con las fórmulas correspondientes, Version 09/05/21 18:26
CODIGO BAJO "LICENCIA MIT". PARA CODIGO ABIERTO (OPEN SOURCE  https://opensource.org/licenses/MIT).*/

#include <stdio.h>
int main(){
//variables [pueden sustituirse por un double siendo %.3lf]
/*
float masa;
float vin;
float vfin;
float time;
float acc;
	printf("Calculadora mecanica\n");
		printf("Calcula la fuerza y la aceleracion en Sistema Internacional\n\n");


 printf("Cual es la masa en Kg del objeto?\n");
 	scanf("%f", &masa);
 	
 printf("Cual es la velocidad inicial?\n");
 	scanf("%f", &vin);
 	printf("Cual es la velocidad Final?\n");
 	scanf("%f", &vfin);
 	printf("Cual es el tiempo que tardo en reducir velocidad?\n\n");
 	scanf("%f", &time);

//aceleracion =(vf-vi)/t
acc = (vfin-vin)/time;
 	
 // Calculo de fuerza | fuerza =m*a
printf("La fuerza del objeto es: %.3f Newtons\n",masa*acc);
//Imprimimos acel.
 printf("La aceleracion del objeto es: %.3f m/s^2 \n",acc);
*/

//version double
double masa;
double vin;
double vfin;
double time;
double acc;
	printf("Calculadora mecanica\n");
		printf("Calcula la fuerza y la aceleracion en Sistema Internacional\n\n");


 printf("Cual es la masa en Kg del objeto?\n");
 	scanf("%lf", &masa);
 	
 printf("Cual es la velocidad inicial?\n");
 	scanf("%lf", &vin);
 	printf("Cual es la velocidad Final?\n");
 	scanf("%lf", &vfin);
 	printf("Cual es el tiempo que tardo en reducir velocidad?\n\n");
 	scanf("%lf", &time);

//aceleracion =(vf-vi)/t
acc = (vfin-vin)/time;
 	
 // Calculo de fuerza | fuerza =m*a
printf("La fuerza del objeto es: %.3lf Newtons\n",masa*acc);
//Imprimimos acel.
 printf("La aceleracion del objeto es: %.3lf m/s^2 \n",acc);

return 0;
}

