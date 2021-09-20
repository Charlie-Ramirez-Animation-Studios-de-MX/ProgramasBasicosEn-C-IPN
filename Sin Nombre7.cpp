/*Copyright (c) 2021 Boyzo Ramirez Carlos|©-Archivo Historico Digitalizado Charlie Ramirez Animation Studios de Mexico
Programa de Operaciones Matematicas Basicas, Version 16 de Mayo 2021. 01:01 a.m.
CODIGO BAJO "LICENCIA MIT". PARA CODIGO ABIERTO (OPEN SOURCE  https://opensource.org/licenses/MIT).*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>

int main(){
//variables
float num1,num2,mult,division,res,suma;
float pot,raiz,ab,sn,cs;
//Tronco
printf("Ingresa primer numero:  ");
	scanf("%f",&num1);
printf("Ingresa Segundo numero:  ");
		scanf("%f",&num2);
		
//suma		
	suma=(num1+num2);
	printf("Sumado (a 3 decimales) es: %.3f\n",suma);
		getch();
//resta
res=(num1-num2);
		printf("Resta (a 3 decimales) es %.3f\n",res);
		getch();
//mult
		mult=(num1*num2);
		printf("Multiplicado (a 3 decimales) es: %.3f\n",mult);
		getch();
//divi	
		division=(num1/num2);
		printf("Divido (a 3 decimales) es: %.3f\n",division);
		getch();
//3apot
pot = pow(suma,3);
	printf("Tercera potencia (a 3 decimales) es %.3f\n",pot);
		getch();
		
	//raiz
	raiz = sqrt(suma);
	printf("Raiz cuadrada (a 4 decimales) es %.4f\n",raiz);
		getch();	
//Sen
	sn = sin(suma);
	printf("Seno (a 4 decimales) es %.4f\n",sn);
		getch();
//cos
cs = cos(suma);
		printf("Coseno (a 4 decimales) es %.4f\n",cs);
		getch();
//ABS
ab = abs(suma);
	printf("valor absoluto (a 4 decimales) es %.4f\n",ab);
		getch();
return 0;
}

