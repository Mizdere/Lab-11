#include <iostream>
#include <iomanip>
using namespace std;

// This program uses a structure to hold data about a rectangle
// and determines whether it is a square.

// Last Modified Date: 5/15/2024

struct Rectangle {
    float length;
    float width;
    float area;
    float perimeter;
};

int main() {
    Rectangle box;

    cout << "Enter the length of the rectangle: ";
    cin >> box.length;

    cout << "Enter the width of the rectangle: ";
    cin >> box.width;

    cout << endl << endl;

    box.area = box.length * box.width;
    box.perimeter = 2 * (box.length + box.width);

    cout << fixed << showpoint << setprecision(2);
    cout << "The area of the rectangle is: " << box.area << " square units." << endl;
    cout << "The perimeter of the rectangle is: " << box.perimeter << " units." << endl;

    // Check if the rectangle is also a square
    if (box.length == box.width) {
        cout << "This rectangle is also a square." << endl;
    } else {
        cout << "This rectangle is not a square." << endl;
    }

    return 0;
}
