#include <iostream>
#include "KsiazkaAdresowa.h"

using namespace std;

int main()
{
    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy2.txt");
    //ksiazkaAdresowa.rejestracjaUzytkownika();
   // ksiazkaAdresowa.rejestracjaUzytkownika();
//   ksiazkaAdresowa.wczytajUzytkownikowZPliku();
    ksiazkaAdresowa.wypiszWszystkichUzytkownikow();
    ksiazkaAdresowa.rejestracjaUzytkownika();
    ksiazkaAdresowa.rejestracjaUzytkownika();
    ksiazkaAdresowa.wypiszWszystkichUzytkownikow();
}
