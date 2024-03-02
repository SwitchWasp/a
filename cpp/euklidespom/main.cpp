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

int main() {
    int a,b;
    cout << "a = "; cin>>a;
    cout << "b = "; cin>>b;
    cout << "NWD("<<a<<","<<b<<") = "<<NWD(a,b);
    return 0;
}