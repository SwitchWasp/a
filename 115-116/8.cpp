#include <iostream>

using namespace std;

int NWD(int a, int b) {
    while(b!=0){
        int pom=b;
        b=a%b;
        a=pom;
    }
    return a;
}

int NWW(int a, int b) {
    int c, d;
    c = a;
    d = b;
    while (true) {
        if (c == d) {
            break;
        }
        if (c < d) {
            c+=a;
        } else {
            d+=b;
        }
    }
    return d;
}

int main() {
    int a, b, e;
    cout << "bombki1 = "; cin>>a;
    cout << "bombki2 = "; cin>>b;
    e = NWW(a, b);
    cout << "Tzeba wykozystac po " << e << " pudelek";
    return 0;
}