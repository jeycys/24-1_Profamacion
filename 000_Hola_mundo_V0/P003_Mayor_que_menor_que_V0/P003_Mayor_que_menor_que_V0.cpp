// P003_Mayor_que_menor_que_V0.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// by julio
// se le pidio al usuario datos para cosas simples


#include <iostream>
#include <locale>
#include <string>

int main()
{
    setlocale(LC_ALL, "es_MX.UTF-8");
    int mayore;
    //Sintaxys de IF-ELSE
    std::cout << "hola brother bienvenido al oxxo, si quieres este cigarro tinenes que decirme cuantos años tienes\n";
    std::cin >> mayore;

    if (mayore >= 18)
    {
        std::cout << "okay, ten tu cugarrou \n";
    }
    else
    {
        std::cout << "Sal de aquí pequeñín o llamo a la policia\n";
    }
    //dungeon
    bool llave1, llave2;
    std::string Cal1 = "Problema 1", Cal2 = "problema 2";
    std::cout << "\nTu novia viene hacia ti muy enojada y no sabes porque" <<
        " Que haces? 1.- la afrontas 0.- Huyes\n";
    std::cin >> llave1;
    if (llave1 == true)
    {
        std::cout << "\nQue valiente o mas bien tonto????" << Cal1 <<
            " \nTe dice que le llego un chisme de que tuviste algo que ver con su mejor amiga \n" <<
            "1.- la cortas 0.- le dices que no es cierto y que crea mas en ti que en ella 50/50 \n";
        std::cin >> llave2;
        if (llave2 == true)
        {
            std::cout << "hay mas peces en el agua brother\n";
        }
        else
        {
            std::cout << "te creyo pero tinenes que estar un mes rogandole para que se le pase el enojo\n";
        }
    }
    else
    {
        std::cout << "No eres cobarde, sabes que no le puedes ganar en una discucion \n";
    }
    //Sintaxys de SWITCH CASE
    int opc = 0;
    std::cout << "\ntienes tarea de matematicas, ¿que quieres hacer primero? \n1.- Suma\n2.- Resta\n" <<
        "3.- Multiplicación \n";
    std::cin >> opc;
    float a, b;
    std::cout << "ingresa dos números\n";
    std::cin >> a;
    std::cout << "\n";
    std::cin >> b;
    std::cout << "\n";
    switch (opc)
    {
    case 1:
        std::cout << "La suma es: " << a + b;
        break;
    case 2:
        std::cout << "La resta es: " << a - b;
        break;
    case 3:
        std::cout << "La multiplicación es: " << a * b;
        break;
    default:
        std::cout << "Esa opción no la conozco\n";
    }
}
