// Programa: Teorema de Pitagoras
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double ca, co, hip;

    cout << "Ingrese el cateto ca: ";cin >> ca;
	cout << "Ingrese el cateto co: ";cin >> co;

    hip = sqrt(ca * ca + co * co);

    cout << "La hipotenusa es: " << hip << endl;

    return 0;
}