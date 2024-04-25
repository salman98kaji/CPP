#include <iostream>
using namespace std;

double power(int x, int n) {
    if (n == 0) {
        return 1;
    } else if (n > 0) {
        double result = 1;
        for (int i = 0; i < n; ++i) {
            result *= x;
        }
        return result;
    } else {
        double result = 1;
        for (int i = 0; i < -n; ++i) {
            result /= x;
        }
        return result;
    }
}

int main() {
    int x, n;
    cout << "Enter the base (x): ";
    cin >> x;
    cout << "Enter the exponent (n): ";
    cin >> n;

    double result = power(x, n);
    cout << x << " raised to " << n << " is: " << result << endl;

    return 0;
}

