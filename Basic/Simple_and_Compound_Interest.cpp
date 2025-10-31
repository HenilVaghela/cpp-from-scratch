#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double principal, rate, time, simpleInterest, compoundInterest;

    cout << "Enter Principal amount: ";
    cin >> principal;
    cout << "Enter Rate of interest (per annum): ";
    cin >> rate;
    cout << "Enter Time (in years): ";
    cin >> time;

    simpleInterest = (principal * rate * time) / 100.0;
    compoundInterest = principal * (pow((1 + rate / 100.0), time)) - principal;

    cout << "Simple Interest = " << simpleInterest << endl;
    cout << "Compound Interest = " << compoundInterest << endl;

    return 0;
}
