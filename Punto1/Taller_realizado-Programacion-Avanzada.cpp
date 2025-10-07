// Programa: Operaciones básicas entre dos números enteros
// Autor: [Cristian Suarez R-Jhon Esteban Reales]
// Descripción: Este programa solicita al usuario ingresar dos números enteros
//              y muestra su suma, resta, multiplicación y división (si es posible).
//              También maneja el caso en que el divisor sea cero.
// Fecha: [17 de octubre del 2025]

#include <iostream>
using namespace std;

int main() {
    int num1, num2;  // Declaración de variables para los números enteros

    // Solicitar al usuario los dos números
    cout << "Ingrese el primer número entero: ";
    cin >> num1;

    cout << "Ingrese el segundo número entero: ";
    cin >> num2;

    // Operaciones básicas
    int suma = num1 + num2;
    int resta = num1 - num2;
    int multiplicacion = num1 * num2;

    cout << "\nResultados:\n";
    cout << "Suma: " << suma << endl;
    cout << "Resta: " << resta << endl;
    cout << "Multiplicación: " << multiplicacion << endl;

    // Manejo de la división con control de división por cero
    if (num2 != 0) {
        double division = static_cast<double>(num1) / num2;
        cout << "División: " << division << endl;
    } else {
        cout << "División: Error. No se puede dividir entre cero." << endl;
    }

    return 0;
}
