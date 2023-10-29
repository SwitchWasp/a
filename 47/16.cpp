#include <iostream>
#include <string>

using namespace std;
int a = 0;
int liczby[512]; //512 array bo czemu nie - uzytkownik moze podac max 512 liczb
string podane;

int main() {
    cout << "Program sprawdzajacy czy z wszystkich cyfr podanyh pzez uzytkownika da sie zbudowac trojkat\n";

    //petla do zapisywania liczb na kazde miejsce w array liczby[512]
    //kazda nowa liczba jest zapisywana na kolejne miejsce az do 512
    for (int i = 0; i < 512; i++) {
        cout << "\n\n\n\n['koniec' aby wyjsc]\nPodaj liczbe: ";
        cin >> podane;

        //jesli uzytkownik wpisze "koniec" to petla konczy dzialanie
        if (podane != "koniec") {
            liczby[i] = stoi(podane);
            cout << liczby[i];
            a++;
        } else {
            break;
        }
    }

    //3 petle sprawdzajace wszystkie mozliwe kombinacje 3 liczb z podanych x miejsc
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < a; j++) {
            for (int h = 0; h < a; h++) {
                //sprawdza tylko jesli nie porownoje liczb na tyh samyh miejscah czyli np liczby[5] i liczby[5]
                if (i != j and i != h and j != h) {
                    if (liczby[i] + liczby[j] < liczby[h] or liczby[i] + liczby[h] < liczby[j] or liczby[j] + liczby[h] < liczby[i]) {
                        cout << "Z liczb " << liczby[i] << " " << liczby[j] << " " << liczby[h] << " nie da sie zrobic trojkata";
                        return 0;
                    }
                }
            }
        }
    }

    //jesli nie udalo sie znalesc zadnyh bledow w podanyh liczbah to pisze ze wszystkie sa dobre do zrobienia trojkata
    cout << "Z wszystkih liczb podanyh da sie zrobic trojkat";
    return 0;
}