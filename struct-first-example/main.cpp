#include <iostream>
using namespace std;

struct komanda{
    string pavadinimas;
    string miestas;
    bool zaidziaEurolygoje;
    string zaidejai[5];
};

int main() {
    komanda komandos[10];
    komanda temp;
    int kiekis, zaidziaEu, zaidejuKiekis;
    string ieskomaKomanda, ieskomasZaidejas;
    bool rastas = false;
    cout<<"Kiek komandu norite ivesti? Ne daugiau kaip 10"<<endl;
    cin>>kiekis;
    for( int i = 0; i < kiekis; i++)
    {
        cout<<"Iveskite komandos pavadinima"<<endl;
        cin>>komandos[i].pavadinimas;
        cout<<endl;
        cout<<"Kokiame mieste isikurus"<<endl;
        cin>>komandos[i].miestas;
        cout<<endl;
        cout<<"Ar zaidzia Eurolygoje? Jei taip spauskite 1, jei ne - 0"<<endl;
        cin>>zaidziaEu;
        komandos[i].zaidziaEurolygoje = zaidziaEu == 1 ? true : false;
        cout<<"Iveskite zaideju kieki"<<endl;
        cin>>zaidejuKiekis;
        for(int j = 0; j < zaidejuKiekis; j++){
            cout<<"Iveskite komandos "<<j+1<<"- aji zaideja"<<endl;
            cin>>komandos[i].zaidejai[j];
        }
    }


    for(int i = 0; i < kiekis; i++){
        cout<<"Komanda "<<komandos[i].pavadinimas<<" "<<komandos[i].miestas<<endl;
        for(int j = 0; j < 3; j++){
            cout<<"      "<<komandos[i].zaidejai[j]<<endl;
        }
    }
    cout<<"Iveskite ieskoma zaideja"<<endl;
    cin>>ieskomasZaidejas;
    for (int i = 0; i < kiekis; i++){
        for(int j = 0; j < 3; j++){
            if (komandos[i].zaidejai[j] == ieskomasZaidejas){
                cout<<"Zaidejo komandos pavadinimas: "<<komandos[i].pavadinimas<<" zaidejo id: "<<j<<endl;
            }
        }

    }



//    for (int i = 1; i < kiekis; i++){
//        if (komandos[i].pavadinimas == ieskomaKomanda){
//            cout<<"Informacija apie komanda "<<komandos[i].pavadinimas<<" "<<komandos[i].miestas<<" "<<komandos[i].zaidziaEurolygoje<<endl;
//        }
//    }
    return 0;
}

