#include <iostream>
#include <string>

using namespace std;

int main() {
    union numero_letra
    {
        int numero;
        char letra;
    };
    
    numero_letra x = {'A'};
    cout << "x como numero: " << x.numero << endl;
    cout << "x como letra: " << x.letra << endl;

    enum dias_semana {lunes = 'l', martes = 'm', miercoles = 'x'};

    dias_semana dia = martes;

    cout << (char) dia;
}