// polimorfismo.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>
using namespace std;

class Personaje {
private:
	string nombre;
	int HP;

public:
	Personaje(string, int);
	virtual void mostrar();
};

Personaje::Personaje(string _nombre, int _HP) {
	nombre = _nombre;
	HP = _HP;
}

void Personaje::mostrar() {
	cout << "Nombre: " << nombre << endl;
	cout << "HP: " << HP << endl;

	if (HP >= 100) {
		cout << "Woooow, que grande." << endl;
	}
};

class Lightner : public Personaje {
private:
	string raza;
public:
	Lightner(string, int, string);
	void mostrar();
};

Lightner::Lightner(string _nombre, int _HP, string _raza) : Personaje(_nombre, _HP) {
	raza = _raza;
};

void Lightner::mostrar() {
	Personaje::mostrar();
	cout << "Raza: " << raza << endl;
};

class Darkner : public Personaje {
private:
	int chapter;
public:
	Darkner(string, int, int);
	void mostrar();
};

Darkner::Darkner(string _nombre, int _HP, int _chapter) : Personaje(_nombre, _HP) {
	chapter = _chapter;
}

void Darkner::mostrar() {
	Personaje::mostrar();
	cout << "Chapter: " << chapter << endl;
};

int main()
{
	Personaje* arreglo[4];

	arreglo[0] = new Lightner("Kris", 120, "humano");
	arreglo[1] = new Lightner("Susie", 140, "monstruo");
	arreglo[2] = new Lightner("Ralsei", 100, "monstruo");
	arreglo[3] = new Darkner("Lancer", 100, 1);

	arreglo[0]->mostrar();
	cout << endl;
	arreglo[1]->mostrar();
	cout << endl;
	arreglo[2]->mostrar();
	cout << endl;
	arreglo[3]->mostrar();
	cout << endl;

	return 0;
}

