#include <iostream>
#include <string>

using namespace std;

int main() {
    int edad;
    string nombre;
    float altura;

    cout << "Ingresa tu nombre: ";
    cin >> nombre;
    cout << "Hola! " << nombre << ", ingresa tu edad: ";
    cin >> edad;
    cout << "Ahora ingresa tu altura en metros: ";
    cin >> altura;

    cout << "Tu nombre es " << nombre << ", tienes " << edad << " anos de edad y mides " << altura << "m" << endl;
}