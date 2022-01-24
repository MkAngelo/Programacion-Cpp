#include <iostream>
#include <string>

using namespace std;

// Animal class
class Animal{
    protected: // Permite hererncia
        string alimento;
        static int numero_animales;
    public:
        Animal();
        ~Animal();
        static int obtenerNumeroAnimales();
        string obetenerAlimento() {
            return alimento;
        }; 
        void comer() {
            cout << "Este animal esta comiendo " << alimento << "..." << endl;
        };
};
int Animal::numero_animales = 0;

Animal::Animal(){
    cout << "Creando nuevo animal..." << endl;
    numero_animales++;
}

Animal::~Animal(){
    cout << "Borrando animal..." << endl;
    numero_animales--;
}

int Animal::obtenerNumeroAnimales(){
    return numero_animales;
}

// Hervivoro class

class Hervivoro : public Animal {
    public:
        Hervivoro() : Animal() {
            this->alimento = "Plantas";
        }
        void pastar() {
            cout << "Este animal esta pastando..." << endl;
        }
};

class Carnivoro : public Animal {
    public:
        Carnivoro() : Animal() {
            this->alimento = "Carne";
        }
        void cazar() {
            cout << "Este animal esta cazando..." << endl;
        }
};

int main() {
    Animal *a = new Animal();
    Hervivoro *h = new Hervivoro();
    Carnivoro *c = new Carnivoro();

    cout << "Numero de animales: " << Animal::obtenerNumeroAnimales() << endl;

    a->comer();
    h->comer();
    h->pastar();
    c->comer();
    c->cazar(); 

    delete a;

    cout << "Numero de animales: " << Animal::obtenerNumeroAnimales() << endl;
}