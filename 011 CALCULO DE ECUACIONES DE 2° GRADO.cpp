// Programa: Ecuacion de Segundo Grado (version basica)
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    float a, b, c, d, x1, x2, PtR, PtI;

    cout << "Ingrese el valor de a: ";cin >> a;
    cout << "Ingrese el valor de b: ";cin >> b;
    cout << "Ingrese el valor de c: ";cin >> c;

    d = (b * b) - (4 * a * c);

    if (d > 0) {
        x1 = (-b + sqrt(d)) / (2 * a);
        x2 = (-b - sqrt(d)) / (2 * a);
        cout << "\nLas raices son reales y diferentes:" << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    } else if (d == 0) {
        x1 = -b / (2 * a);
        cout << "\nLa raiz es real y doble (x1 = x2):" << endl;
        cout << "x1 = x2 = " << x1 << endl;
    } else {
        PtR = -b / (2 * a);
        PtI = sqrt(-d) / (2 * a);
        cout << "\nLas raices son complejas:" << endl;
        cout << "x1 = " << PtR << " + " << PtI << "i" << endl;
        cout << "x2 = " << PtR << " - " << PtI << "i" << endl;
    }

    return 0;
}