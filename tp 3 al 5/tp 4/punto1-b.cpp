#include <iostream>
using namespace std;

int main() {
    int cursos[5];
    int inscriptos, tope = 20;

    for (int i = 0; i < 5; i++) {
        do {
            cout << "Ingrese inscriptos para el curso " << i + 1 << ": ";
            cin >> inscriptos;
        } while (inscriptos < 0 || inscriptos > tope);
        cursos[i] = inscriptos;
    }

    cout << "\nCantidad de inscriptos por curso:\n";
    for (int i = 0; i < 5; i++) {
        cout << "Curso " << i + 1 << ": " << cursos[i] << " inscriptos\n";
    }

    return 0;
}
