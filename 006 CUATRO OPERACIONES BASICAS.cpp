// Programa: Operaciones Basicas
#include <iostream>
using namespace std;
int main() {
    float num1, num2, suma, resta, multiplicacion, division;

    cout << "Sistema de operaciones basicas" << endl;
    cout << "Ingresa el primer numero: ";cin >> num1;
    cout << "Ingresa el segundo numero: ";cin >> num2;

    suma = num1 + num2;
    resta = num1 - num2;
    multiplicacion = num1 * num2;

    cout << "\nEl resultado de la suma es: " << suma << endl;
    cout << "El resultado de la resta es: " << resta << endl;
    cout << "El resultado de la multiplicacion es: " << multiplicacion << endl;

    if (num2 != 0){
        division = num1 / num2;
        cout << "El resultado de la division es: " << division << endl;
    }else {
        cout << "El resultado de la division es: No se puede dividir entre cero" << endl;
    }

    return 0;
}