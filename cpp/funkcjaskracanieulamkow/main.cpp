#include <iostream>
#include <string>

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

wymierna Skroc (wymierna e) {
    int n;
    n = NWD(e.licz, e.mian);
    e.licz = e.licz/n;
    e.mian = e.mian/n;
    return e;
}

int main() {
    wymierna d{};
    cout << "a = "; cin>>d.mian;
    cout << "b = "; cin>>d.licz;

    wymierna c = Skroc(d);
    cout << "Ulamek po skroceniu: ";
    cout << c.licz << "/" << c.mian;
    return 0;
}
