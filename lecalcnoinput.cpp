/*Copyright (c) 2021 Boyzo Ramirez Carlos|©-Archivo Historico Digitalizado Charlie Ramirez Animation Studios de Mexico
Programa de Operaciones Matematicas Basicas, Version 16 de Mayo 2021. 01:01 a.m.
CODIGO BAJO "LICENCIA MIT". PARA CODIGO ABIERTO (OPEN SOURCE  https://opensource.org/licenses/MIT).*/

#include<stdio.h>
#include<windows.h>
#include<math.h>
//#include <stdlib.h>
//#include<conio.h>

//\n significa salto de linea
//\t significa tabulador-->da sangria
int main(){
//float flotante--> a todos los numeros que un numero decimal
const float pi = 3.1415926536;
	char op;
	float numero1,numero2,SA,SB,CA,CB;
//char-->character todas letras y algunos

	system("color 2F");
	LESTART:
	printf("\t\t\tCalculadora de diferentes operaciones matematicas Vc\n");
	printf("\n\t\t\tmenu de operaciones:\n\t\t\t1-(A)dicion\n\t\t\t2-(R)esta\n\t\t\t3-(M)ultiplicacion");
	printf("\n\t\t\t4-(D)ivision\n\t\t\t5-(S)eno\n\t\t\t6-(C)oseno\n\t\t\t7-(T)odas las anteriores\n\t\t\t");//siempre poner las \n y \t antes de scanf
//la variable que vas a pedir es de tipo char
//si es float--> %f, si es int-->%i, si es char-->%c

	scanf(" %c",&op);
system("cls");//limpiar = borra todo el texto anterior
//Prevencion de entrrada por fallo 
//METODO IF
		/*	switch(op){ ((op == '1') || (op =='A') || (op =='a') || (op == '2') || (op =='R') || (op =='r') || (op == '3') || (op =='D') || (op =='d') || (op == '4') || (op =='M') || (op =='m') || (op == '5') || (op =='S') || (op =='s') || (op == '6') || (op =='C') || (op =='c') || (op == '7') || (op =='T') || (op =='t'))
			{	goto LENUMEROS;	
			}
			else {printf("\t\t\nOperacion Invalida va de nuevo\n");
			system("pause");
			system("cls");
					goto LESTART;
			}*/
	//METODO Switch
	switch(op){
			case '1':case'A':case'a':case'2':case'R':case'r':case'3':case'D':case'd':case'4':case'M':case'm':case'5':case'S':case's':case'6':case'C':case'c':case'7':case'T':case't':
				goto LENUMEROS;	
			break;
			default: printf("\t\t\nOperacion Invalida va de nuevo\n");
			system("pause");
			system("cls");
					goto LESTART;
			}
					
			
LENUMEROS:
	printf("\n\t\t\tFavor de ingresar el primer numero\n\t\t\t");
	scanf(" %f",&numero1);
	printf("\n\t\t\tIngrese el segundo numero\n\t\t\t");
	scanf(" %f",&numero2);

    

SA = sin(numero1*pi/180);
SB = sin(numero2*pi/180);
CA = cos(numero1*pi/180);
CB = cos(numero2*pi/180);

system("cls");

	switch(op){

		case '1':case'A':case'a':
			
		printf("Suma es: %.2f",numero1+numero2);//en donde ponemos las variables pondremos la operacion a realizar
	break;

		case'2':case'R':case'r':
			
		printf("Resta es: %.2f",numero1-numero2);
		break;

		case'3':case'D':case'd':
			
		printf("Division es: %.2f",numero1/numero2);
		break;

		case'4':case'M':case'm':
			
		printf("Multiplicacion es: %.2f",numero1*numero2);
		break;

		case'5':case'S':case's':
			
		printf("Seno Para el Num1: %.2f\n",SA);
				//paranum2
		printf("Seno Para el Num2:%.2f\n",SB);
		break;

		case'6':case'C':case'c':
			
		printf("Coseno Para el Num1: %.2f\n",CA);
			//paranum2
		printf("Coseno Para el Num2:%.2f\n\n",CB);
		break;

		case'7':case'T':case't':
			
		printf("Todas las Operaciones basicas con Numero 1 y 2 son:\n\n\n"); Sleep(300);
		printf("\t\tSuma: %.2f",numero1+numero2); Sleep(300);
		printf("\t\t\t\tResta: %.2f\n",numero1-numero2); Sleep(300);
		printf("\t\tDivision: %.2f",numero1/numero2); Sleep(300);
		printf("\t\t\t\tMultiplicacion: %.2f\n",numero1*numero2); Sleep(300);
		//SEN
		printf("\t\tSeno Para el Num1: %.3f",SA); Sleep(300);
			//paranum2
		printf("\t\tSeno Para el Num2: %.3f\n",SB); Sleep(300);
		printf("\t\tCoseno Para el Num1: %.3f",CA); Sleep(300);
			//paranum2
		printf("\t\tCoseno Para el Num2: %.3f",CB); Sleep(300);
		break;

		 default:
		 	printf("\t\t\nOperacion Invalida");
		 	system("pause");
					system("cls");
					goto LESTART;
	}

return 0;
}
