// punteros.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <stdio.h>
#include <ctype.h>
#include <conio.h>
#include <stdlib.h>
using namespace std;

main()
{
	char palabra[20];
	int a=0, e=0, i=0, o=0, u=0;

	printf("Ingresa una palabra, yo te dire cuantas vocales contiene: ");
	cin.getline(palabra, 20, '\n');

	for (int x; x < 20; x++)
	{
		switch (palabra[x])
		{
		case 'a': a++; break;
		case 'e': e++; break;
		case 'i': i++; break;
		case 'o': o++; break;
		case 'u': u++; break;
		}
	}

	printf("A: %d\n", a);
	printf("E: %d\n", e);
	printf("I: %d\n", i);
	printf("O: %d\n", o);
	printf("U: %d\n\n\n", u);

	system("pause");
}
