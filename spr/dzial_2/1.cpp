#include <iostream>

using namespace std;

int main()

{

    int liczba;

    cout << "Program wypisuje 10 kolejnych wielokrotnosci dodatniej liczby naturalnej" << endl;

    cout<<"Podaj liczbe: "<<endl;

    cin>>liczba;


    for(int i = 1; i <= 10; i++) {
        cout << liczba * i << "\n";
    }

    return 0;

}