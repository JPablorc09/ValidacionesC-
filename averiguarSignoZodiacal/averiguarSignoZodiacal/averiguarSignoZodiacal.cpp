// averiguarSignoZodiacal.cpp : This file contains the 'main' function. Program execution begins and ends there.

/*7- Defina un programa que solicite al usuario el ingreso de un número entre 1 y 12, el cual
representa los meses del año. Luego, debe pedir el ingreso de un segundo número
entre 1 y 31, el cual representa el día.
Con esa información, debe averiguar y mostrar en pantalla el signo zodiacal de esa
persona
*/

#include <iostream>
using namespace std;
int main()
{
    // Declaración de variables
    int mes, dia;

    // Solicitar al usuario el ingreso del mes y el día
    cout << "Ingrese el número del mes (entre 1 y 12): ";
    cin >> mes;

    cout << "Ingrese el número del día (entre 1 y 31): ";
    cin >> dia;

    // Determinar el signo zodiacal
    string signo_zodiacal;
    if ((mes == 3 && dia >= 21) || (mes == 4 && dia <= 19)) {
        signo_zodiacal = "Aries";
    }
    else if ((mes == 4 && dia >= 20) || (mes == 5 && dia <= 20)) {
        signo_zodiacal = "Tauro";
    }
    else if ((mes == 5 && dia >= 21) || (mes == 6 && dia <= 20)) {
        signo_zodiacal = "Géminis";
    }
    else if ((mes == 6 && dia >= 21) || (mes == 7 && dia <= 22)) {
        signo_zodiacal = "Cáncer";
    }
    else if ((mes == 7 && dia >= 23) || (mes == 8 && dia <= 22)) {
        signo_zodiacal = "Leo";
    }
    else if ((mes == 8 && dia >= 23) || (mes == 9 && dia <= 22)) {
        signo_zodiacal = "Virgo";
    }
    else if ((mes == 9 && dia >= 23) || (mes == 10 && dia <= 22)) {
        signo_zodiacal = "Libra";
    }
    else if ((mes == 10 && dia >= 23) || (mes == 11 && dia <= 21)) {
        signo_zodiacal = "Escorpio";
    }
    else if ((mes == 11 && dia >= 22) || (mes == 12 && dia <= 21)) {
        signo_zodiacal = "Sagitario";
    }
    else if ((mes == 12 && dia >= 22) || (mes == 1 && dia <= 19)) {
        signo_zodiacal = "Capricornio";
    }
    else if ((mes == 1 && dia >= 20) || (mes == 2 && dia <= 18)) {
        signo_zodiacal = "Acuario";
    }
    else if ((mes == 2 && dia >= 19) || (mes == 3 && dia <= 20)) {
        signo_zodiacal = "Piscis";
    }
    else {
        signo_zodiacal = "Fecha inválida";
    }

    // Mostrar el signo zodiacal
    cout << "El signo zodiacal es: " << signo_zodiacal << endl;

    return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
