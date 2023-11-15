// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

char abecele[26] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z' };

string sifravimas(string tekstas, int poslinkis, string tipas)
{
    int teksto_indeksai[200] = { 0 };
    int pakeisti_teksto_indeksai[200] = { 0 };
    string rezultatas;
    for (int i = 0; i < tekstas.length(); i++) {
        for (int j = 0; j < sizeof(abecele); j++) {
            if (abecele[j] == tekstas[i]) {
                teksto_indeksai[i] = j;
            }
        }
    }
    for (int i = 0; i < tekstas.length(); i++) {
        pakeisti_teksto_indeksai[i] = (tipas == "sifravimas") ?
                                      (teksto_indeksai[i] + poslinkis) % sizeof(abecele) : (tipas == "desifravimas") ?
                                                                                           (teksto_indeksai[i] - poslinkis + sizeof(abecele)) % sizeof(abecele) : 0;
    }
    for (int i = 0; i < tekstas.length(); i++) {
        for (int j = 0; j < sizeof(abecele); j++) {
            if (j == pakeisti_teksto_indeksai[i]) {
                rezultatas += abecele[j];
            }
        }
    }
    return rezultatas;
}

int main()
{

    string tekstas;
    string tipas;
    int poslinkis;
    int pasirinkimas;

    do{
        cout << "Pasirinkite funkcija \n"
             << "Norite uzsifruoti spauskite - 1\n"
             << "Norite desifruoti spauskite - 2\n"
             << "Norite pabaigti spauskite - 0 \n"<<endl;
        cin >> pasirinkimas;
        tipas = (pasirinkimas == 1) ? "sifravimas" : (pasirinkimas == 2) ? "desifravimas" : "";
        switch (pasirinkimas) {
            case 1:
                cout << "Uzsifruoti"<<endl;
                cout << "Iveskite sifruojama teksta: " << endl;
                cin >> tekstas;

                for (int i = 0; i < tekstas.length(); i++) {
                    tekstas[i] = toupper(tekstas[i]);
                }
                cout << "Iveskite poslinki: " << endl;
                cin >> poslinkis;
                cout << endl;
                cout << "Uzsifruotas tekstas yra lygus: " << sifravimas(tekstas, poslinkis, tipas)<<endl;
                break;
            case 2:
                cout << "Desifruoti" <<endl;
                cout << "Iveskite teksta: " << endl;
                cin >> tekstas;

                for (int i = 0; i < tekstas.length(); i++) {
                    tekstas[i] = toupper(tekstas[i]);
                }
                cout << "Iveskite poslinki: " << endl;
                cin >> poslinkis;
                cout << endl;
                cout << "Desifruotas tekstas yra lygus: " << sifravimas(tekstas, poslinkis, tipas) << endl;
                break;
            default:
                cout << "Pabaiga";
        }
    } while (pasirinkimas != 0);


}

