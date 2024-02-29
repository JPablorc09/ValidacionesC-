// recibirNumeroYSacarElCuadradoOCubo.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*
3- Defina un programa que reciba un numero entre 1 y 9, si el valor ingresado por el
usuario es 1, 5, 6 u 8, averigüe y muestre el cuadrado de ese número. Si es 2, 4 o 7,
averigüe y muestre el cubo del número, para los demás casos eleve ese número a
potencia 4 y muestre el resultado.
*/
#include <cmath>
#include <iostream>
using namespace std;

int main()
{
    // Declaración de variables
    int numero;
    long resultado;

    // Solicitar al usuario que ingrese un número entre 1 y 9
    cout << "Ingrese un número entre 1 y 9: ";
    cin >> numero;

    // Verificar el número ingresado y realizar el cálculo correspondiente
    if (numero == 1 || numero == 5 || numero == 6 || numero == 8) {
        resultado = pow(numero, 2); // Elevar al cuadrado
        cout << "El cuadrado de " << numero << " es: " << resultado << endl;
    }
    else
        if (numero == 2 || numero == 4 || numero == 7) {
        resultado = pow(numero, 3); // Elevar al cubo
        cout << "El cubo de " << numero << " es: " << resultado << endl;
    }
    else {
        resultado = pow(numero, 4); // Elevar a la cuarta potencia
        cout << numero << " elevado a la cuarta potencia es: " << resultado << endl;
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
