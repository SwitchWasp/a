#include <iostream>

using namespace std;

string imie; int liczba;

int main() {
    int n,d, ld=0;
    cout<<"n="; cin>>n;
    for (d=2; d<=n/2; d++) {
        if (n%d==0) ld++;
    }
    cout<<"Liczba dzielnikow wlasiwych wiekszych od 1: ";
    cout<<ld<<endl;
    return 0;
}
