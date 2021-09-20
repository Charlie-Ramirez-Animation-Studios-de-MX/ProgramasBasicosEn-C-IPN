/*Copyright (c) 2021 Boyzo Ramirez Carlos|©-Archivo Historico Digitalizado Charlie Ramirez Animation Studios de Mexico
Programa de multiplica del 1 al 5 y suma resultados, Version 19 de Junio 2021. 01:01 a.m.
CODIGO BAJO "LICENCIA MIT". PARA CODIGO ABIERTO (OPEN SOURCE  https://opensource.org/licenses/MIT).*/
#include <stdio.h>
#include<iostream>
#include <locale.h>
//#include<windows.h>//para sleep
using namespace std;

int main(){
setlocale(LC_ALL, "spanish");
	system("color 1E");
//variables
float num,sum;



	cout << "		|Calculadora de Multiplicación y suma progresiva|" << endl;
	cout << "		=================================================" << endl << endl;
    cout << "				Ingresa un Numero: " ;
    cin >> num;
    cout << endl;
    cout << endl << endl <<"				______________" << endl;

    for(int i=1;i<=5;i+=1) // i+=1 es similar a escribir i = i + 1
    {
        cout << " 				|"<< num << " x " << i << " = " << num*i << endl;
        cout <<"				==============" << endl;
        //Sleep(300);
        sum = sum+num*i;
  }

    cout << endl << "		~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<< endl;
    cout << endl << "			La suma de total de los resultados es: "<<sum << endl;
    cout << endl << "		~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<< endl;

return 0;
}
