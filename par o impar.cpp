// par o impar.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;
int dato;

int main()
{
    cout << "Ingresa un numero entero, te dire si es par o impar!" << endl;
    cout << endl;
    cout << "Numero: " << endl;
    cin >> dato;

    if (dato % 2 == 0)
    {
        cout << "Tu numero es PAR.";
    }

    else
    {
        cout << "Tu numero es IMPAR.";
    }

    return 0;
}

