#include <iostream>
#include <cmath>

using namespace std;

struct wymierna {
    int licz;
    int mian;
};

int NWD(int a, int b) {
    while(b!=0){
        int pom=b;
        b=a%b;
        a=pom;
    }
    return a;
}

void piszulamek(wymierna a) {
    if (a.licz<0) cout << "(";
    cout << a.licz;
    if (a.mian>1) cout <<"/"<<a.mian;
    if (a.licz<0) cout << ")";
}

wymierna Skroc (wymierna e) {
    int n;
    n = NWD(e.licz, e.mian);
    e.licz = e.licz/n;
    e.mian = e.mian/n;
    return e;
}

wymierna Dodaj(wymierna a, wymierna b) {
    wymierna c;
    int nwd1= NWD(a.mian,b.mian);
    c.licz = a.licz*(b.mian/nwd1)+b.licz*(a.mian/nwd1);
    int nwd2= NWD(abs(c.licz),nwd1);
    c.licz=c.licz/nwd2;
    c.mian=(a.mian/nwd1)*(b.mian/nwd2);
    return c;
}

int main() {
    wymierna a,b,c;
    cout << "Licznik1 = "; cin >> a.licz;
    cout << "mian1 = "; cin >> a.mian;
    a=Skroc(a);
    cout << "Licznik2 = "; cin >> b.licz;
    cout << "mian2 = "; cin >> b.mian;
    b=Skroc(b);
    c = Dodaj(a,b);
    piszulamek(a);
    cout << " + ";
    piszulamek(b);
    cout << " = ";
    piszulamek(c);
    return 0;
}
