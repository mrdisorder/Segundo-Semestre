// area de un rombo.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// karen aguilar

#include <iostream>
using namespace std;
float D;
float d;
float mult;
float area;


int main()
{
    cout << "Calculemos el area de un rombo!" << endl;
    cout << endl;
    cout << "Ingresa el valor de la Diagonal Mayor (D): ";
    cin >> D;
    cout << "D = " << D << endl;
    do
    {
        cout << "Ingresa un valor menor a la Diagonal Menor, este sera la Diagonal Menor (d): ";
        cin >> d;
        cout << "El valor debe ser menor a la Diagonal Menor!" << endl;

    } while (d > D);

    cout << "d = " << d << endl;
    cout << endl;
    cout << "Para encontrar el area de un rombo multiplicamos las diagonales y el resultado lo dividimos entre 2." << endl;
    cout << "El resultado de la multiplicacion de nuestras diagonales es: " << endl;
    mult = D * d;
    cout << "[ " << D << " ] * [ " << d << " ] = " << mult << "." << endl;
    cout << "Ahora dividimos nuestro resultado entre 2, lo que nos da el siguiente resultado: " << endl;
    cout << "[ " << mult << " ] / 2 = " << mult / 2 << endl;
    area = mult / 2;
    cout << endl;
    cout << "El area de nuestro rombo es: " << area;

}