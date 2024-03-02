#include <iostream>
#include <string>

using namespace std;

string slowo;
int i;

int main() {
    getline(cin, slowo);

    for (i = slowo.length() -1; i >=0; i--) {
        cout << slowo[i];
    }
    return 0;
}
