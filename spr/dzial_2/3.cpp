#include <iostream>

using namespace std;

//***************
//napisal szymon
//***************

int main() {
    int liczba, wynik=0,i=1;

    cout << "Program liczacy srednia z wszystkih podanyh liczb (z mozliwoscia podania '0' aby wyjsc\n";

    cout<<"Podaj liczbe: "<< "\n";
    cin>>liczba;

    //pzypisanie najwiekszej i najmniejszej do wlasnie podanej liczby
    //pierwsza podana liczba jest w tym samym momencie najwieksza i najmniejsza liczba
    int najmniejsza=liczba, najwieksza=liczba;

    //wyjscie jesli podana liczba = 0
    if (liczba==0){
        cout << "Srednia to 0";
        return 0;
    }

    //while powtaza dopuki nie bylo wpisane 0
    while(liczba!=0){

        //lapie kolejna liczbe i dodaje ja do wyniku
        cin>>liczba;
        wynik=wynik+liczba;

        //dodaje do licznika czyli ile liczb bylo juz podane
        i++;

        //jesli podana liczba jest mniejsza od dotyhczasowej najmniejszej liczby
        //to najmniejsza liczba to wlasnie podana liczba
        //tak samo z najwieksza
        if(najmniejsza>liczba&&liczba!=0){
            najmniejsza=liczba;
        }
        if(najwieksza<liczba){
            najwieksza=liczba;
        }

    }

    cout<< "Srednia to: " << (wynik-najmniejsza-najwieksza)/i;
    return 0;
}