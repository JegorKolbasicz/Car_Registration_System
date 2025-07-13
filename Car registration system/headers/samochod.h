#include <iostream>
#include <string>
#include "producent.h"
#include "wlasciciel.h"
using namespace std;

class Samochod :public Producent, public Wlasciciel{
    string marka;
    string model;
    string numer_rej;
    string kolor;
    int rok_produkcji;
    string typ_nadwozi;
    string vin_numer;
    Wlasciciel owner;
    Producent firma;

    public:
    Samochod();
    Samochod(string mark, string mdl, string nr_rej, string kol, int rok_prd, 
    string typ_nadw, string vin_num, Wlasciciel own, Producent firm);
    ~Samochod();
    void dodaj_pojazd();
    void wyswietl();

};