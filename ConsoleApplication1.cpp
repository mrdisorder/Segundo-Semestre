// ConsoleApplication1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Karen Aguilar

#include <iostream>
#include <conio.h>
using namespace std;

void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)

        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
}

void imprimir(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void buscar(int arr[])
{
    int busq;
    int band = 0;
    cout << "\n\tIngresa el numero a buscar: ";
    cin >> busq;

    for (int i = 0; i < 6; i++)
    {
        if (arr[i] == busq)
        {
            band = 1;
            cout << "Numero encontrado." << endl;
            cout << endl;
            cout << endl;

            cout << "\nSe encontro en la posicion " << i+1 << endl;

        }

        if (band == 0)
        {
            cout << "Numero no encontrado";

        }
    }

}

void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int divide(int arr[], int low, int high)
{
    int pivot = arr[high]; // pivote
    int i = (low - 1); 

    for (int j = low; j <= high - 1; j++)
    {
       
        if (arr[j] < pivot)
        {
            i++; 
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = divide(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

void merge(int*, int, int, int);
void merge_sort(int* arr, int low, int high)
{
    int mid;
    if (low < high) {
        
        mid = (low + high) / 2;
        merge_sort(arr, low, mid);
        merge_sort(arr, mid + 1, high);
        
        merge(arr, low, high, mid);
    }
}

void merge(int* arr, int low, int high, int mid)
{
    int i, j, k, c[10];
    i = low;
    k = low;
    j = mid + 1;
    while (i <= mid && j <= high) {
        if (arr[i] < arr[j]) {
            c[k] = arr[i];
            k++;
            i++;
        }
        else {
            c[k] = arr[j];
            k++;
            j++;
        }
    }
    while (i <= mid) {
        c[k] = arr[i];
        k++;
        i++;
    }
    while (j <= high) {
        c[k] = arr[j];
        k++;
        j++;
    }
    for (i = low; i < k; i++) {
        arr[i] = c[i];
    }
}

void heapify(int arr[], int n, int i)
{
    int largest = i; 
    int l = 2 * i + 1; 
    int r = 2 * i + 2; 

    
    if (l < n && arr[l] > arr[largest])
        largest = l;

    
    if (r < n && arr[r] > arr[largest])
        largest = r;

    
    if (largest != i) {
        swap(arr[i], arr[largest]);

        
        heapify(arr, n, largest);
    }
}

void heapSort(int arr[], int n)
{
    
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    
    for (int i = n - 1; i >= 0; i--) {
        
        swap(arr[0], arr[i]);
        
        heapify(arr, i, 0);
    }
}

int main()
{
    int arr[10]; // arreglo 
    int opc;
    bool correct = true;
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "\t\tBienvenidx, ingresa los datos que estaran dentro del arreglo: " << endl;
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }
    
    cout << "\tEste es el arreglo con el que trabajaremos:" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << "   [" << arr[i] << "]   ";
    }
    _getch();
    system("CLS");

    do
    {
    cout << "\t\tOrganicemos los datos, ingresa el numero del metodo por el cual te gustaria organizar tu arreglo: " << endl;
    cout << endl;
    cout << "\t1. Bubble sort" << endl;
    cout << "\t2. Insertion sort" << endl;
    cout << "\t3. Quick sort" << endl;
    cout << "\t4. Merge sort" << endl;
    cout << "\t5. Heap sort" << endl;

    cin >> opc;
    system("CLS");
        switch (opc)
        {
        case 1: // bubble sort
            bubbleSort(arr, n);
            cout << "\tAsi nos queda el arreglo: " << endl;
            imprimir(arr, n);

            _getch();
            buscar(arr);
            return 0;
            break;
        case 2: // insertion sort
            insertionSort(arr, n);
            cout << "\tAsi nos queda el arreglo: " << endl;
            imprimir(arr, n);

            _getch();
            buscar(arr);
            return 0;
            break;
        case 3: // quick sort
            quickSort(arr, 0, n - 1);
            cout << "\tAsi nos queda el arreglo: " << endl;
            imprimir(arr, n);

            _getch();
            buscar(arr);
            return 0;
            break;
        case 4: // merge sort
            merge_sort(arr, 0, n - 1);
            cout << "\tAsi nos queda el arreglo: " << endl;
            imprimir(arr, n);

            _getch();
            buscar(arr);
            return 0;
            break;
        case 5: // heap sort
            heapSort(arr, n);
            cout << "\tAsi nos queda el arreglo: " << endl;
            imprimir(arr, n);

            _getch();
            buscar(arr);
            return 0;
            break;
        default: //  en caso de que el usuario ingrese alguna otra cosa
            cout << "Opcion no valida, por favor elige una de las opciones dadas." << endl;
            _getch();
            system("CLS");
            correct = false; // vuelve al bool correct en falso, haciendo que se repita la lista de opciones, hasta que el usuario ingrese una ópcion valida
            break;
        }
    } while (correct == false);
}

