/*Copyright (c) 2021 Boyzo Ramirez Carlos|©-Archivo Historico Digitalizado Charlie Ramirez Animation Studios de Mexico
Programa de Operaciones Matematicas Basicas, Version 17 de Junio 2021. 12:25 a.m.
CODIGO BAJO "LICENCIA MIT". PARA CODIGO ABIERTO (OPEN SOURCE  https://opensource.org/licenses/MIT).*/

#include<stdio.h>
#include<windows.h>
#include<math.h>
//#include<stdlib.h>
//#include<conio.h> unused

//\n significa salto de linea
//\t significa tabulador-->da sangria
int main(){
//float flotante--> a todos los numeros que un numero decimal
const float pi = 3.1415926536;
	char opcion;
	float numero1,numero2,SA,SB,CA,CB;
//char-->character todas letras y algunos

	system("color 2F");
	printf("\t\t\tCalculadora de diferentes operaciones matematicas V2\n");
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

SA = sin(numero1*pi/180);
SB = sin(numero2*pi/180);
CA = cos(numero1*pi/180);
CB = cos(numero2*pi/180);
system("cls");

	 if ((opcion == '1') || (opcion =='A') || (opcion =='a')) {
			printf("Suma es: %.2f",numero1+numero2);//en donde ponemos las variables pondremos la operacion a realizar
	}
else if ((opcion == '2') || (opcion =='R') || (opcion =='a')) {
			printf("Resta es: %.2f",numero1-numero2);
		}
else if ((opcion == '3') || (opcion =='D') || (opcion =='d')) {
		printf("Division es: %.2f",numero1/numero2);
		}

else if ((opcion == '4') || (opcion =='D') || (opcion =='d')) {
		printf("Multiplicacion es: %.2f",numero1*numero2);
		}

else if ((opcion == '5') || (opcion =='S') || (opcion =='s')) {		
		printf("Seno Para el Num1: %.2f\n",SA);
				//paranum2
		printf("Seno Para el Num2:%.2f\n",SB);
		}

else if ((opcion == '6') || (opcion =='C') || (opcion =='c')) {
		printf("Coseno Para el Num1: %.2f\n",CA);
			//paranum2
		printf("Coseno Para el Num2:%.2f\n\n",CB);
		}

else if ((opcion == '7') || (opcion =='T') || (opcion =='t')) {
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
		}
else{ 
printf("\t\tOperacion Invalida");
}		
return 0;
}
