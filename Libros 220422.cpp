// Libros 220422.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// KAREN AGUILAR Y RODRIGO TAPIA

#include <iostream>
#include <cstdlib>
#include <conio.h>
using namespace std;


struct Libros
{
public:
    int ISBN;
    string nombre;
    int nPag;
    string autor;
};

Libros book[6];
void leerDatos(); // PROTOTIPO PARA LEER DATOS
void imprimirDatos(); // PROTOTIPO PARA IMPRIMIRLOS
void quicksort(int start, int end); // PROTOTIPO PARA EL QUICKSORT
int divide(int start, int end); 
void buscar(); // PROTOTIPO PARA BUSCAR LOS LIBROS

int main() 
{
     Libros book[6];
     int busq;

     leerDatos();
     quicksort(0, 6 - 1);
     imprimirDatos();
     _getch();
     system("CLS");
     buscar();


    return 0;
}

void leerDatos() // ESTA FUNCION LEE Y ASIGNA LOS DATOS DE CADA LIBRO EN EL ARRAY
{
    cout << "Ingrese los siguientes datos de cada libro: " << endl;
    cout << endl;
    for (int i = 0; i < 6; i++)
    {
        cout << "Libro " << i + 1 << endl;
        cout << "ISBN: ";
        cin >> book[i].ISBN;
        cout << "Nombre: ";
        cin >> book[i].nombre;
        cout << "Numero de paginas: ";
        cin >> book[i].nPag;
        cout << "Nombre del autor: ";
        cin >> book[i].autor;
        cout << endl;

        system("cls");
    }
}

void imprimirDatos() // ESTA FUNCION IMPRIME LOS DATOS DENTRO DEL ARRAY
{
    for (int i = 0; i < 6; i++)
    {
        cout << "\nNombre: " << book[i].nombre << endl;
        cout << "Nombre del autor: " << book[i].autor << endl;
        cout << "ISBN: " << book[i].ISBN << endl;
        cout << "Numero de paginas: " << book[i].nPag << endl;
        cout << endl;
    }
}

void quicksort(int start, int end) { // AQUI ESTA EL QUICKSORT
    int pivot;

    if (start < end) {
        pivot = divide(start, end);

        quicksort(start, pivot - 1);
        quicksort(pivot + 1, end);
    }
}

int divide(int start, int end) { // ESTO DIVIDE EL ARRAY PARA SORTEARLO
    int left;
    int right;
    int pivot;
    Libros temp;

    pivot = book[start].ISBN;
    left = start;
    right = end;

    while (left < right) {
        while (book[right].ISBN > pivot) {
            right--;
        }

        while ((left < right) && (book[left].ISBN <= pivot)) {
            left++;
        }
        if (left < right) {
            temp = book[left];
            book[left] = book[right];
            book[right] = temp;
        }
    }
    temp = book[right];
    book[right] = book[start];
    book[start] = temp;

    return right;
}


void buscar() // AQUI SE BUSCA EL LIBRO INGRESADO
{
    int busq;
    int band=0;
    cout << "Ingresa el ISBN del libro a buscar: ";
    cin >> busq;

    for (int i = 0; i < 6; i++)
    {
        if (book[i].ISBN == busq)
        {
            band = 1;
            cout << "Libro encontrado." << endl;
            cout << endl;
            cout << endl;

            cout << "\nNombre: " << book[i].nombre << endl;
            cout << "Nombre del autor: " << book[i].autor << endl;
            cout << "ISBN: " << book[i].ISBN << endl;
            cout << "Numero de paginas: " << book[i].nPag << endl;
            cout << endl;

        }

        if (band == 0)
        {
            cout << "Libro no encontrado";

        }

    }
}
