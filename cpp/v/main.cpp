#include <iostream>

using namespace std;

const string TEKST = "ALA ALBO ADA";

int Porownaj (string wzorzec)
(
    int n = TEKST.lenght();
    int m = wzorzec.lenght();

    for (int poz =  0; poz <= n-m; poz++)

(
        int j = 0;
        while (j < m && TEKST[poz+j] == wzorzec[j])
            j++;
        if (j == m)
            return poz;
        )
        return -1;

        )
        int main ()

  (
      cout << "Tekst :" << TEKST << end;
      string wzorzec;
      cout << "\nPodaj wzorzec: "; cin >> wzorzec;
      cout << "Pozycja: " << Porownaj (wzorzec) << endl;
      return 0;

      )



