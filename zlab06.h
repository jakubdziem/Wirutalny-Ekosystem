
#ifndef PROJEKT_ZLAB06_H
#define PROJEKT_ZLAB06_H

#include "zlab03.h"

class Obliczenia {
protected:
    const double pi = 3.14;
public:
    virtual double promienKolaWgPola() = 0;

    virtual double promenOkreguWgObwodu() = 0;

    virtual ~Obliczenia();
};

class Kwadrat : public Prostokat, public Obliczenia{
public:

    Kwadrat(string nazwa = "?", double bok = 0)
            : Prostokat(nazwa, bok, bok) {}

    ~Kwadrat() {
        cout << "Kwadrat: " << nazwa
             << " kończy działanie" << endl;
    }

    string doTekstu();

    double promenOkreguWgObwodu();

    double promienKolaWgPola();
};


#endif //PROJEKT_ZLAB06_H
