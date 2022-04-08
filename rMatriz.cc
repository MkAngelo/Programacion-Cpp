#include <iostream>

using namespace std;

int main(){
    int numeros[100][100], filas, columnas;

    cout << "Digite el numero de filas: ";
    cin >> filas;
    cout << "Digite el numero de columnas: ";
    cin >> columnas;

    for(int i=0; i<filas; i++){
        for(int j=0; j<columnas; j++){
            cout << "Ingresa el numero para [" << i << "][" << j << "]: ";
            cin >> numeros[i][j];
        }
    }
    for(int i=0; i<filas; i++){
        for(int j=0; j<columnas; j++){
            cout << numeros[i][j];
        }
        cout << "\n";
    }
}
