#include <iostream>
using namespace std;

int main() {
    int num;
    int sum = 0;

    // Continuously accept numbers until a negative number is entered
    while (true) {
        cout << "Enter a number (enter a negative number to stop): ";
        cin >> num;

        // Check if the entered number is positive
        if (num >= 0) {
            // Add the number to the sum
            sum += num;
        } else {
            // If a negative number is entered, break out of the loop
            break;
        }
    }

    // Print the sum of the given numbers
    cout << "Sum of the given numbers: " << sum << endl;

    return 0;
}
