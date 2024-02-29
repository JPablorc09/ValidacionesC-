// mayorOmenor.cpp : This file contains the 'main' function. Program execution begins and ends there.

/*6- Elabore un programa que solicite al usuario el ingreso de 3 números, posteriormente,
debe averiguar cuál de ellos es el mayor y cuál es el menor*/

#include <iostream>
using namespace std;

int main()
{
    // Declaración de variables
    float num1, num2, num3;

    // Solicitar al usuario ingresar los tres números
    cout << "Ingrese el primer número: ";
    cin >> num1;

    cout << "Ingrese el segundo número: ";
    cin >> num2;

    cout << "Ingrese el tercer número: ";
    cin >> num3;

    // Determinar el mayor de los tres números
    float mayor = num1;
     if (num2 > mayor) {
        mayor = num2;
    }
        if (num3 > mayor) {
        mayor = num3;
    }

    // Determinar el menor de los tres números
    float menor = num1;
    if (num2 < menor) {
        menor = num2;
    }
    if (num3 < menor) {
        menor = num3;
    }

    // Mostrar resultados
    cout << "El mayor número ingresado es: " << mayor << endl;
    cout << "El menor número ingresado es: " << menor << endl;

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
