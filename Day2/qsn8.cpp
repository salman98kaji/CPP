#include <iostream>
using namespace std;
bool isPrime(int num) {
    if (num <= 1) {
        return false; // 1 and numbers less than 1 are not prime
    }
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return false; // If num is divisible by any number less than or equal to its square root, it's not prime
        }
    }
    return true;
}

int main() {
    int n;
    cout << "Enter a positive integer (n): ";
    cin >> n;

    cout << "Prime numbers between 1 to " << n << " are:\n";

    // Iterate through numbers from 1 to n and print prime numbers
    for (int i = 2; i <= n; ++i) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}
