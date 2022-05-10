// ejercicio1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    string str2;

    cout << "Ingresa la cadena base: " << endl;
    getline(cin, str);

    cout << "\nEsta es la cadena base: " << str << endl;
    cout << endl;
    cout << "Ingresa la palabra a buscar: " << endl;
    cin >> str2;

    size_t found = str.find(str2);
    if (found != string::npos) {
        cout << "\nLa palabra ha sido encontrada en: " << found << '\n';
    }

    return 0;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
