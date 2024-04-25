#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    // Dynamically allocate memory for the array
    int* arr = new int[size];

    // Accept numbers from the user
    cout << "Enter " << size << " integers separated by spaces: ";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    // Finding sum
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }

    // Finding average
    double average = static_cast<double>(sum) / size;

    // Finding maximum and minimum
    int max = arr[0];
    int min = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    // Output the results
    cout << "Sum of the numbers: " << sum << endl;
    cout << "Average of the numbers: " << average << endl;
    cout << "Maximum number: " << max << endl;
    cout << "Minimum number: " << min << endl;

    // Deallocate memory
    delete[] arr;

    return 0;
}
