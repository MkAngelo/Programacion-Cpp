#include <iostream>

using namespace std;

int main(){
    int array[3];
    
    for(int i=0; i<3; i++){
        cout << "Ingresa el valor para el num[" << i << "]: ";
        cin >> array[i];
    }

    if(array[0] > array[1]){
        if (array[0] > array[2]) cout << "El num '" << array[0] << "' es mas grande" << endl;
        else if(array[0] < array[2]) cout << "El num '" << array[1] << "' es mas grande" << endl;
        else cout << "El num '" << array[0] << "' es mas grande" << endl;
    } 
    else if(array[0] < array[1]){
        if (array[1] > array[2]) cout << "El num '" << array[1] << "' es mas grande" << endl;
        else if(array[1] < array[2]) cout << "El num '" << array[2] << "' es mas grande" << endl;
        else cout << "El num '" << array[1] << "' es mas grande" << endl;
    } 
    else if(array[0] == array[1]){
        if(array[0] > array[2]) cout << "El num '" << array[0] << "' es mas grande"<< endl;
        else if(array[0] < array[2]) cout << "El num '" << array[2] << "' es mas grande" << endl;
        else cout << "Los numeros son iguales" << endl;
    }
}