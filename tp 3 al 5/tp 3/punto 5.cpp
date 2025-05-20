/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, buscar;
    cout << "Ingrese la cantidad de elementos: ";
    cin >> n;

    vector<int> v(n);
    cout << "Ingrese los valores: " << endl;
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    cout << "Ingrese el valor a buscar: ";
    cin >> buscar;

    bool encontrado = false;
    for(int i = 0; i < n; i++) {
        if(v[i] == buscar) {
            encontrado = true;
            break;
        }
    }

    if(encontrado)
        cout << "El valor se encuentra en el vector!" << endl;
    else
        cout << "El valor NO está en el vector!" << endl;

    return 0;
}




