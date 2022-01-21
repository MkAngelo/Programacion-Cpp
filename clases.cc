#include <iostream>
#include <string>

using namespace std;

class Persona {
    public:
        string nombre = "Miguel";
        int edad;
        void saludar() {
            cout << nombre << endl;
        }
};

int main() {
    Persona *p = new Persona();
    Persona *p2 = new Persona();

    p2->nombre = "Diana";
    //cout << p->nombre << endl;
    p->saludar();
    p2->saludar();
}