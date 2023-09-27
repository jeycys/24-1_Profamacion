// P008_Decisiones_V0.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <locale>
#include <string>

int main()
{
	setlocale(LC_ALL, "es_MX.UTF-8");
	
	bool d1, d2;
	std::string opc1 = "te quedaste en casa (huevas)", opc2 = "Fuiste a clases";
	std::cout << "Tienes clase a las 7:30 de la mañana\n";
	std::cout << "¿Vas a asistir? \n";
	std::cout << "1 - si\n";
	std::cout << "0 - no\n";
	std::cin >> d1;
	if (d1 == true)
	{
		std::cout << "Muy biemn, eres un chico/a muy responsable\n";
		std::cout << "Ya estas en la escuela, pero....\n";
		std::cout << "¿Asistiras a clases o te iras de vago con tus amigos?\n";
		std::cout << "1 - si\n";
		std::cout << "0 - no\n";
		std::cin >> d2;
		if (d2 == true)
		{
			std::cout << "Preeferiste la diversion antes que el estudio (yo haria lo mismo)";
		}




	}
	else
		std::cout << opc1;









































}
