// calcularSalarioEurosYDolares.cpp : This file contains the 'main' function. Program execution begins and ends there.

/*2- Al finalizar el año, el trabajador de una empresa habrá recibido un total de 24425
euros por concepto de salario base. Adicionalmente, se le debe sumar un incremento
según su antigüedad en la empresa, el cual depende de los siguientes criterios:
▪ Si lleva más de 10 años en la empresa se le aplica un aumento del 11,25%.
▪ Si tiene entre 7 y 10 años, se le aplica un aumento del 7,18%.
▪ Si tiene entre 3 y 6 años, se le aplica un aumento del 5,37%.
▪ Si lleva menos de 2 años se le aplica un aumento del 3,14%.
Debe calcular cuánto es el monto total recibido anual y mensualmente, tanto en
euros como en dólares y en colones. Tenga en cuenta que el tipo de cambio del dólar
a euro está en 1.20 y de colones a euro en ¢656,40
*/

#include <iostream>
using  namespace std;

int main()
{
    // Salario base en euros
    double salario_base_euros = 24425;

    // Tipo de cambio
    const double tipo_cambio_dolar = 1.20;
    const double tipo_cambio_colon = 656.40;

    // Cálculo del incremento según la antigüedad
    double aumento = 0.0;
    int antiguedad;
    cout << "Ingrese la antigüedad en años del trabajador en la empresa: ";
    cin >> antiguedad;

    if (antiguedad > 10)
        aumento = 0.1125;
    else if (antiguedad >= 7 && antiguedad <= 10)
        aumento = 0.0718;
    else if (antiguedad >= 3 && antiguedad <= 6)
        aumento = 0.0537;
    else if (antiguedad < 2)
        aumento = 0.0314;

    // Cálculo del monto total anual
    double monto_total_anual_euros = salario_base_euros * (1 + aumento);

    // Cálculo del monto total mensual en euros, dólares y colones
    double monto_total_mensual_euros = monto_total_anual_euros / 12;
    double monto_total_mensual_dolares = monto_total_mensual_euros / tipo_cambio_dolar;
    double monto_total_mensual_colones = monto_total_mensual_euros * tipo_cambio_colon;

    // Mostrar resultados
    cout << "Monto total anual en euros: " << monto_total_anual_euros;
    cout << "Monto total mensual en euros: " << monto_total_mensual_euros;
    cout << "Monto total mensual en dólares: " << monto_total_mensual_dolares;
    cout << "Monto total mensual en colones: " << monto_total_mensual_colones;

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
