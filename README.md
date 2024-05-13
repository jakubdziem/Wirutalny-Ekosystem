<h2>Wirtualny ekosystem</h2>
Wirtualny ekosystem to prosty biocybernetyczny symulator rozwoju ekosystemu, który
tworzą trzy gatunki wirtualnych organizmów: glony – oznaczone jako *, grzyby # i bakterie@.
Środowisko ekosystemu to prostokątna tablica składająca się z komórek, które nazywane
są dalej niszami. Każda nisza może być albo pusta, albo zajęta przez żywy organizm,
albo zajęta przez organizm martwy. Każda nisza ma swoje bezpośrednie sąsiedztwo.
Aktywność żywych organizmów dotyczy tylko tego sąsiedztwa. Środowisko takie
wstępnie jest zasiedlane w sposób dowolny organizmami żywymi. Rozwój ekosystemu
następuje w kolejnych krokach symulacji. Krok to przejście od bieżącego stanu symulacji do
stanu kolejnego. Stan ekosystemu to rozmieszczenie organizmów w niszach. W trakcie tego
przejścia (kroku) organizmy wykonuje swoje funkcje życiowe.
<br>
Każdy organizm starzeje się i jeżeli przekroczy swój maksymalny wiek (określony w
liczbie kroków symulacji) staje się organizmem martwym. Maksymalny wiek organizmu
ustalany jest losowo dla każdego organizmu w zadanym przedziale. Każdy gatunek ma swój
przedział.
<br>
Jeżeli organizm nie jest martwy, to stara się najeść. Grzyb szuka w swoim sąsiedztwie
organizmów martwych i jeżeli takie są to losowo wybiera jeden z nich i go wchłania.
Organizm wchłonięty znika z ekosystemu. Bakteria natomiast poluje. W pierwszej kolejności
szuka w swoim sąsiedztwie glonów i jeżeli takie są wybiera losowo jednego. Jeżeli nie ma
glonów to szuka innej bakterii. Organizm upolowany jest wchłonięty i znika z ekosystemu.
Glon zaś po prostu pozyskuje pożywienie (prowadzi fotosyntezę). W pojedynczym kroku
symulacji dla każdego organizmu możliwy jest 1 posiłek. Każdy organizm ma swój limit
posiłków, po przekroczeniu którego już nie jest głodny i już nie szuka lub nie produkuje
pożywienia. Limit posiłków jest charakterystyczny dla każdego gatunku.
<br>
Jeżeli organizm nie jest głodny to stara się rozmnożyć. Organizm szuka w swoim
sąsiedztwie wolnej celi i jeżeli takie są to losowo w jednej z nich umieszcza swojego
potomka. Rozmnożenie się zmniejsza licznik posiłków o koszt potomka. Koszt potomka jest
charakterystyczny dla każdego gatunku. Potomek jest młody, tzn. jego licznik życia jest
ustawiony na wartość początkową i głodny, tzn. licznik posiłków jest wyzerowany.
<br>
Jeżeli organizm jest grzybem lub bakterią i nie posila się, ani się nie rozmnaża, to zmienia
celę, jeżeli w jego sąsiedztwie jest wolna cela. Zmiana następuje w sposób losowy.

## Instalacja

1. Sklonuj repozytorium::
```bash
git clone https://github.com/jakubdziem/Wirtualny-Ekosystem
```
2. Otwórz projekt w środowisku IDE.

<b>Krok 1</b><br>
![krok2](https://github.com/jakubdziem/Wirutalny-Ekosystem/assets/106815549/0a7ee9fe-136f-4c91-b603-1950100694a6)
<br><b>Krok 2</b><br>
![krok3](https://github.com/jakubdziem/Wirutalny-Ekosystem/assets/106815549/4164735b-6063-4002-8084-3ed3a09c542b)
<br><b>Ostatni krok</b><br>
![krok200](https://github.com/jakubdziem/Wirutalny-Ekosystem/assets/106815549/7a2a6703-91f7-448e-9228-c292710e5ded)
