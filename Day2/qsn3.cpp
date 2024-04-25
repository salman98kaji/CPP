#include <iostream>
using namespace std;
int main() {
    char ch;
    int n;

    // Accept a character from the user
    cout << "Enter a character: ";
    cin >> ch;

    // Accept an integer from the user
    cout << "Enter an integer n: ";
    cin >> n;

    // Display the next n characters
    cout << "Next " << n << " characters after '" << ch << "': ";
    for (int i = 0; i < n; ++i) {
        cout << static_cast<char>(ch + i + 1);
    }
    cout << endl;

    return 0;
}
