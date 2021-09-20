/*Copyright (c) 2021 Boyzo Ramirez Carlos|©-Archivo Historico Digitalizado Charlie Ramirez Animation Studios de Mexico
Todos los lunes, miércoles y viernes una persona corre la misma ruta y cronometra los tiempos
obtenidos. Determinar el tiempo promedio que la persona tarda en recorrer la misma ruta en una
semana cualquiera, Version 10/05/21 15:46.
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
gotoxy(0,4);
printf("minutos Lunes, despues Pulse enter y escriba segundos\n");
	scanf("%f", &LM);
	printf("\t%.f:",LM); 
	scanf("%f", &LS);
printf("\n\nminutos martes, despues Pulse enter y escriba segundos\n");
	scanf("%f", &MM);
	printf("\t%.f:",MM);  
	scanf("%f", &MS);
printf("\n\nminutos viernes, despues Pulse enter y escriba segundos\n");
	scanf("%f", &VM);
	printf("\t%.f:",VM); 
	scanf("%f", &VS);

//Conversion a tiempo decimal  | Minutos/60
DL = LM+(LS/60);
DM = MM+(MS/60);
DV = VM+(VS/60);

//Calculo promedio
PR = ((DL+DM+DV)/3);
printf("\n\tPromedio en Formato Decimal es: %.3f minutos",PR);

return 0;
}

