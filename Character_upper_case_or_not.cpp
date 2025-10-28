#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter character: ";
    cin >> ch;

    if (ch >= 'A' && ch <= 'Z') {
        cout << "Upper case" << endl;
    } else if (ch >= 'a' && ch <= 'z') {
        cout << "Lower case" << endl;
    } else {
        cout << "Not an English letter" << endl;
    }

    return 0;
}
