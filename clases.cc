#include <iostream>
#include <string>

using namespace std;

class Persona {
    private:
        string nombre;
        int edad;
    public:
        Persona(string nombre, int edad) {
            this->nombre = nombre;
            this->edad = edad;
        }
        // Persona(string n, int e) : nombre(n), edad(e) {}
        ~Persona(){
            cout << "Destructor" << endl;
        }        
        void establecerNombre(string nombre) {
            this->nombre = nombre;
        }
        void establecerEdad(int edad) {
            this->edad = edad;
        }
        void saludar() {
            cout << "Hi my name is " << nombre << ", I'm  " << edad << " years old." << endl;
        }
};

int main() {
    Persona *p = new Persona("Miguel", 20);
    //Persona *p2 = new Persona("Diana", 19);

    p->establecerNombre("Angel"); 
    p->establecerEdad(21);

    //delete p2; // Forma manual
    //p2->nombre = "Diana";
    //cout << p->nombre << endl;
    p->saludar();
    //p2->saludar();
}