// P011_Condicionales_V0.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//  by julio
// se hizo un akinator

#include <iostream>
#include <string>

int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    std::string sino;
    bool adivina = false;
    std::cout << "Hola, soy tu amigo Akinator\n Intentare adivinar el color en el que estes pensando\n";
    std::cout << "las respuestas seran 0 para no y 1 para si\n";
    std::cout << "Estas listo??\n 0 - No \n 1 - Si\n";
    std::cin >> adivina;
    while (adivina)
    {
        std::cout << "¿Tu color esta relacionado con un arbol?";
        std::cin >> a;
        if (a == 1)
        {
            std::cout << "¿Tu color representa a una hoja?";
            std::cin >> a;
            if (a == 1)
            {
                std::cout << "Tu color es el verde";
            }
            else
            {
                std::cout << "Tu color es el marron";
            }
        }
        else
        {
            std::cout << "¿Tu color tiene que ver con el agua?";
            std::cin >> b;
            if (b == 1)
            {
                std::cout << "Tu color es el azul";
            }
            else
            {

                std::cout << "'Tu coloor tiene que ver con el jing y el yang?";
                std::cin >> c;
                if (c == 1)
                {
                    std::cout << "¿Tu color representa la maldad?";
                    std::cin >> c;
                    if (c == 1)
                    {
                        std::cout << "Tu color es el negro";
                    }
                    else
                    {
                        std::cout << "Tu color es el blanco";
                    }


                }
            }

        }
        std::cout << "\n¿Adivine?";
        std::cin >> sino;
        std::cout << "¿Quieres jugar otra vez?\n";
        std::cout << "1- SI\n 0-NO\n";
        std::cin >> adivina;
    }

}
