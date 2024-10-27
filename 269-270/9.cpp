#include <iostream>

using namespace std;

const int N=15;
const int NOMINALY[]={50000, 20000, 10000, 5000, 2000, 1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
int ilosc[]={3, 2, 1, 1, 0,0,1,0,0,1,0,0,1,0,0};

void wr(int k, int r[]) {
    for (int i=0; i<N; i++) {
        if (ilosc[i] != 0) {
            if (ilosc[i] == 0) {
                continue;
            }
            if (k/NOMINALY[i] >= ilosc[i]) {
                k-=NOMINALY[i]*ilosc[i];
                r[i] = ilosc[i];
            } else {
                r[i]=k/NOMINALY[i];
                k=k%NOMINALY[i];
            }
        }
    }
}

int main() {
    int k, r[N];
    cout << "Podaj kwote w groszah: ";
    cin >> k;
    wr(k,r);
    for (int i=0;i<N;i++) {
        if (r[i]>0) {
            cout << NOMINALY[i]<<": "<<r[i]<<endl;
        }
    }
    return 0;
}