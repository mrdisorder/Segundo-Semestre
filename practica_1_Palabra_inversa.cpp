// practica 1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <cstring>
#include <cstdlib>
#include <string>
#include <stack>

using namespace std;

//Creamos el nodo que se guardara en nuestra pila
struct nodo {
    string new_string;

    nodo* siguiente;
};

//Funciones para agregar datos a la pila y sacarlos
void agregarPila(nodo*&, string);
void sacarPila(nodo*&, string&);

int main() {
    nodo* pila = NULL;
    
    //Pedimos al usuario que ingrese la palabra que se almacenara
    string string, new_string;
    cout << "introduzca una cadena: ";
    getline(cin, string);

    //Con un ciclo cambiamos la palabra a inversa
    for (int i = string.length(); i >= 0; i--) {
        new_string += string[i];
    }

    //La palabra se agrega a la pila
    agregarPila(pila, new_string);

    //Se muestra los datos que se almacenaron en la pila
    cout << "Sacando todos los elementos de Pila: ";
    while (pila != NULL) {
        sacarPila(pila, new_string);
        if (pila != NULL) {
            cout << new_string << endl;
        }
        else {
            cout << new_string << endl;
        }
    }

    return 0;
}

//Funcion para que se agreguen los datos a la pila
void agregarPila(nodo*& pila, string nuevostr) {
    nodo* nuevo_nodo = new nodo();
    nuevo_nodo->new_string = nuevostr;
    nuevo_nodo->siguiente = pila;
    pila = nuevo_nodo;
}

//Funcion para que se saquen los datos de la pila
void sacarPila(nodo*& pila, string& nuevostr) {
    nodo* aux = pila;
    nuevostr = aux->new_string;
    pila = aux->siguiente;
    delete aux;
}
