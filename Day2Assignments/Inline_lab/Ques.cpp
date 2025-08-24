#include <iostream>
using namespace std;
inline int areaOfSquare(int side) {
    return side * side;
}
inline int areaOfRectangle(int length, int width) {
    return length * width;
}

inline int areaOfCircle(int radius) {
    return 3.14 * radius * radius;
}
int main() {
    int side, length, width, radius;
    cout << "Enter side of square: ";
    cin >> side;
    cout << "Area of square: " << areaOfSquare(side) << endl;

    cout << "Enter length and width of rectangle: ";
    cin >> length >> width;
    cout << "Area of rectangle: " << areaOfRectangle(length, width) << endl;

    cout << "Enter radius of circle: ";
    cin >> radius;
    cout << "Area of circle: " << areaOfCircle(radius) << endl;

    return 0;
}