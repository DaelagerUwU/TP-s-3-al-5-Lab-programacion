#include <iostream>
using namespace std;

int main() {
    int V[8] = {-3, -1, 2, 5, 6, 7, 9, 17};
    int N = 8;
    int S = 0;
    float PROM;
    int A, B, C, D, E, POS;

    // Calcular suma y promedio
    for (int I = 0; I < N; I++) {
        S += V[I];
    }
    PROM = (float)S / N;

    for (int I = 1; I < N; I++) {
        if (V[I] > PROM) {
            A = PROM - V[I - 1];
            B = V[I] - PROM;
            C = V[I - 1];
            D = V[I];
            POS = I;
            break; // Sale en el primer caso que cumple
        }
    }

    if (A < B) {
        E = C;
        POS--;
    } else {
        E = D;
    }

    cout << "PROM = " << PROM << endl;
    cout << "E = " << E << endl;
    cout << "POS = " << POS << endl;

    return 0;
}
