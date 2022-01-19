#include <iostream>
using namespace std;

int main() {
    int lista[] = {100, 200, 300};
    for (auto &&i : lista)
    {
        cout << i << endl;
    }
    int limit;
    cout << "Enter the max number: ";
    cin >> limit;
    for (int i = 0; i <= limit; i++) {
        cout << i << endl;
    }
    int sizelist = sizeof(lista) / sizeof(lista[0]);
    cout << sizelist;
}