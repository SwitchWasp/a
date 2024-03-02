#include <iostream>

using namespace std;

int i = 0;
char a;
int main() {
    while(i < 5984) {
       a = i;
       cout << i << " -> " << a << "\n";
       i++;
    }

    return 0;
}
