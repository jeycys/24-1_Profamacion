// P005_Aritmetrcos_V0.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// by julio
// se hizo una calculadora completita

#include <iostream>
#include <math.h>


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

    std::cout << "Ingrese dos numeros para sacar suma, resta, multiplicacion, division, exponente (el segundo numero sera la potencia) y la raiz cuadrada\n";
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

    std::cout << "El resultado de la suma es: " << suma << std::endl;
    std::cout << "El resultado de la resta es: " << resta << std::endl;
    std::cout << "El resultado de la multiplicacion es: " << multi << std::endl;
    std::cout << "El resultado de la division es: " << divi << std::endl;
    std::cout << "El resultado del exponente de " << n1 << " que es " << n2 << " es " << expo << std::endl;
    std::cout << "El resultado de la raiz de " << suma << " es " << raiz;
















































}

