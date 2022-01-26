// Escribe un programa que lea la entrada estandar dos numeros y muestre la salida estandar de una 
// suma, resta, multiplicacion y division

#include <iostream>

using namespace std;

int main() {
    float sum, rest, mult, div, num1, num2;
    cout << "Ingresa el valor para el num1:";
    cin >> num1;
    cout << "Ingresa el valor para el num2:";
    cin >> num2;
    sum = num1 + num2;
    rest = num1 - num2;
    mult = num1 * num2;
    div = num1 / num2;
    cout << "Las operaciones son las siguientes:" << endl;
    cout << num1 << " + " << num2 << " = " << sum << endl;
    cout << num1 << " - " << num2 << " = " << rest << endl;
    cout << num1 << " * " << num2 << " = " << mult << endl;
    cout << num1 << " / " << num2 << " = " << div << endl;
}