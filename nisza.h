

#ifndef PROJEKT_NISZA_H
#define PROJEKT_NISZA_H

#include "mieszkaniec.h"
#include "sasiedztwo.h"
#include "srodowisko.h"

class Nisza {
private:
    Mieszkaniec *lokator;

public:
    Nisza();

    Nisza(Nisza &innaNisza);

    ~Nisza();

    Nisza &operator=(Nisza &innaNisza);

    void przyjmijLokatora(Mieszkaniec *lokatorBezdomny);

    Mieszkaniec *oddajLokatora();

    bool zajeta() const { return lokator != nullptr; }

    RodzajMieszkanca ktoTuMieszka() {
        return zajeta() ? lokator->kimJestes() : PUSTKA;
    }

    bool lokatorZywy() const;

    char jakiSymbol() const;

private:

    ZamiarMieszkanca aktywujLokatora(
            Sasiedztwo sasiedztwo) {
        return lokator->wybierzAkcje(sasiedztwo);
    }

    Mieszkaniec *wypuscPotomka() {
        return lokator->dajPotomka();
    }

    void przyjmijZdobycz(Mieszkaniec *ofiara) {
        lokator->przyjmijZdobycz(ofiara);
    }

    friend void Srodowisko::wykonajAkcje(unsigned int wiersz,
                                         unsigned int kolumna);
};

#endif //PROJEKT_NISZA_H
