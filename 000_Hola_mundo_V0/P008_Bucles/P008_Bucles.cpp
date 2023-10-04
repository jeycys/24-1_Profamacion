//P008_Bucles_V0
// by julio
// se hizo uso del if, else, switch case y el while

#include <iostream>
#include <locale>
#include <string>

int main()
{
    setlocale(LC_ALL, "es_MX.UTF-8");

    bool d1, d2;
    std::string opc1 = "te quedaste en casa (huevas)", opc2 = "Fuiste a clases";
    std::cout << "Tienes clase a las 7:30 de la mañana\n";
    std::cout << "¿Vas a asistir? \n";
    std::cout << "1 - si\n";
    std::cout << "0 - no\n";
    std::cin >> d1;
    if (d1 == true)
    {
        std::cout << "Muy biemn, eres un chico/a muy responsable\n";
        std::cout << "Ya estas en la escuela, pero....\n";
        std::cout << "¿Asistiras a clases o te iras de vago con tus amigos?\n";
        std::cout << "1 - si\n";
        std::cout << "0 - no\n";
        std::cin >> d2;
        if (d2 == true)
        {
            std::cout << "Preeferiste la diversion antes que el estudio (yo haria lo mismo)";
        }
        else
        {
            std::cout << "Muy buien, eres muy responsable pero te aburriste mucho y te dormiste";
        
        }



    }
    else
        std::cout << opc1;
    }
        //Sintaxys de SWITCH CASE
    int opc = 0;
    std::cout << "Tinenes tarea de mate, español e ingles que tarea deseas realizar primero? \n1.- mate\n2.- ingles\n"<<
        "3.- español \n";
    std::cin >> opc;
    int a = 1, b = 1;
    switch (opc)
    {

    case 1:
        int res = 0;
        std::cout << "La primera pregunta de la tarea es\n ¿Cuanto es 5 X 2?\n";
        std::cin >> res;
        if (res == 10)
        {
            std::cout << "Muy buen, respondiste una pregunta de primaria";

        }
        else
        {
            std::cout << "tas bn wuey";
        }
    

        break;
    case 2:
        
        std::cout << "Muy facil, no nescitas tanto trabajo";
    case 3:
        std::cout << "esta muy facil ";
        break;
    default:
        std::cout << "No hay tarea de esto nmms\n";
    }

    //Estructuras de Bucle
    //El más peligroso! - While
    //Mientras lo que esté entre parentesis este en Verdadero se ejecutara.
    bool seguir = false;
    while (seguir)
    {
        std::cout << "Perdiste un examen... Deseas asistir a la siguiente clase?. . .\n0.-No\n1.-Si\n";
        std::cin >> seguir;
    }
    //El que se ejecutara si o si 1 vez - Do While
    do
    {
        std::cout << "Entraste al do-while...0.-No\n1.-Si\n";
        std::cin >> seguir;
    } while (seguir);
    //El que tiene mayor control - For
    //1.- inicio; 2.- Limite; 3.- Tamaño de paso.
    //i=i+1 o i++
    for (int i = 0; i <= 100; i=i+1)
    {
        std::cout << "como nunca te saltas clases tu intelecto sube de 1 a: " << i;
        std::cout << std::endl;
    }

}
