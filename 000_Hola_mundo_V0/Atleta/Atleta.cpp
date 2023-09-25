#include <stdlib.h>
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "es_MX.UTF-8");
	int ArregloOrd[9] = { 1,3,7,15,19,24,31,38,40 };
	int buscar, j = 0;
	cout << "¿Qué número entero buscas? \n";
	cin >> buscar;
	while (ArregloOrd[j] < buscar && j <9)
	{
		j = j + 1;
		
	}
	if (ArregloOrd[j]==buscar)
	{
		cout << "El número está en el arreglo \n";
	}
	else
	{
		cout << "El número no se encuentra \n";
	}
	
	system("PAUSE");
	return EXIT_SUCCESS;
	}

//Complejidad de un algoritmo
