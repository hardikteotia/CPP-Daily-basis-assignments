#include <iostream>
using namespace std;

int main() {
    int choice;
    while (true) {
        cout << "1. Area of Circle\n2. Area of Rectangle\n3. Area of Triangle\n4. Exit\n";
        cin >> choice;
        if (choice == 1) {
            double r;
            cout << "Enter radius: ";
            cin >> r;
            cout << 3.14159 * r * r << endl;
        } else if (choice == 2) {
            double l, w;
            cout << "Enter length and width: ";
            cin >> l >> w;
            cout << l * w << endl;
        } else if (choice == 3) {
            double b, h;
            cout << "Enter base and height: ";
            cin >> b >> h;
            cout << 0.5 * b * h << endl;
        } else if (choice == 4) {
            break;
        } else {
            cout << "Invalid choice\n";
        }
    }
    return 0;
}
