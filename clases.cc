#include <iostream>
#include <string>

using namespace std;

class Persona {
    private:
        string nombre;
        int edad;
    public:
        static int numero_personas;
        Persona(string nombre, int edad);
        // Persona(string n, int e) : nombre(n), edad(e) {}
        ~Persona(){
            cout << "Destructor" << endl;
        }        
        Persona &establecerNombre(string nombre) { this->nombre = nombre; return *this; }
        Persona &establecerEdad(int edad) {
            this->edad = edad;
            return *this;
        }
        void saludar();
};

int Persona::numero_personas = 0;
void Persona::saludar(){
    cout << "Hi my name is " << nombre << ", I'm  " << edad << " years old." << endl;
}
Persona::Persona(string nombre, int edad) {
    this->nombre = nombre;
    this->edad = edad;
    numero_personas += 1;
}

int main() {
    Persona *p = new Persona("Miguel", 20);

    p->establecerNombre("Angel").establecerEdad(21); 
    
    p->saludar();

    cout << "Numero de personas: " << Persona::numero_personas << endl;
}