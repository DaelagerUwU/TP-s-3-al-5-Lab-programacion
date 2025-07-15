#include <iostream>
using namespace std;

int main() {
    float temp[30], suma = 0, mayor, menor;
    int diaMayor = 0, diaMenor = 0;

    for (int i = 0; i < 30; i++) {
        cout << "Temperatura del día " << i + 1 << ": ";
        cin >> temp[i];
        suma += temp[i];
        if (i == 0 || temp[i] > mayor) {
            mayor = temp[i];
            diaMayor = i + 1;
        }
        if (i == 0 || temp[i] < menor) {
            menor = temp[i];
            diaMenor = i + 1;
        }
    }

    cout << "\nPromedio del mes: " << suma / 30 << "°C\n";
    cout << "Temperatura máxima: " << mayor << "°C en el día " << diaMayor << "\n";
    cout << "Temperatura mínima: " << menor << "°C en el día " << diaMenor << "\n";

    return 0;
}
