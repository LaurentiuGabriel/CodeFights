#include <iostream>
#include <cmath>
using namespace std;

unsigned long long int getInput(unsigned long long int maxVal) {
    unsigned long long int value;
    while (true) {
        cin >> value;
        if (value >= 1 && value <= maxVal) {
            return value;
        }
    }
}

unsigned long long int gcd(unsigned long long int a, unsigned long long int b) {
    while (b != 0) {
        unsigned long long int t = a;
        a = b;
        b = t % b;
    }
    return a;
}

int main() {
    const unsigned long long int MAX_VAL = 10000000000ULL;

    cout << "Enter a: ";
    unsigned long long int a = getInput(MAX_VAL);

    cout << "Enter b: ";
    unsigned long long int b = getInput(MAX_VAL);

    unsigned long long int c, m;
    while (true) {
        cout << "Enter c and m: ";
        c = getInput(MAX_VAL);
        m = getInput(MAX_VAL);
        if (gcd(c, m) == 1) {
            break;
        }
    }

    long long int result = (pow(a, b) - static_cast<long long int>(pow(a, b) / c) * c) % m;
    cout << result << endl;

    return 0;
}
