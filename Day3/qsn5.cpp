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

    // Accept the number to search
    int num;
    cout << "Enter the number to search: ";
    cin >> num;

    // Search the number in the array
    bool found = false;
    for (int i = 0; i < size; ++i) {
        if (arr[i] == num) {
            found = true;
            break;
        }
    }

    // Display the result
    if (found) {
        cout << "Number " << num << " is present in the array.\n";
    } else {
        cout << "Number " << num << " is not present in the array.\n";
    }

    // Deallocate memory
    delete[] arr;

    return 0;
}
