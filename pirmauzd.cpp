#include <iostream>
using namespace std;

int main() {

    double kursas;
    int pasirinkimas;
    int valiuta;

    do {

        cout << "\nVALIUTOS KEITYKLA\n";
        cout << "1 - Palyginti kursa\n";
        cout << "2 - Pirkti valiuta\n";
        cout << "3 - Parduoti valiuta\n";
        cout << "0 - Baigti\n";
        cin >> pasirinkimas;

        if (pasirinkimas == 0) {
            cout << "Programa baigta";
            break;
        }

        cout << "Pasirink valiuta:\n";
        cout << "1 - GBP\n";
        cout << "2 - USD\n";
        cout << "3 - INR\n";
        cin >> valiuta;

        if (valiuta == 1) kursas = 0.87;
        if (valiuta == 2) kursas = 1.17;
        if (valiuta == 3) kursas = 104.69;

        if (pasirinkimas == 1) {

            cout << "1 EUR = " << kursas << endl;

        }

        if (pasirinkimas == 2) {

            double eur;
            cout << "Ivesk eurus: ";
            cin >> eur;

            cout << "Gausi: " << eur * kursas << endl;

        }

        if (pasirinkimas == 3) {

            double kiekis;
            cout << "Ivesk valiuta: ";
            cin >> kiekis;

            cout << "Gausi eurais: " << kiekis / kursas << endl;

        }

    } while (pasirinkimas != 0);

}