#include <iostream>
#include <string>

using namespace std;

//liczba podawana pzez uzytkownika to string bo wtedy latwiej mozna wyciagnac pojedyncze znaki
//jesli liczba jest stringiem i liczba = "elo" to liczba[2] = 'o'
string liczba;

int main() {
    cout << "Program sprawdzajacy czy liczba jest palidromiczna\n";
    cout << "Podaj calkowita liczbe dodatnia: ";
    cin >> liczba;

    int j = liczba.length();
    string liczba_3 = liczba;

    j = j - 1;

    //petla sprawdzajaca liczbe od pzodu
    for (int i = 0; i < liczba.length(); i++) {

        //i pzyjmuje wartosci dodatnie od 1 do dlugosci liczba a j jedzie od tylu
        //jesli i sprawdza od pzodu a j od tylu to mozna latwo sprawdzic czy liczba od tylu ta sama liczba od pzodu (palidromiczna)
        if (liczba_3[i] != liczba_3[j]) {

            //jesli w ktorym kolwiek momencie podczas sprawdzania okaze sie ze liczba od tylu
            //nie jest taka sama jak ta z pzodu to program mowi uzytkownikowi i sie wylacza
            cout << "Liczba nie jest palidromiczna";
            return 0;
        }

        //j sprawdza liczbe od tylu dla tego odejmje sie od ostatniego indexu
        j--;
    }

    //jesli programowi nie udalo sie wykryc ze liczba nie jest palidromiczna to liczba jest palidromiczna
    cout << "Liczba jest palidromiczna!";

    return 0;
}