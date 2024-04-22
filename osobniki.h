#ifndef PROJEKT_OSOBNIKI_H
#define PROJEKT_OSOBNIKI_H

#include "organizm.h"
#include "mieszkaniec.h"

class Glon : protected Organizm, public Mieszkaniec {
public:
    Glon();

    virtual RodzajMieszkanca kimJestes() final;

    virtual ZamiarMieszkanca
    wybierzAkcje(Sasiedztwo sasiedztwo);

    virtual Mieszkaniec *dajPotomka();

    virtual void przyjmijZdobycz
            (Mieszkaniec *mieszkaniec);
};

class Grzyb : protected Organizm, public Mieszkaniec {
public:
    Grzyb();

    virtual RodzajMieszkanca kimJestes() final;

    virtual ZamiarMieszkanca
    wybierzAkcje(Sasiedztwo sasiedztwo);

    virtual Mieszkaniec *dajPotomka();

    virtual void przyjmijZdobycz
            (Mieszkaniec *mieszkaniec);
};

class Bakteria : protected Organizm, public Mieszkaniec {
public:
    Bakteria();

    virtual RodzajMieszkanca kimJestes() final;

    virtual ZamiarMieszkanca
    wybierzAkcje(Sasiedztwo sasiedztwo);

    virtual Mieszkaniec *dajPotomka();

    virtual void przyjmijZdobycz
            (Mieszkaniec *mieszkaniec);
};

#endif //PROJEKT_OSOBNIKI_H