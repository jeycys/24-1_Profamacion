// ConsoleApplication1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// by julio

#include <iostream>
#include <locale.h>
#include <string>

int main()
{
    setlocale(LC_ALL, "ES_MX.UTF-8");
    std::string N[3];
    int A[3];
    std::string Autor[3];
    std::string Estudio[3];
    int caze = 0;


    std::cout << "Hola usuario!!\n Hoy guardaremos los datos de 3 de tus videojuegos favoritos \n";
    for (int i = 0; i <= 2; i++)
    {
        std::cout << " Nombre de tu videojuego favorito: ";
        getline(std::cin, N[i]);
        std::cout << "\n";
        std::cout << "Año en el que se creo: ";
        std::cin >> A[i];
        std::cout << "\n";
        std::cin.ignore();
        std::cout << "Autor del videojuego: ";
        getline(std::cin, Autor[i]);
        std::cout << "\n";
        std::cout << "Estudio que creo el videojuego: ";
        getline(std::cin, Estudio[i]);
        std::cout << "\n";
    }

    std::cout << "Los datos se guardaron correctamente" << std::endl;
    std::cout << "¿De que videojuego quieres consultar los datos completos de los ya guardados?  \n";
    std::cout << "1.- " << N[0] << std::endl;
    std::cout << "2.- " << N[1] << std::endl;
    std::cout << "3.- " << N[2] << std::endl;
    std::cin >> caze;
    std::cout << "\n";




    switch (caze)
    {
    case 1:
        std::cout << "El año en el que se creo " << N[0] << " Fue en: " << A[0] << std::endl;
        std::cout << "Nombre del autor: " << Autor[0] << std::endl;
        std::cout << "Nombre del estudio que creo el videojuego: " << Estudio[0];
        break;
    case 2:
        std::cout << "El año en el que se creo " << N[1] << " Fue en: " << A[1] << std::endl;
        std::cout << "Nombre del autor: " << Autor[1] << std::endl;
        std::cout << "Nombre del estudio que creo el videojuego: " << Estudio[1];
        break;
    case 3:
        std::cout << "El año en el que se creo " << N[2] << " Fue en: " << A[2] << std::endl;
        std::cout << "Nombre del autor: " << Autor[2] << std::endl;
        std::cout << "Nombre del estudio que creo el videojuego: " << Estudio[2];
        break;
    }










}


