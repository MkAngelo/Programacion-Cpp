#include <iostream>

using namespace std;

int main() {
    int num1, num2;

    cout << "Ingresa el numero 1: ";
    cin >> num1;
    cout << "Ingresa el numero 2: ";
    cin >> num2;

    if(num1 == num2){
        cout << "Los numeros son iguales." << endl;
    } else if (num1 > num2) {
        cout << "El numero '" << num1 << "' es mas grande" << endl;
    } else {
        cout << "El numero '" << num2 << "' es mas grande" << endl;
    }

    return 0;
}