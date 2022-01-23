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
        Persona &establecerNombre(string nombre) { this->nombre = nombre; return *this; }
        Persona &establecerEdad(int edad) {
            this->edad = edad;
            return *this;
        }
        void saludar() {
            cout << "Hi my name is " << nombre << ", I'm  " << edad << " years old." << endl;
        }
};

int main() {
    Persona *p = new Persona("Miguel", 20);

    p->establecerNombre("Angel").establecerEdad(21); 
    
    p->saludar();
}