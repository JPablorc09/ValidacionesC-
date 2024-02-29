// HeladeriaDescuentoMembresia.cpp : This file contains the 'main' function. Program execution begins and ends there.
/* 5- Hacer un programa para la heladería Dulce Tentación, la cual da un descuento a sus
clientes con membresía dependiendo de su tipo, sólo existen tres tipos, A, B y C.
Quienes no tengan membresía no reciben el descuento. En caso de que sí aplique,
los descuentos son los siguientes:
▪ Tipo A: 10% de descuento
▪ Tipo B: 15% de descuento
▪ Tipo C: 20% de descuento
*/

#include <iostream>
using namespace std;

int main()
{
    // Declaración de variables
    char tipo_membresia;
    float precio_helado, precio_descuento, descuento = 0.0;

    // Solicitar al usuario ingresar el tipo de membresía y el precio del helado
    cout << "Ingrese el tipo de membresía (A, B o C): ";
    cin >> tipo_membresia;

    cout << "Ingrese el precio del helado: ";
    cin >> precio_helado;

    // Calcular el descuento según el tipo de membresía
    switch (tipo_membresia) {
    case 'A':
        descuento = 0.10; // 10% de descuento para el tipo A
        break;
    case 'B':
        descuento = 0.15; // 15% de descuento para el tipo B
        break;
    case 'C':
        descuento = 0.20; // 20% de descuento para el tipo C
        break;
    default:
        cout << "Tipo de membresía inválido." << endl;
        break;
    }

    // Calcular el precio con descuento
    if (descuento > 0) {
        precio_descuento = precio_helado * (1 - descuento);
        cout << "El precio del helado con descuento es: " << precio_descuento << " Colones" << endl;
    }
    else {
        cout << "El cliente no tiene membresía o el tipo ingresado es incorrecto. El precio del helado es: " << precio_helado << " colones" << endl;
    }

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
