#include <iostream>
using namespace std;

int main() {
    int votos[3] = {0};
    int opcion, producto;

    do {
        cout << "\n*** ACCESO A ENCUESTA ***\n";
        cout << "¿Desea realizar encuesta? 1: sí – 2: no: ";
        cin >> opcion;

        if (opcion == 1) {
            cout << "PRODUCTOS PARTICIPANTES:\n";
            cout << "1 - PRODUCTO A\n2 - PRODUCTO B\n3 - PRODUCTO C\n";
            cout << "Ingrese número producto favorito: ";
            cin >> producto;
            if (producto >= 1 && producto <= 3) {
                votos[producto - 1]++;
            }
        }
    } while (opcion != 2);

    cout << "\nResultados de la encuesta:\n";
    cout << "Producto A: " << votos[0] << " votos\n";
    cout << "Producto B: " << votos[1] << " votos\n";
    cout << "Producto C: " << votos[2] << " votos\n";

    int total = votos[0] + votos[1] + votos[2];
    cout << "Total de votos: " << total << endl;

    int max = 0;
    for (int i = 1; i < 3; i++) {
        if (votos[i] > votos[max]) max = i;
    }
    cout << "Producto con más votos: Producto " << char('A' + max) << endl;

    return 0;
}
