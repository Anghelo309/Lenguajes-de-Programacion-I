// Programa: Calculo del IGV de un Producto
#include <iostream>
using namespace std;
int main() {
    const double IGV = 0.18;
    double precioBase, igv, precioFinal;

    cout << "Ingrese el precio base del producto: ";cin >> precioBase;

    igv = precioBase * IGV;
    precioFinal = precioBase + igv;

    cout << "El IGV (18%) es: " << igv << endl;
    cout << "El precio final con IGV es: " << precioFinal << endl;

    return 0;
}