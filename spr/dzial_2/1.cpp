#include <iostream>

using namespace std;

int main()

{
    int liczba;
    cout << "Program wypisuje 10 kolejnych wielokrotnosci dodatniej liczby naturalnej" << endl;

    cout<<"Podaj liczbe: "<<endl;
    cin>>liczba;
//petla powtaza sie 10 razy gdzie i pzyjmuje wartosci od 1 do 10 (kolejne wielokrotnosci podanej liczby)
    for(int i = 1; i <= 10; i++) {
        cout << liczba * i << "\n";
    }

    return 0;

}