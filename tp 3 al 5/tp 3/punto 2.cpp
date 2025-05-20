/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cout << "Ingrese la cantidad de elementos: ";
    cin >> n;

    vector<int> numeros(n);

    cout << "Ingrese los valores: " << endl;
    for(int i = 0; i < n; i++) {
        cin >> numeros[i];
    }

    sort(numeros.begin(), numeros.end());

    cout << "Vector ordenado:" << endl;
    for(int i = 0; i < n; i++) {
        cout << numeros[i] << " ";
    }

    return 0;
}

