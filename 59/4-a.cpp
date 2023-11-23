#include <iostream>
#include <string>

using namespace std;

//funkcja zamieniajaca podany hex na kod binarny
string hex_na_bin(string hex){
    string bin = "";
    //array ("tablica") z wszystkimi wartosciami hex (od 0 do 15)
    //na kazdym miejscu jest zapis tego samego numeru w kodzie binarnym
    //np na miejscu 11 jest 1011 czyli 11
    string wartosci_hex[] = {"0000", "0001", "0010", "0011", "0100", "0101", "0110", "0111", "1000", "1001", "1010", "1011", "1100", "1101", "1110", "1111"};

    //petla dodajaca odpowiadajace wartosci z arraya do bin
    for(int i = 0; i < hex.length(); i++){

        //hex[i] to kolejne znaki w podanym kodzie hex
        //tutaj zamiana ascii - jesli liczba jest miedzy 0 a 9 to odejmujemy 0
        //wtedy po prostu jest zamiana z wartosci char na int
        //0 ma wartosc 48 a 9 ma wartosc 57
        //czyli 57 - 48 = 9
        //to samo z literami
        if(hex[i]>='0' && hex[i]<='9'){
            bin += wartosci_hex[hex[i]-'0'];
        } else {
            bin += wartosci_hex[hex[i]-'A'+10];
        }
    }
    return bin;
}

int main(){
    cout << "Program zamieniajacy podana liczbe hex na liczbe w systemie binarnym\n";
    string hex;
    cout << "Podaj liczbe: ";
    cin >> hex;
    cout << "Reprezentacja binarna: " << hex_na_bin(hex); //wywolanie funkcji
    return 0;
}