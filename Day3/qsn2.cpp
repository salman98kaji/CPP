#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    int originalNumber = number;
    int sum = 0;

    // Calculate the sum of digits
    while(number > 0) {
        int digit = number % 10; // Extract the last digit
        sum += digit; // Add the digit to the sum
        number /= 10; // Remove the last digit
    }

    // Display the sum of digits
    cout << "Sum of digits of " << originalNumber << " is: " << sum << endl;

    return 0;
}
