#include <iostream>

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

int main() {
    wymierna a;
    int n;
    cout << "a = "; cin>>a.licz;
    cout << "b = "; cin>>a.mian;
    n = NWD(a.licz, a.mian);
    a.licz = a.licz/n;
    a.mian = a.mian/n;
    cout << "Ulamek po skroceniu: ";
    cout << a.licz << "/" << a.mian;
    return 0;
}
