#include<iostream>
using namespace std;

int main() {
    cout << "Uso de goto : escribe s para salir" << endl;
    char c='a';
    salto1:
    cin >> c;
    if (c=='s') goto salto2;
    cout << "Esto no es una s. Escribe s para salir." << endl;
    goto salto1;
    salto2:
    cout << "Has escrito s. Programa acabado." << endl;
}
