/*Copyright (c) 2021 Boyzo Ramirez Carlos|©-Archivo Historico Digitalizado Charlie Ramirez Animation Studios de Mexico
Programa de Operaciones Matematicas Basicas, Version 16 de Mayo 2021. 01:01 a.m.
CODIGO BAJO "LICENCIA MIT". PARA CODIGO ABIERTO (OPEN SOURCE  https://opensource.org/licenses/MIT).*/

#include<stdio.h>
//#include<windows.h>
#include<math.h>
#include <stdlib.h>
//#include<conio.h>

//\n significa salto de linea
//\t significa tabulador-->da sangria
int main(){
//float flotante--> a todos los numeros que un numero decimal

	char opcion;
	float numero1,numero2,resultado,pi;
//char-->character todas letras y algunos

	system("color 2F");
	printf("\t\t\tCalculadora de diferentes operaciones matematicas\n");
	printf("\n\t\t\tmenu de operaciones:\n\t\t\t1-(A)dicion\n\t\t\t2-(R)esta\n\t\t\t3-(M)ultiplicacion");
	printf("\n\t\t\t4-(D)ivision\n\t\t\t5-(S)eno\n\t\t\t6-(C)oseno\n\t\t\t7-(T)odas las anteriores\n\t\t\t");//siempre poner las \n y \t antes de scanf
//la variable que vas a pedir es de tipo char
//si es float--> %f, si es int-->%i, si es char-->%c
	scanf("%c",&opcion);

//system("cls");//limpiar = borra todo el texto anterior
clrscr();
	printf("\n\t\t\tFavor de ingresar el primer numero\n\t\t\t");
	scanf("%f",&numero1);
	printf("\n\t\t\tIngrese el segundo numero\n\t\t\t");
	scanf("%f",&numero2);

system("cls");

	switch(opcion){

		case '1':case'A':case'a':
		printf("%.2f",numero1+numero2);//en donde ponemos las variables pondremos la operacion a realizar
	break;

		case'2':case'R':case'r':
		printf("%.2f",numero1-numero2);
		break;

		case'3':case'D':case'd':
		printf("%.2f",numero1/numero2);
		break;

		case'4':case'M':case'm':
		printf("%.2f",numero1*numero2);
		break;

		case'5':case'S':case's':
		printf("Para el Num1: %.2f\n",sin(numero1));
				//paranum2
		printf("Para el Num2:%.2f\n",sin(numero2));
		break;

		case'6':case'C':case'c':
		printf("Para el Num1: %.2f\n",cos(numero1));
			//paranum2
		printf("Para el Num2:%.2f\n",cos(numero2));
		break;

		case'7':case'T':case't':
		printf("Todas las Operaciones basicas con Numero 1 y 2 son:\n",cos(numero1));
		printf("\t\tSuma: %.2f",numero1+numero2);
		printf("\t\t\t\tResta: %.2f\n",numero1-numero2);
		printf("\t\tDivision: %.2f",numero1/numero2);
		printf("\t\t\t\tMultiplicacion: %.2f\n",numero1*numero2);
		printf("\t\tSeno Para el Num1: %.3f",sin(numero1));
			//paranum2
		printf("\t\tSeno Para el Num2: %.3f\n",sin(numero2));
		printf("\t\tCoseno Para el Num1: %.3f",cos(numero1));
			//paranum2
		printf("\t\tCoseno el Num2: %.3f",cos(numero2));
		break;
	}
return 0;
}
