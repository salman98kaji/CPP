#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a positive integer (n): ";
    cin >> n;

    int sumEven = 0, sumOdd = 0;

    // Loop through numbers from 1 to n
    for (int i = 1; i <= n; ++i) {
        if (i % 2 == 0) { // Even number
            sumEven += i;
        } else { // Odd number
            sumOdd += i;
        }
    }

    // Display the sum of even and odd numbers
    cout << "Sum of even numbers between 1 to " << n << ": " << sumEven << endl;
    cout<< "Sum of odd numbers between 1 to " << n << ": " << sumOdd << endl;

    return 0;
}
