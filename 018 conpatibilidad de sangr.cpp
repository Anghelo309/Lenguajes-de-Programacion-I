#include <iostream>
#include <string>
using namespace std;

int main() {
    int opcionDonante, opcionReceptor;
    string donante, receptor;
    bool compatible = false;

    cout << "=== Consulta de Compatibilidad Sanguinea ===\n\n";
    cout << "Tipos de sangre disponibles:\n";
    cout << "1. O-\n";
    cout << "2. O+\n";
    cout << "3. A-\n";
    cout << "4. A+\n";
    cout << "5. B-\n";
    cout << "6. B+\n";
    cout << "7. AB-\n";
    cout << "8. AB+\n\n";

    cout << "Seleccione el tipo de sangre del DONANTE: ";
    cin >> opcionDonante;
    cout << "Seleccione el tipo de sangre del RECEPTOR: ";
    cin >> opcionReceptor;

    // --- SWITCH externo: tipo de sangre del donante ---
    switch (opcionDonante) {
        case 1: // O-
            donante = "O-";
            compatible = true; // O- es donante universal, compatible con todos
            break;

        case 2: // O+
            donante = "O+";
            // --- SWITCH interno: compatible con receptores Rh+ ---
            switch (opcionReceptor) {
                case 2: case 4: case 6: case 8: // O+, A+, B+, AB+
                    compatible = true;
                    break;
                default:
                    compatible = false;
            }
            break;

        case 3: // A-
            donante = "A-";
            switch (opcionReceptor) {
                case 3: case 4: case 7: case 8: // A-, A+, AB-, AB+
                    compatible = true;
                    break;
                default:
                    compatible = false;
            }
            break;

        case 4: // A+
            donante = "A+";
            switch (opcionReceptor) {
                case 4: case 8: // A+, AB+
                    compatible = true;
                    break;
                default:
                    compatible = false;
            }
            break;

        case 5: // B-
            donante = "B-";
            switch (opcionReceptor) {
                case 5: case 6: case 7: case 8: // B-, B+, AB-, AB+
                    compatible = true;
                    break;
                default:
                    compatible = false;
            }
            break;

        case 6: // B+
            donante = "B+";
            switch (opcionReceptor) {
                case 6: case 8: // B+, AB+
                    compatible = true;
                    break;
                default:
                    compatible = false;
            }
            break;

        case 7: // AB-
            donante = "AB-";
            switch (opcionReceptor) {
                case 7: case 8: // AB-, AB+
                    compatible = true;
                    break;
                default:
                    compatible = false;
            }
            break;

        case 8: // AB+
            donante = "AB+";
            switch (opcionReceptor) {
                case 8: // Solo AB+
                    compatible = true;
                    break;
                default:
                    compatible = false;
            }
            break;

        default:
            cout << "\nOpcion de donante invalida.\n";
            return 1;
    }

    // --- SWITCH: obtener nombre del receptor para mostrarlo ---
    switch (opcionReceptor) {
        case 1: receptor = "O-"; break;
        case 2: receptor = "O+"; break;
        case 3: receptor = "A-"; break;
        case 4: receptor = "A+"; break;
        case 5: receptor = "B-"; break;
        case 6: receptor = "B+"; break;
        case 7: receptor = "AB-"; break;
        case 8: receptor = "AB+"; break;
        default:
            cout << "\nOpcion de receptor invalida.\n";
            return 1;
    }

    cout << "\n--- Resultado ---\n";
    cout << "Donante: " << donante << "\n";
    cout << "Receptor: " << receptor << "\n";

    if (compatible)
        cout << "Compatibilidad: SI, la donacion es compatible.\n";
    else
        cout << "Compatibilidad: NO, la donacion NO es compatible.\n";

    return 0;
}