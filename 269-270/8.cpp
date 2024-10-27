#include <iostream>

using namespace std;

const int N = 10;

void por(int a[]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j<N; j++) {
            if (a[i] < a[j]) {
                swap(a[i], a[j]);
            }
        }
    }
}

int main()
{
    int Waga[N] = {58,90,10,5,77,93,56,11,78,10};
    int limit = 100;

    por(Waga);
    for (int i : Waga) {
        cout << i << " ";
    }
    cout << endl;

    int j = N-1, max = 0, i = 0;
    while (i<N/2) {
        if (Waga[i] + Waga[N-j] < limit) {
            max++;
        }
        i++;
        j--;
    }
    cout << "\nMax liczba par: " << max;
    return 0;
}