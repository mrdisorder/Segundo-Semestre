// pilas y colas.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Rodrigo Tapia Robles & Karen Michelle Aguilar Ortega

#include <iostream>
#include <cstdlib>
#include <stack>
#include <stdio.h>
#include <conio.h>
using namespace std;

//Procedimiento para imprimir
//aux es la variable auxiliar para titulos en el main.
//Tamanio es size en el main.
int imprimir(int * aux, int tamanio)
{
    for (int i = 0; i < tamanio; i++)
    {
       cout << " " << aux[i] << " ";
    }
     return 0;
}

// Pila
struct nodo {
    int dato;
    nodo* siguiente;
};

// prototipo funcion para saber si es primo o no
bool esPrimo(int pedir);

// funciones para meter  y sacar datos de las pilas
void agregarPila(nodo*&, int);
void sacarPila(nodo*&, int&);

int main()
{

//Arreglos de 1 dimensión dinamica
        //Declarar la variable auxiliar que creara el arreglo.
        int* arreglo = NULL;
        nodo* primos = NULL;
        nodo* noprimos = NULL;
        //Declaramos la variable del tamaño del arreglo
        int size;
        //Solicitamos el tamaño del arreglo al usuario
        cout << "Ingresa dimension del arreglo: ";
        cin >> size;
        //Crear el arreglo a partir del tamaño ingresado.
        arreglo = new int[size];

        //funcion para saber si es primo o no
        int pedir=0;

        //Metodo de captura de información.
        for (int i = 0; i < size; i++)
        {
            cout << "Ingresa numeros tanto como el programa lo solicite \nNumero:" << i + 1 << endl;
            cin >> arreglo[i];
            pedir = arreglo[i];
            if (esPrimo(pedir))
            {
                agregarPila(primos, pedir); //se manda a la pila de primos
                cout << "El elemento " << pedir << " ha sido agregado correctamente a la pila de primos." << endl;

            }
            else
            {
                agregarPila(noprimos, pedir); //se manda a la pila de no primos
                cout << "El elemento " << pedir << " ha sido agregado correctamente a la pila de no primos." << endl;
            }

        }
        // Función para limpiar la pantalla
        system("CLS"); 
        //Método de impresión
        //Llamar a la función imprimir, Enviar lo que se mostrara.
        cout << "El arreglo original quedo de la siguiente manera: " << endl;
        imprimir(arreglo, size);
        cout << endl;
        cout << "LA pila de primos quedo de la siguiente manera: " << endl; // saca lo que hay en la pila de primos
        while (primos != NULL) {
            sacarPila(primos, pedir);
            if (primos != NULL) {
                cout << " " << pedir<< " ";
            }
            else {
                cout << " " << pedir << " ";
            }
        }
        cout << endl;
        cout << "La pila de no primos quedo de la siguiente manera: " << endl; // saca lo que hay en la pila de no primos
        while (noprimos != NULL) {
            sacarPila(noprimos, pedir);
            if (noprimos != NULL) {
                cout << " " << pedir << " ";
            }
            else {
                cout << " " << pedir << " ";
            }
        }

        //Muy importante limpiar la memoria dinamica osea borrar los punteros y resetear
        //la variable a NULL
        delete[] arreglo;
        arreglo = NULL;
}

//Funcion para que se metan los datos a la pila
void agregarPila(nodo*& pila, int n) 
{
    nodo* nuevo_nodo = new nodo();
    nuevo_nodo->dato = n;
    nuevo_nodo->siguiente = pila;
    pila = nuevo_nodo;
}

//Funcion para que se saquen los datos de la pila
void sacarPila(nodo*& pila, int& n) {
    nodo* aux = pila;
    n = aux->dato;
    pila = aux->siguiente;
    delete aux;
}

// Funcion para saber si un numero es primo o no
bool esPrimo(int pedir)
{
    // Casos especiales
    if (pedir == 0 || pedir == 1 || pedir == 4) return false;
    for (int x = 2; x < pedir / 2; x++) {
        if (pedir % x == 0) return false;
    }
    // Si no se pudo dividir por ninguno de los de arriba, sí es primo
    return true;
};



