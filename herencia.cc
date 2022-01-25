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

// Carnivoro class

class Carnivoro : public Animal {
    public:
        Carnivoro() : Animal() {
            this->alimento = "Carne";
        }
        void cazar() {
            cout << "Este animal esta cazando..." << endl;
        }
};

// Omnivoro class

class Omnivoro : public Hervivoro, public Carnivoro {
    public:
        Omnivoro() : Hervivoro(), Carnivoro() {}

        void comer() {
            cout << "Este animal come lo que sea..." << endl;
        }
};

int main() {
    Animal *a = new Animal();
    Hervivoro *h = new Hervivoro();
    Carnivoro *c = new Carnivoro();
    Omnivoro *o = new Omnivoro();

    cout << "Numero de animales: " << Animal::obtenerNumeroAnimales() << endl;

    a->comer();
    h->comer();
    h->pastar();
    c->comer();
    c->cazar(); 

    cout << "Omnivoro..." << endl;

    o->comer();
    o->Hervivoro::comer();
    o->Carnivoro::comer();

    delete a;

    cout << "Numero de animales: " << Animal::obtenerNumeroAnimales() << endl;
}