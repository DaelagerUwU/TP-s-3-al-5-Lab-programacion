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
    vector<string> paises(5);

    cout << "Ingrese 5 países: " << endl;
    for(int i = 0; i < 5; i++) {
        cin >> paises[i];
    }

    sort(paises.begin(), paises.end());

    cout << "Países ordenados alfabéticamente:" << endl;
    for(int i = 0; i < 5; i++) {
        cout << paises[i] << endl;
    }

    return 0;
}
