#include <iostream>
using namespace std;
// Function to calculate factorial
unsigned long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1; // Factorial of 0 and 1 is 1
    } else {
        unsigned long long result = 1;
        for (int i = 2; i <= n; ++i) {
            result *= i; // Multiply numbers from 2 to n
        }
        return result;
    }
}

int main() {
    int number;
    cout << "Enter a non-negative integer: ";
    cin >> number;

    // Check if the number is non-negative
    if (number < 0) {
        cerr << "Error: Please enter a non-negative integer.\n";
        return 1;
    }

    // Calculate factorial
    unsigned long long result = factorial(number);
    cout << "Factorial of " << number << " is: " << result << endl;

    return 0;
}
