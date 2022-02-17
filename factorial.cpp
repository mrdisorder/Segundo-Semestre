// factorial.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//


#include <iostream>
using namespace std;
int num;
int res = 1;

int main()
{
    cout << "Encontremos el factorial de un numero menor a 7!" << endl;
    cout << endl;

    do
    {
        cout << "Ingresa el numero al cual le buscaremos el factorial: ";
        cin >> num;
        cout << endl;
        if (num > 7)
        {
            cout << "El numero debe ser menor a 7!" << endl;
        }
    } while (num > 7);

    if (num < 0)
    {
        res = 0;
    }
    else if (num == 0)
    {
        res = 1;
    }
    else
    {
        for (int i = 1; i <= num; i++)
        {
            res = res * i;
        }
    }

    cout << "El factorial de " << num << " es: " << res << endl;

}

