// P007_Decisiones.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// by julio
// se hizo una toma de decisiones en la wwe

#include <iostream>

int main()
{
        int n10 = 10;
        int n20 = 20;
        int n30 = 30;
        int np;
        int RB = 1 ;
        int EL = 2 ;
        int grupos = 3  ;
        int tdp;
        int opc = 3;



        std::cout << "Hola usuario, seleccione cunatos luchadores quiere en su numero de luchadores \n";
        std::cout << n10 << std::endl;
        std::cout << n20 << std::endl;
        std::cout << n30 << std::endl;
        std::cout << "------- ";  
        std::cin >> np;

        std::cout << "La cantidad de peleadores que usted eligio es " << np;
        std::cout << "\n";

        std::cout << "Ahora seleccione su modo de pelea (1, 2 o 3)\n";
        std::cout << RB << "- Royal Rumle" << std::endl;
        std::cout << EL << "- Eliminacion " << std::endl;
        std::cout << grupos << "- fase de grupos" << std::endl;
        std::cout << "------- ";
        std::cin >> tdp;
       

        if (tdp == 1)
        {
            std::cout << "Usted eligio el modo royal rumble\n";
            std::cout << "royal rumble es un modo todos contra todos, el  numero de peleadores es " << np;
            std::cout << "\n";
            std::cout << "Tendra un solo combate de tiempo indefinido contra todos los peleadores, el ganador sera el ULTIMO EN PIE";

        }
        
        if (tdp == 2)
        {
            std::cout << "usted eligio el modo eliminatoria\n";
            std::cout << "Es el modo de combate que todos conocemos, un 1 contra 1, 2 contra 2. Con el numero de " << np << " peleadores\n";
            std::cout << "Tendra lugar un solo combate de maximo 3 horas\n";
            std::cout << "El ganador se decidira cuando algun contrincante se rinda";
        }

        if (tdp == 3)
        {
          
            std::cout << "Usted eligio el modo de fase de grupos\n ";
            std::cout << "El numero de peleadores es " << np;
            if (np == 10)
            {
                std::cout << " Seran 4 combates para poder coronar a un equipo ganador, habran equipos de 2";
            }
            if (tdp == 20)
            {
                 std::cout << " seran 9 combates para poder elegir un ganador";
            }
            if (tdp == 30)
            {
                 std::cout << " Sera un total de 26 combates para poder coronar a un ganador";
            }
            
        }


















}
