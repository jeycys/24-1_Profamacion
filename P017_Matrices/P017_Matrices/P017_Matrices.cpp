// P017_Matrices.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// by julio

#include <iostream>
#include <windows.h>

int main()
{

    
    int unidades[1][1];
    bool si = true;
    std::cout << "HOLA USUARIO!!";
    std::cout << "Haremos unas tablas, decide el tamaño: " << std::endl;
    while (si == true)
    {
        std::cout << "1) 3X3" << std::endl;
        std::cout << "2) 5X5" << std::endl;
        std::cout << "3) 10X10" << std::endl;
        int decition;
        std::cout << "Su eleccion: ";
        std::cin >> decition;
        std::cout << "\n";

        if (decition == 1)
        {
            int unidades[3][3];
            int filas = sizeof(unidades) / sizeof(unidades[0]);
            std::cout << "El numero de filas es: " << filas << std::endl;
            int columnas = sizeof(unidades[0]) / sizeof(unidades[0][0]);
            std::cout << "El numero de columnas es: " << columnas << std::endl;

            for (int i = 0; i < filas; i++)
            {

                for (int j = 0; j < columnas; j++)
                {
                    unidades[i][j] = rand() % 9;
                    std::cout << unidades[i][j] << " ";
                    Sleep(200);
                }
                std::cout << "\n";
            }
            std::cout << "\n";
            std::cout << "\n";
            std::cout << "¿Quiere elejir otra tabla? " << std::endl;
            std::cout << "1) SI" << std::endl;
            std::cout << "0) NO" << std::endl;
                std::cin >> si;
        }
        if (decition == 2)
        {
            int unidades[5][5];
            int filas = sizeof(unidades) / sizeof(unidades[0]);
            std::cout << "El numero de filas es: " << filas << std::endl;
            int columnas = sizeof(unidades[0]) / sizeof(unidades[0][0]);
            std::cout << "El numero de columnas es: " << columnas << std::endl;

            for (int i = 0; i < filas; i++)
            {

                for (int j = 0; j < columnas; j++)
                {
                    unidades[i][j] = rand() % 9;
                    std::cout << unidades[i][j] << " ";
                    Sleep(200);
                }
                std::cout << "\n";
            }
            std::cout << "\n";
            std::cout << "\n";
            std::cout << "¿Quiere elejir otra tabla? " << std::endl;
            std::cout << "1) SI" << std::endl;
            std::cout << "0) NO" << std::endl;
                std::cin >> si;
        }
        if (decition == 3)
        {
            int unidades[10][10];
            int filas = sizeof(unidades) / sizeof(unidades[0]);
            std::cout << "El numero de filas es: " << filas << std::endl;
            int columnas = sizeof(unidades[0]) / sizeof(unidades[0][0]);
            std::cout << "El numero de columnas es: " << columnas << std::endl;

            for (int i = 0; i < filas; i++)
            {

                for (int j = 0; j < columnas; j++)
                {
                    unidades[i][j] = rand() % 9;
                    std::cout << unidades[i][j] << " ";
                    Sleep(200);
                }
                std::cout << "\n";
            }
            std::cout << "\n";
            std::cout << "\n";
            std::cout << "¿Quiere elejir otra tabla? " << std::endl;
            std::cout << "1) SI" << std::endl;
            std::cout << "0) NO" << std::endl;
                std::cin >> si;
        }
    }
}

