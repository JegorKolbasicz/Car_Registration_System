#include <iostream>
#include <string>
#include "producent.h"
using namespace std;

Producent::~Producent(){
}

Producent::Producent(): nazwa(""), zaklad(""), kraj_producenta(""), rok_zalozenia(0), imie_wlasc(""), nazwisko_wlasc(""){

}

Producent::Producent(string nazw, string zakl, string kraj_pr, int rok_zal, string imie_wl, string nazwisko_wl){
    nazwa = nazw;
    zaklad = zakl;
    kraj_producenta = kraj_pr;
    rok_zalozenia = rok_zal;
    imie_wlasc = imie_wl;
    nazwisko_wlasc = nazwisko_wl;
}

void Producent::dodaj_producenta(){
    cout << "\nPodaj dane o producencie:" << endl;
    cout << "Nazwa producenta: " << endl;
    getline(cin, nazwa);
    cout << "Nazwa zakładu producenta: " << endl;
    getline(cin, zaklad);
    cout << "Kraj producenta: " << endl;
    getline(cin, kraj_producenta);
    cout << "Rok założenia: " << endl;
    cin >> rok_zalozenia;
    cout << "Imię właściciela firmy: " << endl;
    getline(cin, imie_wlasc);
    cout << "Nazwisko właściciela firmy: " << endl;
    getline(cin, nazwisko_wlasc);

}

void Producent::wyswietl_pr(){
    cout <<"\nNazwa producenta: " << nazwa << endl;
    cout <<"Zakład: " << zaklad << endl;
    cout <<"Kraj producenta: " << kraj_producenta << endl;
    cout <<"Rok założenia: " << rok_zalozenia << endl;
    cout <<"Imię właściciela/prezesa firmy: " << imie_wlasc << endl;
    cout <<"Nazwisko właściciela/prezesa firmy: " << nazwisko_wlasc;
}