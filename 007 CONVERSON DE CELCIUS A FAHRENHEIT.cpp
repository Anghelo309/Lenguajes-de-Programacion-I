// Programa: Conversion Celsius a Fahrenheit
#include <iostream>
using namespace std;
int main(){
    float F, C;
    
    cout << "Sistema de conversion de grados Celsius a grados Fahrenheit" << endl;
    cout << "Ingrese grados Celsius: ";cin >> C;
    F = (C * 1.8) + 32;
    cout << "La conversion a grados Fahrenheit es: " << F;
    return 0;
}