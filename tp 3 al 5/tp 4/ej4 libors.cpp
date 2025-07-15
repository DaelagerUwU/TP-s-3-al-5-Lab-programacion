#include <iostream>
using namespace std;

int main() {
    int tipo[50], edad[50], educacion[50];
    int mayores18 = 0;
    int contadorTipo[2] = {0}; // [0]=ficción, [1]=no ficción
    int contadorEdu[5] = {0};

    for (int i = 0; i < 50; i++) {
        cout << "\nEncuestado " << i + 1 << ":\n";
        cout << "Tipo de libro (1=ficción, 2=no ficción): ";
        cin >> tipo[i];
        cout << "Edad: ";
        cin >> edad[i];
        cout << "Educación (1-5): ";
        cin >> educacion[i];

        if (edad[i] > 18) mayores18++;
        contadorTipo[tipo[i] - 1]++;
        contadorEdu[educacion[i] - 1]++;
    }

    cout << "\nRespuestas mayores de 18 años: " << mayores18 << endl;
    cout << "Porcentaje lectores ficción: " << (contadorTipo[0] * 100.0 / 50) << "%\n";
    cout << "Porcentaje lectores no ficción: " << (contadorTipo[1] * 100.0 / 50) << "%\n";

    for (int i = 0; i < 5; i++) {
        cout << "Educación tipo " << i + 1 << ": " << contadorEdu[i] << " respuestas\n";
    }

    return 0;
}
