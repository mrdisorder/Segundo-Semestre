// operacion 5.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//


#include <iostream>
#include <math.h> // Librería para operaciones matemáticas básicas.
using namespace std;
int m;
int n;
float r;
float div1;
int sum1;
int pot1;
float raiz;
float div2;

int main()
{
	cout << "           Calcularemos la siguiente operacion: " << endl;
	cout << "          ( ( m / n )  ^  ( n + m ) ) /  raiz de m = R " << endl;
	cout << endl;
	cout << endl;
	cout << "Ingresa el valor de m: ";
	cin >> m;
	cout << "El valor ingresado para m es: " << m << endl;
	cout << endl;
	cout << "Ingresa el valor de n: ";
	cin >> n;
	cout << "El valor ingresado para n es: " << n << endl;
	cout << endl;
	cout << "Sustituimos los valores ingresados en la operacion: " << endl;
	cout << endl;
	cout << "( ( " << m << " / " << n << " ) ^ ( " << n << " + " << m << " ) ) / raiz de " << m << " = R" << endl;
	cout << endl;

	// aca empiezan las operaciones


	// division 1 m/n
	cout << "Empezaremos dividiendo " << m << " entre " << n << endl;
	cout << "El resultado de " << m << " / " << n << " es: " << m / n << endl;
	div1 = m / n;
	cout << endl;
	cout << "Nuestra operacion va asi: " << "( ( " << div1 << " ) ^ ( " << n << " + " << m << " ) ) / raiz de " << m << " = R" << endl;
	cout << endl;

	// suma de n+m
	cout << "Sumemos " << n << " + " << m << " para calcular a que potencia elevaremos " << div1 << endl;
	cout << "El resultado de " << n << " + " << m << " es: " << n + m << endl;
	sum1 = n + m;
	cout << endl;
	cout << "Nuestra operacion va asi: " << "( ( " << div1 << " ) ^ ( " << sum1 << " ) ) / raiz de " << m << " = R" << endl;
	cout << endl;

	// elevar a potencia 
	cout << "Elevemos " << div1 << " a la " << sum1 << endl;
	cout << "El resultado de " << div1 << " a la " << sum1 << " es: " << pow(div1, sum1) << endl;
	pot1 = pow(div1, sum1);
	cout << endl;
	cout << "Nuestra operacion va asi: " << "( " << pot1 << " ) / raiz de " << m << " = R" << endl;
	cout << endl;

	// raiz
	cout << "Ahora calculemos la raiz de " << m << endl;
	cout << "La raiz de " << m << " es: " << pow(m, (1 / 2)) << endl;
	raiz = pow(m, (1 / 2));
	cout << endl;
	cout << "Nuestra operacion va asi: " << "( " << pot1 << " ) / " << raiz << " = R" << endl;
	cout << endl;

	// division
	cout << "Por ultimos dividiremos " << pot1 << " entre " << raiz << endl;
	cout << "El resultado de " << pot1 << " / " << raiz << " es: " << pot1 / raiz << endl;
	r = pot1 / raiz;
	cout << endl;
	cout << "Nuestro resultado seria: " << r << endl;
	cout << endl;
}