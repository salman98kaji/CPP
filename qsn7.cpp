#include <iostream>
#include <cmath>
using namespace std;
// Function to compute the area of a circle
double areaCircle(double radius) {
    return M_PI * radius * radius;
}

// Function to compute the area of a rectangle
double areaRectangle(double length, double width) {
    return length * width;
}

// Function to compute the area of a triangle
double areaTriangle(double base, double height) {
    return 0.5 * base * height;
}

int main() {
    char choice;
    double radius, length, width, base, height;

    do {
        // Display the menu
        cout<< "\nMenu:\n";
        cout << "a) Compute area of circle\n";
        cout << "b) Compute area of rectangle\n";
        cout << "c) Compute area of triangle\n";
        cout << "d) Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 'a':
                cout << "Enter the radius of the circle: ";
                cin >> radius;
                cout << "Area of the circle: " << areaCircle(radius) << endl;
                break;
            case 'b':
                cout << "Enter the length of the rectangle: ";
                cin >> length;
                cout << "Enter the width of the rectangle: ";
                cin >> width;
                cout << "Area of the rectangle: " << areaRectangle(length, width) << endl;
                break;
            case 'c':
                cout << "Enter the base of the triangle: ";
                cin >> base;
                cout << "Enter the height of the triangle: ";
                cin >> height;
                cout << "Area of the triangle: " << areaTriangle(base, height) << endl;
                break;
            case 'd':
                cout << "Exiting program.\n";
                break;
            default:
                cout << "Invalid choice! Please enter a valid option.\n";
        }
    } while (choice != 'd');

    return 0;
}
