#include <iostream>
using namespace std;

int main() {
    int number;

    // Accept a positive integer from the user
    cout << "Enter a positive integer: ";
    cin >> number;

    // Check if the number is positive
    if (number <= 0) {
        cerr << "Error: Please enter a positive integer.\n";
        return 1;
    }

    cout << "Factors of " << number << " are: ";

    // Find factors of the number
    for (int i = 1; i <= number; ++i) {
        if (number % i == 0) {
            cout << i << " ";
        }
    }

    cout << endl;

    return 0;
}
