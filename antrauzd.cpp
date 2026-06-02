#include <iostream>

using namespace std;



int main() {

    string vardai[100];

    int pazymiai[100][10];

    int pazKiekis[100]; // kiek pažymių turi kiekvienas mokinys

    int mokiniuKiekis = 0;



    int pasirinkimas;



    do {

        cout << "\n MENIU \n";

        cout << "1. Prideti mokini\n";

        cout << "2. Rodyti visus mokinius\n";

        cout << "3. Rodyti vieno mokinio pazymius\n";

        cout << "4. Atnaujinti pazymi\n";

        cout << "5. Pasalinti mokini\n";

        cout << "0. Iseiti\n";

        cout << "Pasirinkimas: ";

        cin >> pasirinkimas;



        if (pasirinkimas == 1) {

            if (mokiniuKiekis < 100) {

                cout << "Iveskite mokinio varda: ";

                cin >> vardai[mokiniuKiekis];



                cout << "Kiek pazymiu (iki 10): ";

                cin >> pazKiekis[mokiniuKiekis];



                for (int i = 0; i < pazKiekis[mokiniuKiekis]; i++) {

                    cout << "Pazymys " << i + 1 << ": ";

                    cin >> pazymiai[mokiniuKiekis][i];

                }



                mokiniuKiekis++;

            } else {

                cout << "Pasiektas maksimumas!\n";

            }

        }



        else if (pasirinkimas == 2) {

            for (int i = 0; i < mokiniuKiekis; i++) {

                cout << vardai[i] << ": ";

                for (int j = 0; j < pazKiekis[i]; j++) {

                    cout << pazymiai[i][j] << " ";

                }

                cout << endl;

            }

        }



        else if (pasirinkimas == 3) {

            string vardas;

            cout << "Iveskite mokinio varda: ";

            cin >> vardas;



            for (int i = 0; i < mokiniuKiekis; i++) {

                if (vardai[i] == vardas) {

                    cout << "Pazymiai: ";

                    for (int j = 0; j < pazKiekis[i]; j++) {

                        cout << pazymiai[i][j] << " ";

                    }

                    cout << endl;

                }

            }

        }



        else if (pasirinkimas == 4) {

            string vardas;

            int indeksas, naujas;



            cout << "Iveskite mokinio varda: ";

            cin >> vardas;



            for (int i = 0; i < mokiniuKiekis; i++) {

                if (vardai[i] == vardas) {

                    cout << "Kuri pazymi keisti (nr.): ";

                    cin >> indeksas;



                    cout << "Naujas pazymys: ";

                    cin >> naujas;



                    pazymiai[i][indeksas - 1] = naujas;

                }

            }

        }



        else if (pasirinkimas == 5) {

            string vardas;

            cout << "Iveskite mokinio varda: ";

            cin >> vardas;



            for (int i = 0; i < mokiniuKiekis; i++) {

                if (vardai[i] == vardas) {

                    for (int j = i; j < mokiniuKiekis - 1; j++) {

                        vardai[j] = vardai[j + 1];

                        pazKiekis[j] = pazKiekis[j + 1];



                        for (int k = 0; k < 10; k++) {

                            pazymiai[j][k] = pazymiai[j + 1][k];

                        }

                    }

                    mokiniuKiekis--;

                    cout << "Mokinys pasalintas.\n";

                    break;

                }

            }

        }



    } while (pasirinkimas != 0);



    return 0;

}