#include <iostream>
using namespace std;

int main() {
    double a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    if (b != 0) {
        double quotient = a / b;
        cout << "Quotient = " << quotient << endl;
    } else {
        cout << "Division by zero is not allowed." << endl;
    }

    return 0;
}
