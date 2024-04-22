#include <string>
#include <iostream>
#include "zlab03.h"

using namespace std;

bool Prostokat::czyPoprawny(double bok1, double bok2) {
    return bok1 > 0 && bok2 > 0;
}

void Prostokat::obliczObwod() {
    obwod = 2 * (bok1 + bok2);
}

void Prostokat::obliczPole() {
    pole = bok1 * bok2;
}

Prostokat::Prostokat(string n, double a, double b)
        : nazwa(n) {
    poprawny = czyPoprawny(a, b);

    if (poprawny) {
        bok1 = a;
        bok2 = b;
        obliczPole();
        obliczObwod();
    } else {
        bok1 = bok2 = pole = obwod = 0;
    }
}

Prostokat::~Prostokat() {
    cout << "Prostokat: " << nazwa
         << " znika." << endl;
}

bool Prostokat::czyPoprawny() {
    return poprawny;
}

const string &Prostokat::jakaNazwa() {
    return nazwa;
}

double Prostokat::podajPole() {
    return pole;
}

double Prostokat::podajObwod() {
    return obwod;
}

bool Prostokat::zmienBoki(double a, double b) {
    if (czyPoprawny(a, b)) {
        poprawny = true;
        bok1 = a;
        bok2 = b;
        obliczPole();
        obliczObwod();
        return true;
    }
    return false;
}

string Prostokat::doTekstu() {
    string napis = "";

    napis = "Prostokat o nazwie: " + nazwa + " bok1=" + to_string(bok1) + " bok2=" + to_string(bok2);

    if (poprawny) napis += " obwod=" + to_string(obwod) + " pole=" + to_string(pole);
    else napis += " !Figura niepoprawna.";

    return napis;
}
/*#include <iostream>
#include "zlab03.h"

using namespace std;

int main() {
    cout << "Laboratorium 03" << endl;

    Prostokat p1;
    Prostokat p2("koc", 1.4, 2.2);
    Prostokat p3("pulapka", -2, -3);

    cout.precision(2);
    cout << p1.doTekstu() << endl;
    cout << p2.doTekstu() << endl;
    cout << p3.doTekstu() << endl;

    p3.zmienBoki(2, 3);
    cout << endl << p3.doTekstu() << endl;

    cout << endl << "Uzycie metod obiektu:" << endl;
    cout << "Nazwa: " << p2.jakaNazwa() << endl
         << "Poprawny: " << p2.czyPoprawny() << endl
         << "Obwod=:" << p2.podajObwod() << endl
         << "Pole=" << p2.podajPole() << endl;

    return 0;
}*/
