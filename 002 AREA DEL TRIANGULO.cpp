#include <iostream>

using namespace std;

int main(){
    float area,base,altura;
    cout << "Sistema de calculo del area de un triangulo" << endl;
    cout << "Ingrese la altura: ";cin >> altura;
    cout << "ingrese la base: ";cin >> base;
    area = base * altura / 2;
    cout << "El area del triangulo es: "<<area;
    return 0;
}
