#ifndef MIESZKANIEC_CPP_SRODOWISKO_H
#define MIESZKANIEC_CPP_SRODOWISKO_H

#include <string>
#include "ustawienia.h"
#include "osobniki.h"

class Nisza;

class Mieszkaniec;

class Sasiedztwo;

class Srodowisko {
public:
    const unsigned int wiersze, kolumny;
    const unsigned long liczbaNisz;
    void operator++(int) { wykonajKrokSymulacji(); }
    bool operator!() { return !martwy(); }
private:
    Nisza **nisza;

public:
    Srodowisko(unsigned int _wiersze,
               unsigned int _kolumny);

    ~Srodowisko();

    void lokuj(Mieszkaniec *mieszkaniec,
               unsigned int wiersz, unsigned int kolumna);


    Sasiedztwo ustalSasiedztwo(unsigned int wiersz,
                               unsigned int kolumna) const;

    unsigned long liczba(RodzajMieszkanca rodzaj) const;

    bool martwy();

    void wykonajSkok(unsigned int wiersz,
                     unsigned int kolumna);

    void wykonajAkcje(unsigned int wiersz,
                      unsigned int kolumna);

    void wykonajKrokSymulacji();

    std::string doTekstu() const;

    static Srodowisko czytajZPliku(std::string nazwaPliku);
};
std::ostream & operator<<(std::ostream & strumien,
                          const Srodowisko & srodowisko);
#endif //MIESZKANIEC_CPP_SRODOWISKO_H
