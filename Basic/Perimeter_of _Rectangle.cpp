#include <iostream>
using namespace std;

int main() {
    double length, width, perimeter;
    cout << "Enter length and width of rectangle: ";
    cin >> length >> width;

    perimeter = 2 * (length + width);
    cout << "Perimeter of rectangle = " << perimeter << endl;

    return 0;
}
