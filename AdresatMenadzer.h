#ifndef ADRESATMENADZER_H
#define ADRESATMENADZER_H

#include <iostream>
#include <vector>
#include <fstream>
#include "Adresat.h"
#include "MetodyPomocnicze.h"
#include "PlikZAdresatami.h"

using namespace std;

class AdresatMenadzer
{
    vector <Adresat> adresaci;
    PlikZAdresatami plikZAdresatami;
    int idZalogowanegoUzytkownika;
    int idOstatniegoAdresata;
    void wyswietlDaneAdresata(Adresat adresat);
    Adresat podajDaneNowegoAdresata();


    public:
    AdresatMenadzer(string nazwaPlikuZAdresatami) : plikZAdresatami(nazwaPlikuZAdresatami)  {};
    void dodajAdresata();
    void wyswietlWszystkichAdresatow();
    void wczytajAdresatowZalogowanegoUzytkownikaZPliku();
    void ustawIdZalogowanegoUzytkownika(int idZalogowanegoUzytkownika);
    void wyswietlIdOststniegoUzytkownikaZPLiku();

};



#endif
