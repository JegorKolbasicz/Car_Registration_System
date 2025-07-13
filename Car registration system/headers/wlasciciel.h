#ifndef WLASCICIEL_H
#define WLASCICIEL_H

#include <iostream>
#include <string>
using namespace std;

class Wlasciciel{
    string imie;
    string nazwisko;
    char plec;
    int wiek;
    string dowod;
    string pesel;
    string kraj;
    string miasto;
    string ulica;
    int numer_budynku;
    int numer_lokalu;

    public:
    ~Wlasciciel();
    Wlasciciel();
    Wlasciciel(string im, string nazw, char plc, int w, string dwd,
    string psl, string kr, string mst, string ul, int nr_budynku, int nr_lokalu);
    void dodaj_osobe();
    void wyswietl();

    friend class Samochod;
};

#endif