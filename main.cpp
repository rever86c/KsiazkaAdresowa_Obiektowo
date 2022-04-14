#include <iostream>
#include "KsiazkaAdresowa.h"

using namespace std;

int main()
{
    //int test;
    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy.txt", "Adresaci.txt");
    //ksiazkaAdresowa.rejestracjaUzytkownika();
   // ksiazkaAdresowa.rejestracjaUzytkownika();
//   ksiazkaAdresowa.wczytajUzytkownikowZPliku();
    ksiazkaAdresowa.wypiszWszystkichUzytkownikow();
    //ksiazkaAdresowa.rejestracjaUzytkownika();
   // ksiazkaAdresowa.rejestracjaUzytkownika();
    //ksiazkaAdresowa.wypiszWszystkichUzytkownikow();
    ksiazkaAdresowa.logowanieUzytkownika();
   // ksiazkaAdresowa.wyswietlIdZalogowanegoUzytkownika();
  //  ksiazkaAdresowa.zmianaHaslaZalogowanegoUzytkownika();
  //  cout<<endl<<"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
   // ksiazkaAdresowa.wypiszWszystkichUzytkownikow();
   //ksiazkaAdresowa.wylogowanieUzytkownika();
   ksiazkaAdresowa.wyswietlIdZalogowanegoUzytkownika();
   ksiazkaAdresowa.ustawIdZalogowanegoUzytkownika();

   //ksiazkaAdresowa.wyswietlIDOststnigeoAdresataZPliku();

   ksiazkaAdresowa.wczytajAdresatowZalogowanegoUzytkownikaZPliku();
   //ksiazkaAdresowa.wyswietlWszystkichAdresatow();
   ksiazkaAdresowa.wyswietlWszystkichAdresatow();
   ksiazkaAdresowa.dodajAdresata();
   //ksiazkaAdresowa.ustawIdZalogowanegoUzytkownika();
   ksiazkaAdresowa.wyswietlWszystkichAdresatow();
   ksiazkaAdresowa.wyswietlIDOststnigeoAdresataZPliku();

}
