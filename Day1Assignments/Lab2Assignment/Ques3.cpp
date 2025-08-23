#include <iostream>
using namespace std;

int main() {
    char ch;
    int n;
    cout << "Enter a character and a number: ";
    cin >> ch >> n;
    for (int i = 1; i <= n; i++) {
        cout << char(ch + i) << " ";
    }
    return 0;
}
