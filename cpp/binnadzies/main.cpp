#include <iostream>
#include <string>

using namespace std;

int main() {
    string a = "11110100";
    cout << stoi(a, nullptr, 2);
    //"00001011"
    return 0;
}
