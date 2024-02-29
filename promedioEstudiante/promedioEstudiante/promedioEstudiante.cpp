// promedioEstudiante.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*4- Elabore un programa que solicite al usuario el ingreso de los 3 promedios que obtuvo
un estudiante de colegio en los 3 trimestres, y con base en ellos, determine si aprobó
el curso, lo reprobó o debe hacer examen de ampliación.

Para aprobarlo la persona debe tener un promedio final igual o mayor a 75, si está
entre 60 y 74 debe hacer examen y si está más bajo de 60, automáticamente pierde
el curso.*/

#include <iostream>
using namespace std;

int main()
{
    // Declaración de variables
    float promedio1, promedio2, promedio3;
    float promedio_final;

    // Solicitar al usuario los promedios de los tres trimestres
    cout << "Ingrese el promedio del primer trimestre: ";
    cin >> promedio1;

    cout << "Ingrese el promedio del segundo trimestre: ";
    cin >> promedio2;

    cout << "Ingrese el promedio del tercer trimestre: ";
    cin >> promedio3;

    // Calcular el promedio final
    promedio_final = (promedio1 + promedio2 + promedio3) / 3;

    // Determinar si aprobó, reprobó o debe hacer examen de ampliación
    if (promedio_final >= 75) {
        cout << "¡Felicidades! Has aprobado el curso con un promedio final de " << promedio_final << endl;
    }
    else if (promedio_final >= 60) {
        cout << "Has reprobado el curso con un promedio final de " << promedio_final << ". Debes recuperar en examen de ampliación." << endl;
    }
    else {
        cout << "Has reprobado el curso con un promedio final de " << promedio_final << ". Automáticamente pierdes el curso." << endl;
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
