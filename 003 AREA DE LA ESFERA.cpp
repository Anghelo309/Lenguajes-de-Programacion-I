// Programa: Area de una Esfera
#include <iostream>
using namespace std;
int main() {
    const double PI = 3.14159265358979;
    double radio, area;
    cout << "Ingrese el radio de la esfera: ";cin >> radio;
    area = 4 * PI * radio * radio;
    cout << "El area de la esfera es: " << area << endl;

    return 0;
}