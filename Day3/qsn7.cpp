#include <iostream>
#include <iomanip>
using namespace std;
class Student {
private:
    int rollNo;
    int marks1;
    int marks2;
    int marks3;

public:
    // Member function to accept student information
    void acceptInfo() {
        cout << "Enter Roll No: ";
        cin >> rollNo;
        cout << "Enter Marks 1: ";
        cin >> marks1;
        cout << "Enter Marks 2: ";
        cin >> marks2;
        cout << "Enter Marks 3: ";
        cin >> marks3;
    }

    // Member function to display student information
    void display() const {
        cout << "Roll No: " << rollNo << endl;
        cout << "Marks 1: " << marks1 << endl;
        cout << "Marks 2: " << marks2 << endl;
        cout << "Marks 3: " << marks3 << endl;
    }

    // Member function to calculate total marks
    int calculateTotal() const {
        return marks1 + marks2 + marks3;
    }

    // Member function to calculate percentage
    double calculatePercentage() const {
        return static_cast<double>(calculateTotal()) / 3;
    }

    // Member function to calculate grade
    char calculateGrade() const {
        double percentage = calculatePercentage();
        if (percentage >= 90)
            return 'A';
        else if (percentage >= 80)
            return 'B';
        else if (percentage >= 70)
            return 'C';
        else if (percentage >= 60)
            return 'D';
        else
            return 'F';
    }
};

int main() {
    Student student;

    // Accept student information
    student.acceptInfo();

    // Display student information
    cout << "\nStudent Information:\n";
    student.display();

    // Display total marks, percentage, and grade
    cout << "\nTotal Marks: " << student.calculateTotal() << endl;
    cout << "Percentage: " << fixed << setprecision(2) << student.calculatePercentage() << "%" << endl;
    cout << "Grade: " << student.calculateGrade() << endl;

    return 0;
}
