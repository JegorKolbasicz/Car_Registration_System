#ifndef PRODUCENT_H
#define PRODUCENT_H 

#include <iostream>
#include <string>
using namespace std;

class Producent{
    string nazwa;
    string zaklad;
    string kraj_producenta;
    int rok_zalozenia;
    string imie_wlasc;
    string nazwisko_wlasc;

    public:
    ~Producent();
    Producent();
    Producent(string nazw, string zakl, string kraj_pr, int rok_zal, string imie_wl, string nazwisko_wl);
    void dodaj_producenta();
    void wyswietl_pr();

    friend class Samochod;
};

#endif