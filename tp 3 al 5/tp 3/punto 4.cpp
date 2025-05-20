/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Ingrese la cantidad de elementos: ";
    cin >> n;

    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    for(int i = 1; i < n; i++) {
        int key = v[i];
        int j = i - 1;
        while(j >= 0 && v[j] > key) {
            v[j+1] = v[j];
            j = j - 1;
        }
        v[j+1] = key;
    }

    cout << "Vector ordenado (inserción): ";
    for(int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }

    return 0;
}



