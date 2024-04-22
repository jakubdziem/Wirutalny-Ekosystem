#include <vector>
#include "zlab10.h"
#include <iostream>
#include "generatorlosowy.h"
#include <set>
#include <map>
#include <algorithm>
#include <chrono>
using namespace std;

void ZLab10::wektor() {
    vector<double> wektor;

    wektor.push_back(2.3);
    wektor.push_back(4.5);
    wektor.push_back(-2.3);
    wektor.push_back(0.1);

    cout << "Rozmiar wektora: " << wektor.size() << endl;
    for (double d: wektor) cout << d << " ";
    cout << endl << endl;

    //Próba zapisu poza granicą
    for (unsigned long i = 5; i < 10; i++) wektor[i] = 3.2;
    cout << "Rozmiar wektora: " << wektor.size() << endl;
    for (double d: wektor) cout << d << " ";
    cout << endl << endl;

    //Zwiększenie rozmiaru
    wektor.resize(12);
    for (unsigned long i = 5; i < 10; i++) wektor[i] = 3.2;
    cout << "Rozmiar wektora: " << wektor.size() << endl;
    for (double d: wektor) cout << d << " ";
    cout << endl << endl;

    //Zapis przy użyciu zwykłej pętli
    for (unsigned long i = 0; i < wektor.size(); i++)
        wektor[i] = i;
    cout << "Rozmiar wektora: " << wektor.size() << endl;
    for (double d: wektor) cout << d << " ";
    cout << endl << endl;

    //Zapis przy użyciu pętli zakresowej
    for (double &d: wektor) d = 3.14;

    for (double d: wektor) cout << d << " ";
    cout << endl << endl;

    //Czyszczenie
    wektor.clear();
    cout << "Rozmiar wektora: " << wektor.size() << endl;
    for (double d: wektor) cout << d << " ";
    cout << endl << endl;
}

void ZLab10::wektor_sortowanie() {
    vector<int> wektor;

    wektor.resize(13);

    for (int &j: wektor) j = GEN::losujOdZeraDo(20);

    cout << "Wektor wygenerowany" << endl;

    unsigned seed = chrono::system_clock::now().time_since_epoch().count();
    default_random_engine e(seed);

    shuffle(wektor.begin(), wektor.end(), e);
    for (auto j: wektor) cout << j << " ";
    cout << endl << endl;

    cout << "Wektor posortowany" << endl;
    sort(wektor.begin(), wektor.end());
    for (auto j: wektor) cout << j << " ";
    cout << endl << endl;

    cout << "Wektor pomieszany" << endl;
    random_shuffle(wektor.begin(), wektor.end(),
                   GEN::losujOdZeraDo);
    for (auto j: wektor) cout << j << " ";
    cout << endl << endl;
}

void ZLab10::zbior() {
    set<string> imiona;
    imiona.insert("Adam");
    imiona.insert("Ewa");
    imiona.insert("Maciek");

    for (string s: imiona) cout << s << " ";
    cout << endl << endl;

    imiona.insert("Adam");
    imiona.insert("Iwona");
    imiona.insert("Ewa");
    imiona.insert("Beata");
    imiona.insert("Maciek");

    for (string s: imiona) cout << s << " ";
    cout << endl << endl;

    set<string>::iterator iter = imiona.begin();
    while (iter != imiona.end()) {
        cout << *iter << endl;
        iter++;
    }
}

void ZLab10::mapa() {
    map<char, double> pomiary;

    pomiary.insert(pair<char, double>('A', 20));
    pomiary.insert(pair<char, double>('B', 30));
    pomiary.insert(pair<char, double>('C', 50));
    pomiary.insert(pair<char, double>('D', 25));
    pomiary.insert(pair<char, double>('A', 20));
    pomiary.insert(pair<char, double>('A', 40));

    cout << "Wyświetlenie mapy" << endl;
    for (char c: {'A', 'B', 'C'})
        cout << c << "->" << pomiary[c] << endl;

    cout << "Policz A -> " << pomiary.count('A') << endl;

    pomiary.erase('A');
    cout << "Wyświetlenie mapy" << endl;
    for (char c: {'A', 'B', 'C'})
        cout << c << "->" << pomiary[c] << endl;
    cout << "Policz A -> " << pomiary.count('A') << endl;
}