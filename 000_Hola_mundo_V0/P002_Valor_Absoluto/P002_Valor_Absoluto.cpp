// P002_Valor_Absoluto.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// by julio
// se hizo una "calculadora" a medias, de solo sacar el valor absoluto de un  número

#include <iostream>
#include <math.h>
#include <cmath>

int main()
{

    float N1;
   

    std::cout << "Hola usario, ¿de que nnumero quieres saber el valor absoluto?  ";
    std::cin >> N1;
    std::cout << "\n";
    std::cout << "El valor absoluto de su numero es: " << abs(N1);

}


