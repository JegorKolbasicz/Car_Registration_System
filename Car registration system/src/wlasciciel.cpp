#include <iostream>
#include <string>
#include <limits>
#include <ios>
#include "wlasciciel.h"
using namespace std;

    Wlasciciel::Wlasciciel(){

    }

    Wlasciciel::~Wlasciciel(){
    }

    void Wlasciciel::dodaj_osobe(){
    cout << "\nWpisz dane o właścicielu." << endl;
    cout << "Imie: " << endl;
    getline(cin, imie); 
    cout << "Nazwisko: " << endl;
    getline(cin, nazwisko);
    cout << "Płeć (M/K): " << endl;
    cin >> plec;
    cout << "Wiek: " << endl;
    cin >> wiek;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "Numer dowodu osobistego: " << endl;
    getline(cin, dowod);
    cout << "Numer PESEL: " << endl;
    getline(cin, pesel);
    cout << "Kraj zamieszkania" << endl;
    getline(cin, kraj);
    cout << "Miasto: " << endl;
    getline(cin, miasto);
    cout << "Ulica: " << endl;
    getline(cin, ulica);
    cout << "Numer budynku: " << endl;
    cin >> numer_budynku;
    cout << "Numer lokalu: " << endl;
    cin >> numer_lokalu;
}

    Wlasciciel::Wlasciciel(string im, string nazw, char plc, int w, string dwd,
    string psl, string kr, string mst, string ul, int nr_budynku, int nr_lokalu){
        imie = im;
        nazwisko = nazw;
        plec = plc;
        wiek = w;
        dowod = dwd;
        pesel = psl;
        kraj = kr;
        miasto = mst;
        ulica = ul;
        numer_budynku = nr_budynku;
        numer_lokalu = nr_lokalu;
    }


void Wlasciciel::wyswietl(){
    cout << "\nWłaściciel samochodu: " << endl;
    cout << "Imię: " << imie << "\nNazwisko: " << nazwisko << "\nPłeć: " << plec << "\nWiek: " << wiek << "\nNumer dowodu osobistego: " << dowod
    << "\nNumer PESEL: " << pesel << "\nKraj zamieszkania: " << kraj << "\nMiasto: " << miasto << "\nUlica: " << ulica
    << "\nNumer budynku: " << numer_budynku << "\nNumer lokalu: " << numer_lokalu;
}