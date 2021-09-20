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

system("cls");//limpiar = borra todo el texto anterior

	printf("\n\t\t\tFavor de ingresar el primer numero\n\t\t\t");
	scanf("%f",&numero1);
	printf("\n\t\t\tIngrese el segundo numero\n\t\t\t");
	scanf("%f",&numero2);
