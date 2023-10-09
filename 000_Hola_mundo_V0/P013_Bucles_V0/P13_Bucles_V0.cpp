// ConsoleApplication1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// by julio
// se hizo un login

#include <iostream>
#include <string>
#include<locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "es_MX.UTF-8");
    string usu;
    string contra;
    string usu2;
    string contra2;


    std::cout << "Hola usuario, para crear una nueva cuenta ingrese un usuario y su nueva contraseña, no debe tener espacios\n";

    bool seguir = true;
    while (seguir)
    {
        std::cout << "\n--------------------------------------------------------------------------------------------\n";
        std::cout << "Ingrese su nuevo usuario:  ";
        std::cout << "\n";
        std::cin >> usu;
        std::cout << "Ahora ingrese su contraseña:  " << contra;
        std::cout << "\n";
        std::cin >> contra;
        std::cout << "Confirme su usario  su contraseña:\n";
        std::cin >> usu2;
        std::cout << "\n";
        std::cin >> contra2;


        if (usu == usu2)
        {
            std::cout << "Tu usuario es correcto\n";

        }
        else
        {
            std::cout << "Tu usario es incorrecto,  \n";
        }


        if (contra == contra2)
        {
            std::cout << "Tu contraseña es correcta\n";

        }
        else
        {
            std::cout << " La contraseña esta incorrecta\n";

        }

        std::cout << " ingrese 1- para volver a intentarlo\n ingrese 0- para salir\n";
        std::cin >> seguir;
    }

}