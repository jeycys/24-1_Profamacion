// P009_Condicionales_V0.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// by julio
// se hizo una pequeña calculadora

#include <iostream>
#include <math.h>
#include <cmath>


int main()
{
    int n1 = 0;
    float n2 = 0;
    float suma = 0;
    float resta = 0;
    float multi = 0;
    float divi = 0;
    float expo = 0;
    float raiz = 0;
    float abss = 0;
    float mayorq = 0;

    std::cout << "Ingrese dos numeros para sacar suma, resta, multiplicacion, division, exponente (el segundo numero sera la potencia), la raiz cuadrada, el valor absoluto y mayor que menor que: \n";
    bool seguir = true;
    while (seguir)
    {
        std::cout << "Ingrese 2 numeros\n";
        std::cin >> n1;
        std::cout << "\n";
        std::cin >> n2;
        std::cout << "\n";
        std::cout << "\n";
        suma = n1 + n2;
        resta = n1 - n2;
        multi = n1 * n2;
        divi = n1 / n2;
        expo = std::pow(n1, n2);
        raiz = sqrt(suma);
        abss = abs(suma);

        std::cout << "El resultado de la suma es: " << suma << std::endl;
        std::cout << "El resultado de la resta es: " << resta << std::endl;
        std::cout << "El resultado de la multiplicacion es: " << multi << std::endl;
        std::cout << "El resultado de la division es: " << divi << std::endl;
        std::cout << "El resultado del exponente de " << n1 << " que es " << n2 << " es " << expo << std::endl;
        std::cout << "El resultado de la raiz de " << suma << " es " << raiz << std::endl;
        std::cout << "El valor absoluto de la suma es " << abss << std::endl;
        if (n1 < n2)
        {
            std::cout << n1 << " es menor que " << n2;
        }
        else
        {
            std::cout << n2 << " es menor que " << n1;
        }
        std::cout << "\n¿Quieres hacerlo otra vez con otros numeros?\n 1-si\n 0-no\n";
        std::cin >> seguir;
    }
}
