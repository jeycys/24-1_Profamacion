#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "es_MX.UTF-8");
	int N = 0;
	cout << "Dame  un número de base \n";
	cin >> N;
	int contador = 3;
		for (int i = 0; i <= N; i++)
		{
			contador = contador + 4;
		for (int j = 0; j <= N; j++)
		{
			contador = contador + 4;
			for (int k = 0; k <= N; k++)
			{	
				cout << i;
				cout << j;
				cout << k << endl;
				contador = contador + 7;
			}
		}
		}

	cout << "Numeros impresos: " << contador << endl;






	system("Pause");
}

