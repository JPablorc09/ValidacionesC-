// numeroPlacaMuesrteDiaDeSemana.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*. Diseñe un programa que solicite al usuario el número de placa de su vehículo y con
base al último digito, indique el día de la semana que no puede circular en el GAM
de acuerdo con la restricción vehicular.*/

#include <iostream>
using namespace std;

int main()
{
    // Declaración de variables
    int ultimo_digito;

    // Solicitar al usuario el número de placa
    cout << "Ingrese el último dígito de la placa de su vehículo: ";
    cin >> ultimo_digito;

    // Determinar el día de la semana que no puede circular
    string dia_restriccion;
    switch (ultimo_digito) {
    case 1:
    case 2:
        dia_restriccion = "Lunes";
        break;
    case 3:
    case 4:
        dia_restriccion = "Martes";
        break;
    case 5:
    case 6:
        dia_restriccion = "Miércoles";
        break;
    case 7:
    case 8:
        dia_restriccion = "Jueves";
        break;
    case 9:
    case 0:
        dia_restriccion = "Viernes";
        break;
    default:
        dia_restriccion = "Día no válido";
        break;
    }

    // Mostrar el día de la semana que no puede circular
    cout << "El día de la semana que no puede circular es: " << dia_restriccion << endl;

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
