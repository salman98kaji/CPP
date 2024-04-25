#include <iostream>
#include <string>

// Base class Person
class Person {
protected:
    std::string name;
    int age;

public:
    // Constructor
    Person(const std::string& n, int a) : name(n), age(a) {}

    // Getter methods
    std::string getName() const {
        return name;
    }

    int getAge() const {
        return age;
    }
};

// Derived class Student
class Student : public Person {
private:
    int studentID;
    double GPA;

public:
    // Constructor
    Student(const std::string& n, int a, int id, double gpa) : Person(n, a), studentID(id), GPA(gpa) {}

    // Getter methods
    int getStudentID() const {
        return studentID;
    }

    double getGPA() const {
        return GPA;
    }
};

int main() {
    // Example usage
    Person person("John Doe", 25);
    Student student("Alice Smith", 20, 12345, 3.75);

    // Accessing base class attributes
    std::cout << "Person: Name - " << person.getName() << ", Age - " << person.getAge() << std::endl;

    // Accessing derived class attributes
    std::cout << "Student: Name - " << student.getName() << ", Age - " << student.getAge()
              << ", Student ID - " << student.getStudentID() << ", GPA - " << student.getGPA() << std::endl;

    return 0;
}
