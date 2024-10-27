#include <iostream>

using namespace std;

const int N = 10;

void por(int a[], int b[]) {
    for (int i = 0; i<N; i++) {
        for (int j = 0; j<N; j++) {
            if (a[i]*b[i] < a[j]*b[j]) {
                swap(a[j], a[i]);
                swap(b[j], b[i]);
            }
        }
    }
}

int main()
{
    int Waga[N] = {1,2,3,4,5,6,7,8,9,10};
    int Wartosc[N] = {12,5,2,1,4,3,9,10,11,12};
    int poj = 50;
    por(Waga, Wartosc);
    for (int i=0; i<N; i++) {
        cout << Waga[i] << " ";
    }
    cout << endl;
    for (int i=0; i<N; i++) {
        cout << Wartosc[i] << " ";
    }
    int i = 0, j = 0;
    while (i+Waga[j]<poj) {
        i+=Waga[j];
        j++;
    }
    cout << "\nMax waga plecaka: " << i;
    return 0;
}