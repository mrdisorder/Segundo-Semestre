// arbol binario.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
#include <iostream>
#include <cstdlib>
using namespace std;

struct nodo {
    int fuerza;
    int tipo;
    struct nodo* izq, * der;
};

typedef struct nodo* ABB;
/* es un puntero de tipo nodo que hemos llamado ABB, que ulitizaremos
   para mayor facilidad de creacion de variables */

ABB crearNodo(int x,int y)
{
    ABB nuevoNodo = new(struct nodo);
    nuevoNodo->fuerza = x;
    nuevoNodo->tipo = y;
    nuevoNodo->izq = NULL;
    nuevoNodo->der = NULL;

    return nuevoNodo;
}
void insertar(ABB& arbol, int x, int y)
{
    if (arbol == NULL)
    {
        arbol = crearNodo(x, y);
    }
    else {
        if (arbol->tipo == 1)
        {
            if (y == 3) {
                insertar(arbol->izq, x, y);
            }
            if (y == 2) {
                insertar(arbol->der, x, y);
            }
            if (y == arbol->tipo) {
                if (x < arbol->fuerza) {
                    insertar(arbol->izq, x, y);
                }
                else {
                    insertar(arbol->der, x, y);
                }
            }
        }
        if (arbol->tipo == 2) {
            if (y == 1) {
                insertar(arbol->izq, x, y);
            }
            if (y == 3) {
                insertar(arbol->der, x, y);
            }
            if (y == arbol->tipo) {
                if (x < arbol->fuerza) {
                    insertar(arbol->izq, x, y);
                }
                else {
                    insertar(arbol->der, x, y);
                }
            }
        }
        if (arbol->tipo == 3) {
            if (y == 2) {
                insertar(arbol->izq, x, y);
            }
            if (y == 1) {
                insertar(arbol->der, x, y);
            }
            if (y == arbol->tipo) {
                if (x < arbol->fuerza) {
                    insertar(arbol->izq, x, y);
                }
                else {
                    insertar(arbol->der, x, y);
                }
            }
        }
    }

}

void preOrden(ABB arbol)
{
    if (arbol != NULL)
    {
        cout << arbol->fuerza << " ";
        preOrden(arbol->izq);
        preOrden(arbol->der);
    }
}

void enOrden(ABB arbol) // 
{
    if (arbol != NULL)
    {
        enOrden(arbol->izq);
        cout << arbol->fuerza << " ";
        enOrden(arbol->der);
    }
}

void postOrden(ABB arbol) // tipo
{
    if (arbol != NULL)
    {
        postOrden(arbol->izq);
        postOrden(arbol->der);
        cout << arbol->fuerza << " ";
    }
}

void verArbol(ABB arbol, int n)
{
    if (arbol == NULL)
        return;
    verArbol(arbol->der, n + 1);

    for (int i = 0; i < n; i++)
        cout << "   ";

    cout  << arbol->fuerza << endl;

    verArbol(arbol->izq, n + 1);
}

int main()
{
    ABB arbol = NULL;   // creado Arbol

    int n;  // numero de nodos del arbol
    int x; // elemento a insertar en cada nodo
    int y;

    cout << "\n\t\t  ..[ ARBOL BINARIO DE BUSQUEDA ]..  \n\n";

    cout << " Numero de pokemon a comparar:  ";
    cin >> n;
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "Fuerza del Pokemon " << i + 1 << ": ";
        cin >> x;
        cout << "Tipo del Pokemon " << i + 1 << ": ";
        cout << "1. FUEGO || 2. AGUA || 3. PLANTA" << endl;
        cin >> y;
        insertar(arbol, x,y);
/*
    cout << "Seleccione el tipo de su pokemon:" << endl;
    cout << "1. FUEGO || 2. AGUA || 3. PLANTA" << endl;
    cin >> tipo;
    switch (tipo)
    {
    case 1:
        cout << "Has elegido pokemon tipo FUEGO";
        cout << endl;
        break;
    case 2:
        cout << "Has elegido pokemon tipo AGUA";
        cout << endl;
        break;
    case 3: 
        cout << "Has elegido pokemon tipo PLANTA";
        cout << endl;
        break;
    }
*/
    }

    cout << "\n Mostrando ABB \n\n";
    verArbol(arbol, 0);

    cout << "\n Recorridos del ABB";

    cout << "\n\n En orden   :  ";   enOrden(arbol);
    cout << "\n\n Pre Orden  :  ";   preOrden(arbol);
    cout << "\n\n Post Orden :  ";   postOrden(arbol);

    cout << endl << endl;

    system("pause");
    return 0;
}
