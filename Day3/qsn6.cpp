#include <iostream>
using namespace std;
int main() {
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;

    // Loop to iterate over rows
    for (int i = 1; i <= rows; ++i) {
        // Loop to print '*' in each row
        for (int j = 1; j <= i; ++j) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
