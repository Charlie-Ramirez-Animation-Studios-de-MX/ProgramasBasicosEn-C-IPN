/*Copyright (c) 2021 Boyzo Ramirez Carlos|©-Archivo Historico Digitalizado Charlie Ramirez Animation Studios de Mexico
Programa de Operaciones Matematicas Basicas, Version 16 de Mayo 2021. 01:01 a.m.
CODIGO BAJO "LICENCIA MIT". PARA CODIGO ABIERTO (OPEN SOURCE  https://opensource.org/licenses/MIT).*/

#include <stdio.h>
#include <windows.h>
void gotoxy(int x,int y){  
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos);}

int main(){
//variables
float LM,LS,MM,MS,VM,VS;
float DL,DM,DV,PR;

printf("\t\t\t\tPromedio de 3 dias\n");
printf("\t\tInserte el tiempo en minutos y segundos segun el dia\n\n");
gotoxy(6,6);
printf("minutos Lunes, despues Pulse enter y escriba segundos\n");
	scanf("%f", &LM); 
printf("\t%.f:",LM); //Esto imprime 10: por ejemplo
scanf("%f", &LS);
//miercoles
printf("\n\nminutos miercoles, despues Pulse enter y escriba segundos\n");
scanf("%f", &MM);
	printf("\t%.f:",MM);  
	scanf("%f", &MS);
	//viernes
printf("\n\nminutos viernes, despues Pulse enter y escriba segundos\n");
	scanf("%f", &VM);
	printf("\t%.f:",VM); 
	scanf("%f", &VS);

//Conversion a tiempo decimal  | Minutos/60
DL = LM+(LS/60);  //15:30  -- 15.5
DM = MM+(MS/60);
DV = VM+(VS/60);

//Calculo promedio
PR = ((DL+DM+DV)/3);

printf("\n\tPromedio en Formato Decimal es: %.3f minutos",PR);
 return 0;
}

