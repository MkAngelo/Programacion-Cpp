#include <iostream>
#include <string>

using namespace std;

class Persona {
    public:
        string nombre;
        int edad;
        Persona(string n) {
            nombre = n;
        }
        ~Persona(){
            cout << "Destructor" << endl;
        }        
        void saludar() {
            cout << nombre << endl;
        }
};

int main() {
    Persona *p = new Persona("Miguel");
    Persona *p2 = new Persona("Diana");
    delete p2; // Forma manual
    //p2->nombre = "Diana";
    //cout << p->nombre << endl;
    p->saludar();
    p2->saludar();
}