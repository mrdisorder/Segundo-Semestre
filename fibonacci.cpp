// fibonacci.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Karen Aguilar

#include <iostream>
using namespace std;
int limite;
int num = 0;
int num2=1;

int main()
{
    cout << "A continuacion mostrare la serie de Fibonacci" << endl;
    cout << endl;
    cout << "Ingresa un numero limite para la sucesion: ";
    cin >> limite;

    for (int i = 1; i < limite; i++)
    {
        cout << "[" << num << "] ";   
        num2 = num2 + num;
        num = num2 - num;
    }
    return 0;
}

