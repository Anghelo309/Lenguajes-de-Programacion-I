// Programa: Ecuacion de Segundo Grado (version completa)
// Funcion : Resuelve una ecuacion cuadratica ax^2 + bx + c = 0, cubriendo todos los casos: a=0 (lineal, infinitas o sin solucion), discriminante > 0 (raices reales distintas), = 0 (raiz doble) y < 0 (raices complejas conjugadas con complex<double>).
#include <iostream>
#include <complex>
#include <cmath>

using namespace std;

int main() {
    double a, b, c;

    cout << "=== Resolucion de ecuaciones de segundo grado (ax^2 + bx + c = 0) ===\n";
    cout << "Ingrese el coeficiente a: ";
    cin >> a;
    cout << "Ingrese el coeficiente b: ";
    cin >> b;
    cout << "Ingrese el coeficiente c: ";
    cin >> c;


    if (a == 0) {
        // No es una ecuacion cuadratica real
        if (b == 0) {
            if (c == 0)
                cout << "\nCualquier valor de x es solucion (0 = 0).\n";
            else
                cout << "\nNo tiene solucion (ecuacion inconsistente).\n";
        } else {
            double x = -c / b;
            cout << "\nEs una ecuacion lineal. Solucion: x = " << x << "\n";
        }
        return 0;
    }

    double discriminante = b * b - 4 * a * c;

    cout << "\nDiscriminante: " << discriminante << "\n";

    if (discriminante > 0) {
        // Dos raices reales distintas
        double x1 = (-b + sqrt(discriminante)) / (2 * a);
        double x2 = (-b - sqrt(discriminante)) / (2 * a);
        cout << "Raices reales y distintas:\n";
        cout << "x1 = " << x1 << "\n";
        cout << "x2 = " << x2 << "\n";
    } else if (discriminante == 0) {
        // Raiz real doble
        double x = -b / (2 * a);
        cout << "Raiz real doble:\n";
        cout << "x = " << x << "\n";
    } else {
        // Raices complejas conjugadas
        complex<double> x1((-b) / (2 * a),  sqrt(-discriminante) / (2 * a));
        complex<double> x2((-b) / (2 * a), -sqrt(-discriminante) / (2 * a));
        cout << "Raices complejas conjugadas:\n";
        cout << "x1 = " << x1.real() << " + " << x1.imag() << "i\n";
        cout << "x2 = " << x2.real() << " - " << abs(x2.imag()) << "i\n";
    }

    return 0;
}