#include<stdio.h>
//nclude<windows.h>
#include<conio.h>

int main(){
float K,C,B,H,S,G,N,E;
//system("color 1f");
//precio de los pañales
float seleccion1,seleccion2;

//parte que no le se xd

printf("\nFavor seleccionar la marca de pañales que compra\n");
printf("\n\t\t(K)leenbebe\t\t(C)hicolastic\n\t\t(B)btips\t\t(H)uggies\n");
scanf("%c", &seleccion1);

//system("cls");

printf("\nFavor de seleccionar la formula que compra\n");
printf("\n\t\t(S)imile\t\t(G)oodstart\n\t\t(N)an\t\t(E)nfamil\n");
scanf("%c", &seleccion2);

//system("cls");

K = (142.65)*12; //kleenbebe
C = (156.37)*12; //chicolastic
B = (128.24)*12; //kiddies
H = (196.2)*12; //huggies
S = (428.33)*12; //simile
G = (548.9)*12; //goodstart
N = (344.83)*12; //nan
E = (562.7)*12; //enfamil

printf("\nEn pañales abria un gasto total de: %.2f\n",seleccion1);
printf("\nEn formula abria un gasto total de: %.2f\n",seleccion2);
printf("\nPor lo que el gasto total seria de: %.2f\n",seleccion1+seleccion2);
}
