#include <iostream>

// Abstract base class Shape
class Shape {
public:
    // Pure virtual method for calculating area
    virtual double area() const = 0;
};

// Derived class Rectangle
class Rectangle : public Shape {
private:
    double width;
    double height;

public:
    // Constructor
    Rectangle(double w, double h) : width(w), height(h) {}

    // Override area method
    double area() const override {
        return width * height;
    }
};

// Derived class Circle
class Circle : public Shape {
private:
    double radius;

public:
    // Constructor
    Circle(double r) : radius(r) {}

    // Override area method
    double area() const override {
        return 3.14159 * radius * radius;
    }
};

// Derived class Square
class Square : public Shape {
private:
    double side;

public:
    // Constructor
    Square(double s) : side(s) {}

    // Override area method
    double area() const override {
        return side * side;
    }
};

int main() {
    // Creating objects of derived classes
    Rectangle rectangle(4, 6);
    Circle circle(5);
    Square square(3);

    // Testing area calculation
    std::cout << "Area of Rectangle: " << rectangle.area() << std::endl;
    std::cout << "Area of Circle: " << circle.area() << std::endl;
    std::cout << "Area of Square: " << square.area() << std::endl;

    return 0;
}
