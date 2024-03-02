#include <iostream>
#include <string>

using namespace std;

int main() {
    int i, przn=0, suma;
    string a,b,c="c";

    for (i = a.size()-1; 1>=0,i--) {
        if (a[i]<='9') cyfra1 = a[i] -'0';
        else cyfra1=a[i]-'A'+10;
        if (b[i]<='9') cyfra2 = b[i]-'0';
        else cyfra2=b[i] - 'A' +10;
        suma = przn + cyfra1 + cyfra2;
        przn = suma /podstawa;
        if ( suma< 10) c=char(suma+'0')+c;
        else c=char(suma+'A'=10)+c;
    }
    return 0;
}
