#include "KsiazkaAdresowa.h"

void KsiazkaAdresowa::rejestracjaUzytkownika()
{
    uzytkownikMenadzer.rejestracjaUzytkownika();
}

void KsiazkaAdresowa::wypiszWszystkichUzytkownikow()
{
    uzytkownikMenadzer.wypiszWszystkichUzytkownikow();
}

void KsiazkaAdresowa::logowanieUzytkownika()
{
    uzytkownikMenadzer.logowanieUzytkownika();
}

void KsiazkaAdresowa::zmianaHaslaZalogowanegoUzytkownika()
{
    uzytkownikMenadzer.zmianaHaslaZalogowanegoUzytkownika();
}

void KsiazkaAdresowa::wyswietlIdZalogowanegoUzytkownika()
{
    cout<<endl<<uzytkownikMenadzer.pobierzIdZalogowanegoUzytkownika();
}

void KsiazkaAdresowa::wylogowanieUzytkownika()
{
    uzytkownikMenadzer.wylogowanieUzytkownika();
}

void KsiazkaAdresowa::ustawIdZalogowanegoUzytkownika()
{
    adresatMenadzer.ustawIdZalogowanegoUzytkownika(uzytkownikMenadzer.pobierzIdZalogowanegoUzytkownika());
}

void KsiazkaAdresowa::wczytajAdresatowZalogowanegoUzytkownikaZPliku()
{
   adresatMenadzer.wczytajAdresatowZalogowanegoUzytkownikaZPliku();
}

void KsiazkaAdresowa::wyswietlWszystkichAdresatow()
{
   adresatMenadzer.wyswietlWszystkichAdresatow();
}

void KsiazkaAdresowa::dodajAdresata()
{
    adresatMenadzer.dodajAdresata();
}

void KsiazkaAdresowa::wyswietlIDOststnigeoAdresataZPliku()
{
    adresatMenadzer.wyswietlIdOststniegoUzytkownikaZPLiku();
}

