#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;

const int N = 10;

struct pr {
    int p, t;
};

bool por(pr a, pr b) {
    return (a.p*60+a.t<b.p*60+b.t);
}

int MLP(pr P[]) {
    int lp=1, ost=0;
    for (int i=1;i<N;i++) {
        if (P[i].p*60>=P[ost].p*60+P[ost].t) {
            lp++;
            ost=i;
        }
    }
    return lp;
}

int main()
{
    pr P[N];
    ifstream we("dane.txt");
    for (int i=0; i<N; i++) {
        we>>P[i].p>>P[i].t;
    }
    we.close();
    sort(P,P+N,por);
    cout << "Maksymalna liczba prob: "<<MLP(P);
    return 0;
}