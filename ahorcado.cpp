// ahorcado.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// karen aguilar

#include <iostream>
#include <stdlib.h>
#include <string>
#include <stdio.h>
#include "ahorcado.h"

using namespace std;


int main()
{
    string palabra_og; // palabra a adivinar
    char letra; // letra ingresada
    int aciertos = 0; // aciertos
    int aciertos_t = 0; // aciertos totales
    

    // Jugador 1
    cout << "\n\tJuguemos ahorcado!!" << endl;
    cout<< endl;
    cout << "Jugador 1, a continuacion ingresa la palabra a adivinar."<<endl;
    cout << "Presiona enter cuando estes listo para que la pantalla se borre y el jugador 2 pueda empeza a adivinar." << endl;
    /* system("color 74"); */
    cout << "\nPalabra a adivinar: ";
    cin >> palabra_og;
    system("CLS");

    // Jugador 2
    int tamanoPalabra = palabra_og.length();
    cout << "\n\t La palabra a adivinar es la siguiente: " << endl;
    for (int x = 0; x < tamanoPalabra; x++) {
        cout << "_ ";
    }


    for (int i = 0; i < tamanoPalabra; i++) {
        cout << "\nLetra a ingresar: ";
        cin >> letra;
        cout << "\nLetra ingresada: " << letra << endl;
        for (int j = 0; j < tamanoPalabra; j++)
        {
            if (letra==palabra_og[j]){
                 cout << palabra_og[j];
                 aciertos = aciertos + 1;
            }
            else { cout << " _ "; }

        }
        cout << "\tAciertos: " << aciertos << endl;
        /* cout << "Aciertos totales: " << aciertos_t; */
        if (aciertos == tamanoPalabra)
        {
        break;
        cout << "\t Ganaste!!!" << endl;
        cout << "La palabra a adivinar era: " << palabra_og;
        }
    }

    cout << "\t Perdiste:(" << endl;
    cout << "La palabra a adivinar era: " << palabra_og;

}
