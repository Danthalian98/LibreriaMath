#include <iostream>
#include "Math.h"

using namespace std;

int main() {
	int opc;
    Math math;
    do {
        system("cls");
        cout << "......Libreria Math.h by Zavala......" << endl;
        cout << "................Menu................." << endl;
        cout << "1.-Funcion Sen" << endl;
        cout << "2.-Funcion Cos" << endl;
        cout << "3.-Funcion Tan" << endl;
        cout << "4.-Multiplicacion de matrices" << endl;
        cin >> opc;
        system("cls");

        switch (opc){
        case 1: math.Sen();
            break;
        case 2: math.Cos();
            break;
        case 3: math.Tan();
            break;
        case 4: math.Matriz();
            break;
        default: cout << "opcion no valida" << endl;
            break;
        }

        cout << endl; cout << endl;
        cout << "Desea realizar otra funcion?" << endl;
        cout << "1.-Si :D" << endl;
        cout << "2.-No D:" << endl;
        cin >> opc;
    } while (opc == 1);
}