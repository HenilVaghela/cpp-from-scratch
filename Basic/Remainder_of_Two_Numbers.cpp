#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;

    if (b != 0)
        cout << "Remainder = " << a % b << endl;
    else
        cout << "Division by zero is not allowed." << endl;

    return 0;
}
