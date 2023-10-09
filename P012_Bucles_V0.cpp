// P012_Bucles_V0.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// by julio
// se hizo un contador del 100 al 0 antes de que se muera el jugador
#include <iostream>
#include <Windows.h>


int main()
{
    bool continuar = false;
    bool continuar1 = false;
    bool continuar2 = false;
    int i = 10;
    int i1 = 10;
    int i2 = 10;
    std::cout << "Binevenido, te moriste\n";

    std::cout << "¿Quieres continuar?\n 1- SI\n 0- NO\n";
    std::cin >> continuar;
    while (continuar == true)
    {
        std::cout << "Te quedan 2 vidas, ¿Deseas continuar?\n";
        std::cin >> continuar1;
        if (continuar1 == 0)
        {
            for (i = 10; i <= 100; i++)
                std::cout << "---------------------------------GAME OVER---------------------------------------------";
            std::cout << "\n¿Te gustaria reiniciar desde el ultimo punto de carga?\n";
            std::cin >> continuar;
        }
        else
        {
            std::cout << "Te queda 1 vida, ¿Desaeas continuar?\n";
            std::cin >> continuar2;
            if (continuar2 == 1)
            {
                for (i1 = 10; i1 <= 100; i1++)
                    std::cout << i1 << std::endl;
                std::cout << "HAS MUERTO\n";
                std::cout << "¿Deseas reiniciar la partida?\n";
                std::cin >> continuar;
                

            }
            else
            {
                for(i2=10; i2<=100; i2++)
                std::cout << "-----------------------------------GAME OVER--------------------------------------------------\n";
                std::cout << "¿Deseas reiniciar la partida?\n";
                std::cin >> continuar;
            }
        }
    }
}