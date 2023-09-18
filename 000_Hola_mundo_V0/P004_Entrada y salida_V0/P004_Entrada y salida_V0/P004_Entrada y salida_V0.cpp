// P004_Entrada y salida_V0.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.

#include <iostream>
#include <locale.h>
#include <string>

int main()
{
    setlocale(LC_ALL, "es_MX.UTF-8");
    bool sintoma1, sintoma2, sintoma3;
    std::string nombre;
    std::string relato;
    char sexo;
    int edad;
    int peso;
    float altura;
    float IMC;
    std::cout << " Bienvenido al consultorio del DOC. JULIO\n";
    std::cout << "¿Cual es su nombre?  ";
    getline(std::cin, nombre);
    std::cout << "\n";
    std::cout << "Muy bien " << nombre << " ¿cual es tu sexo? \n ";
    std::cout << "H o M \n";
    std::cin >> sexo;
    std::cout << "\n";
    std::cout << "Okay " << nombre << " cuentame lo que te pasa  \n";
    std::cin.ignore();
    getline(std::cin, relato);
    std::cout << "\n";
    std::cout << nombre << " para saber bien que te ocurre te voy a hacer tres preguntitas rapidas, porfavor responda con 0 para no y un 1 si es un si\n";
    std::cout << "¿Tienes alguna molestia en los huesos?  ";
    std::cin >> sintoma1;
    std::cout << "\n";
    std::cout << "¿Tienes alguna molestia en la cabeza?  ";
    std::cin >> sintoma2;
    std::cout << "\n";
    std::cout << "Y la ultima pregunta ¿Has estado bebiendo ultimamente? ";
    std::cin >> sintoma3;
    std::cout << "\n";
    std::cout << "Okay " << nombre << " para finalizar te voy a hacer las siguientes preguntas" << std::endl;
    std::cout << "¿Cuanto pesas?  ";
    std::cin >> peso;
    std::cout << "\n";
    std::cout << "¿Cuanto mides? ";
    std::cin >> altura;
    std::cout << "\n";
    std::cout << "Te dare tu indice de masa corporal (IMC):  " << peso / (altura / 100 * altura / 100);
    std::cout << "\n";
    std::cout << "Muchas gracias por su visita, a mi parecer mo tiene nada pero le dare unos medicamentos que hara qeu se sienta           mucho mejor :) ";
    







    


    





























}