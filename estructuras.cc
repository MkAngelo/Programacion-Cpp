#include <iostream>
#include <string>

using namespace std;

struct Persona {
    string nombre;
    int edad;
};

int main() {
    //Persona p = Persona(); // Una forma de hacerlo, se reserva la memoria
    Persona *user = new Persona(); // Esta es la notacion de puntero usando flecha, en caso contrario usariamos puntos.
    user->nombre = "Miguel"; // en este caso se reserva la memoria de forma dinamica
    user->edad = 20;
    cout << user->nombre << endl;
    cout << user->edad << endl;
}