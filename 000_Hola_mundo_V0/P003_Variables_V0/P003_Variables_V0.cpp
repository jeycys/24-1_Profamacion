// P003_Variables_V0.cpp 
//Julio Chan






#include <iostream>
#include <string>
#include <math.h>

int main()
{
    //Variables
    bool mi_primer_booleano = true;
    int mi_primer_entero = 0;
    float mi_primer_flotante = 0.0;
    char mi_primer_caracter = 'a';
    char mi_primera_cadena_de_caracteres[100] = "hola vato";
    std::string mi_primer_string = "alo chavalitos";

    std::cout << "muy buenos dias julio espreo que estes bien\n";
    std::cout << "En el booleano tinenes guardado: " << mi_primer_booleano << std::endl;
    std::cout << "En el entero tines guardado: " << mi_primer_entero << std::endl;
    std::cout << "En el flotanto tienes guardado: " << mi_primer_flotante << std::endl;
    std::cout << "En el char tienes guardado: " << mi_primer_caracter << std::endl;
    std::cout << "En el otro char tienes guardado: " << mi_primera_cadena_de_caracteres << std::endl;
    std::cout << "En el string tines guardado: " << mi_primer_string << std::endl;
    std::cout << "\n";


    //Solicitar al usuario cambios
    std::cout << "usuario dame un 1 o un 0\n";
    std::cin >> mi_primer_booleano;
    std::cout << "Ahora en el booleano tienes guardado: " << mi_primer_booleano << std::endl;
    std::cout << "\n";
    std::cout << "usuario dame un 1 o un 0\n";
    std::cin >> mi_primer_entero;
    std::cout << "Ahora en el entero tienes guardado: " << mi_primer_entero << std::endl;
    std::cout << "\n",
        std::cout << "dame un numero que sea 1 o 0\n";
    std::cin >> mi_primer_flotante;
    std::cout << "Ahora en el flotante tienes guardado: " << mi_primer_flotante << std::endl;
    std::cout << "\n";
    std::cout << "dame una letra\n";
    std::cin >> mi_primer_caracter;
    std::cout << "Ahora en el carater tienes guardado: " << mi_primer_caracter << std::endl;
    std::cout << "\n";
    std::cout << "dame una oracion de menos de 100 letras\n";
    std::cin >> mi_primera_cadena_de_caracteres;
    std::cout << "Ahora en tu cadena de caracteres tines guardado: " << mi_primera_cadena_de_caracteres << std::endl;
    std::cout << "\n";
    std::cout << "Ahora escribe lo que quieras a tu gusto\n";
    std::cin >> mi_primer_string;
    std::cout << "tu oracion ilimitada ya esta guardada, es: " << mi_primer_string << std::endl;
    std::cout << "\n";
    std::cout << "\n";



    //Operaciones aritmeticas
    std::cout << "Ahora haremos operaciones aritmeticas" << std::endl;
    std::cout << "Deme dos numeros para sumarlos" << std::endl;
    float numero1 = 0;
    float numero2 = 0;
    std::cin >> numero1;
    std::cin >> numero2;
    std::cout << "Su respuesa es: " << numero1 + numero2;
    std::cout << "\n";
    std::cout << "Ahora haremos una resta, dame dos numeros: " << std::endl;
    std::cin >> numero1;
    std::cin >> numero2;
    std::cout << "Su respuesta es: " << numero1 - numero2;
    std::cout << "\n";
    std::cout << "Ahora haremos una multiplicacao, deme dos numeracos: " << std::endl;
    std::cin >> numero1;
    std::cin >> numero2;
    std::cout << "Su respuesta es: " << numero1 * numero2;
    std::cout << "\n";
    std::cout << "Ahora haremos una divisao: deme dos numeros" << std::endl;
    std::cin >> numero1;
    std::cin >> numero2;
    std::cout << "Su resapuesta es: " << numero1 / numero2;
    std::cout << "\n";
    std::cout << "Ahora sacaremos la raiz" << std::endl;
    std::cin >> numero1;
    std::cout << "La raiz del numero que me dio es: " << sqrt(numero1);
    std::cout << "\n";
    std::cout << "Ahora sacaremos el expoencial de un numero" << std::endl;
    std::cin >> numero1;
    std::cout << "La raiz del numero que me dio es: " << numero1 * numero1;






















}



















