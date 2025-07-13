#include <iostream>
#include <string>
#include <limits>
#include <ios>
#include "samochod.h"
#include "producent.h"
#include "wlasciciel.h"
using namespace std;

Samochod::Samochod(){

}

Samochod::Samochod(string mark, string mdl, string nr_rej, string kol, int rok_prd, 
    string typ_nadw, string vin_num, Wlasciciel own, Producent firm)
    {
        marka = mark;
        model = mdl;
        numer_rej = nr_rej;
        kolor = kol;
        rok_produkcji = rok_prd;
        typ_nadwozi = typ_nadw;
        vin_numer = vin_num;
        owner = own;
        firma = firm;
    }

void Samochod::dodaj_pojazd(){
    cout << "Marka samochodu: " << endl;
    getline(cin, marka);
    cout << "Model samochodu: " << endl;
    getline(cin, model);
    cout << "Numer rejestracyjny: " << endl;
    getline(cin, numer_rej);
    cout << "Kolor: " << endl;
    getline(cin, kolor);
    cout << "Rok produkcji: " << endl;
    cin >> rok_produkcji;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "Typ nadwozi: " << endl;
    getline(cin, typ_nadwozi);
    cout << "Numer VIN: " << endl;
    getline(cin, vin_numer);
    Wlasciciel w;
    w.dodaj_osobe();
    owner = w;
    Producent toyota("Toyota", "Toyota Motors Corparation", "Japonia", 1937, "Koji", "Sato");
    Producent volkswagen("Volkswagen", "Volkswagen AG", "Niemcy", 1937, "Oliver", "Blum");
    Producent dodge("Dodge", "Stellantis N.V.", "USA", 1900, "Carlos", "Tavares");
    int prod;
    cout << "\nWybierz producenta: " << endl;
    cout << "1 - Toyota" << "\n2 - Volkswagen" << "\n3 - Dodge" << endl;
    cin >> prod;
    if(prod == 1){
        firma = toyota;
    }
    else if(prod == 2){
        firma = volkswagen;
    }
    else if(prod == 3){
        firma = dodge;
    }
    else{
        cout << "Nieprawidłowy wybór." << endl;
    }


}

void Samochod::wyswietl(){
    cout << "\n-----Pojazd-----" << endl;
    cout << "Marka: " << marka << "\nModel: " << model << "\nNumer rejestracyjny: " << numer_rej << "\nKolor: " << kolor
    << "\nRok produkcji: " << rok_produkcji << "\nTyp nadwozi: " << typ_nadwozi << "\nVIN numer: " << vin_numer << endl;

    cout << "\n-----Właściciel pojazdu " << marka << " " << model << " o numerze rejestracyjnym " << numer_rej << "-----" << endl;
    cout << "Imię właściciela: " << owner.imie << "\nNazwisko właściciela: " << owner.nazwisko << "Płeć właściciela: " << owner.plec
    << "\nWiek właściciela: " << owner.wiek << "\nNumer dowodu właściciela: " << owner.dowod << "\nNumer PESEL właściciela: " << owner.pesel
    << "\nKraj zamieszkania właściciela: " << owner.kraj << "\nMiasto zamieszkania właściciela: " << owner.miasto
    << "\nUlica: " << owner.ulica << "\nNumer budynku: " << owner.numer_budynku << "\nNumer lokalu: " << owner.numer_lokalu<< endl;

    cout << "\n-----Producent pojazdu " << marka << " " << model << "-----" << endl;
    cout << "Nazwa producenta: " << firma.nazwa << "\nZakład producenta: " << firma.zaklad << "\nKraj producenta: " << firma.kraj_producenta
    << "\nRok założenia zakładu producenta: " << firma.rok_zalozenia << "\nImię właściciela/prezesa firmy: " << firma.imie_wlasc
    << "\nNazwisko właściciela/prezesa firmy: " << firma.nazwisko_wlasc << "\n" << endl;
}

Samochod::~Samochod(){
}