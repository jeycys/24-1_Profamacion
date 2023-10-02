// P10_Condiconales_V0.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

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
    std::cout << "Hola usuario, para crear una nueva cuenta ingrese un usuario y su nueva contraseña\n";
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
        std::cout << "Tu usuario es correcto";

    }
    else
    {
        std::cout << "Tu usario es incorrecto, intentelo más tarde \n";
    }

    if (contra == contra2)
    {
        std::cout << ", tu contraseña es correcta";

    }
    else
    {
        std::cout << "La contraseña esta incorrecta, intentelo más tarde";
    }

    











}
