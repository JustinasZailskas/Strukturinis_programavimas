#include <iostream>
#include <string>
using namespace std;

int main() {
    char abecele [26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    string tekstas;
    string uzsifruotasTekstas;
    int poslinkis;
    int teksto_indeksai [200];
    int uzsifruoto_teksto_indeksai [200];
    cout <<"Iveskite sifruojama teksta \n";
    //cin >> tekstas;
    getline(cin, tekstas);
    cout <<"Ivestas tekstas yra: "<<tekstas<<endl;
    for (int i = 0; i < tekstas.length(); i++){
        tekstas[i] = toupper(tekstas[i]);
    }
    cout <<"Pakeiciam mazas raides i dideles: "<< tekstas<<endl;
    cout << sizeof(abecele)<<endl; //strlen gali nurodyti masyve esanciu elementu skaiciu, ta pati gali atlikti ir sizeof
    for (int i = 0; i < tekstas.length(); i++) {
        cout <<"Teksto raide: "<<tekstas[i]<<endl;
        for ( int j = 0; j < sizeof(abecele); j++){
            if(abecele[j] == tekstas[i]) {
                cout<<"Pozicija "<<j<<endl;
                teksto_indeksai[i] = j;
            }
        }
    }
    for (int i = 0; i < tekstas.length(); i++) {
        cout <<"Indeksu reiksmes "<<teksto_indeksai[i]<<endl;
    }

    cout <<"Iveskite poslinki: "<<endl;
    cin >>poslinkis;
    for (int i = 0; i < tekstas.length(); i++) {
        uzsifruoto_teksto_indeksai[i] = (teksto_indeksai[i] + poslinkis)% sizeof(abecele);
        cout<<"Uzsifruotos raides pozicija "<<uzsifruoto_teksto_indeksai[i]<<endl;
    }

    for (int i = 0; i < tekstas.length(); i++){
        cout<<"Indeksas "<<uzsifruoto_teksto_indeksai[i]<<endl;
        for ( int j = 0; j < sizeof(abecele); j++){
            if(j == uzsifruoto_teksto_indeksai[i]) {
                cout<<"Pozicija "<<abecele[j]<<endl;
                uzsifruotasTekstas += abecele[j];
                cout<<"string "<<uzsifruotasTekstas<<endl;
            }
        }
    }
    cout<<"Uzsifruotas tekstas "<<uzsifruotasTekstas;
    return 0;
}
