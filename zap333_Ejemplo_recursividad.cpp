// zap333_Ejemplo_recursividad.cpp
// Karen Michelle Aguilar Ortega---Fundamentos de programacion

#include <iostream>
using namespace std;

//prototipo de la funcion de recursividad
void comprobar(char r);

int main()
{
	//Pide al usuario que ingrese un numero
	char c;
	cout << "Porfavor presiona un numero : ";
	cin >> c;
	//Utiliza la recursividad hasta que combrobar que la tecla pulsada sea un nuemro
	comprobar(c);
	cout << "El programa ha terminado." << endl;
}

//Funcion de recursividad
void comprobar(char r)
{
	//Crea una conciodional en la cual si es un numero el cual fue presionado entonces el programa se detiene.
	int n = int(r);
	if (n >= 48 and n <= 57)
	{
		cout << "La tecla que presionaste es un numero. FELICIDADES!! ves, no era tan dificil." << endl;
	}
	//En caso se que no se ingrese un numero entonces dira al usuario que ingrese un numero y lo volvera a comprobar asi sucesivamente hasta que el usuario ingrese un numero
	else
	{
		cout << "La tecla que presionaste NO es un numero." << endl;
		cout << "Presiona un NUMERO porfavor: ";
		cin >> r;
		comprobar(r);
	}
}

