// sumatoriaTresNumeros.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*1- Diseñe un programa que solicite al usuario el ingreso de tres números, Posteriormente
debe indicar si la suma de los dos primeros es igual, menor o mayor que el tercer
número.*/

#include <iostream>
using namespace std;

int main()
{
	//declaracion  de variables
	int num1, num2, num3, suma;
	//solicitamos al usuario que ingrese los numeros
	cout << "Ingrese el primer numero:\n";
	cin >> num1;
	cout << "Ingrese el segundo numero:\n";
	cin >> num2;
	cout << "Ingrese el tercer numero:\n";
	cin >> num3;

	//operacion
	suma = num1 + num2;
	//validamos
	if (suma == num3) {
		cout << "La suma de los 2 numeros es igual al numero 3\n"<<"\nLa suma es:\n"<<suma<<"\nEl numero 3 es:\n"<<num3;
	}
	else {
		if (suma<num3) {
			cout << "La suma de los 2 numeros es menor al numero 3\n" << "\nLa suma es:\n" << suma << "\nEl numero 3 es:\n" << num3;
		}
		else
			cout << "La suma de los 2 numeros es mayor numero 3\n" << "\nLa suma es:\n" << suma << "\nEl numero 3 es:\n" << num3;
	}
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
