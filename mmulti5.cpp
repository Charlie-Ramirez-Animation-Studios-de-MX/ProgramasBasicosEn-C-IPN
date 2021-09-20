/*Copyright (c) 2021 Boyzo Ramirez Carlos|©-Archivo Historico Digitalizado Charlie Ramirez Animation Studios de Mexico
Programa de multiplica del 1 al 5 y suma resultados, Version 19 de Junio 2021. 01:01 a.m.
CODIGO BAJO "LICENCIA MIT". PARA CODIGO ABIERTO (OPEN SOURCE  https://opensource.org/licenses/MIT).*/
#include <stdio.h>
#include<iostream>
#include<windows.h>//para sleep
using namespace std;

int main(){
	system("color 1E");
//variables
float num,sum;


	cout << "		|Calculadora de Multiplicacion y suma progresiva|" << endl;
	cout << "		=================================================" << endl << endl;
    cout << "				Ingresa un Numero: " ;
    cin >> num;
    cout << endl;
    cout << endl << endl <<"				______________" << endl;
    
    int i= 1;
    while (i <=5) {
        cout << " 				|"<< num << " x " << i << " = " << num*i << endl;
        cout <<"				==============" << endl;
        Sleep(300);
        sum = sum+num*i;
        i = i+1;
    }
    cout << endl << "		~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<< endl;
    cout << endl << "			La suma de total de los resultados es: "<<sum << endl;
    cout << endl << "		~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<< endl;
    
return 0;
}
