#include <iostream>
#include<cmath>
#include <vector>
#include <algorithm>

// Base class Shape
class Shape {
public:
    virtual double area() const = 0;
    virtual double perimeter() const = 0;
};

// Derived class Circle
class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    double area() const override {
        return 3.14159 * radius * radius;
    }

    double perimeter() const override {
        return 2 * 3.14159 * radius;
    }
};

// Derived class Rectangle
class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    double area() const override {
        return length * width;
    }

    double perimeter() const override {
        return 2 * (length + width);
    }
};

// Derived class Triangle
class Triangle : public Shape {
private:
    double side1;
    double side2;
    double side3;

public:
    Triangle(double s1, double s2, double s3) : side1(s1), side2(s2), side3(s3) {}

    double area() const override {
        double s = (side1 + side2 + side3) / 2;
        return sqrt(s * (s - side1) * (s - side2) * (s - side3));
    }

    double perimeter() const override {
        return side1 + side2 + side3;
    }
};

// Interface Sortable
class Sortable {
public:
    virtual bool compare(const Shape* s1, const Shape* s2) const = 0;
};

// Comparator for sorting shapes by area
class AreaComparator : public Sortable {
public:
    bool compare(const Shape* s1, const Shape* s2) const override {
        return s1->area() < s2->area();
    }
};

int main() {
    // Create some shapes
    Circle circle(5);
    Rectangle rectangle(4, 6);
    Triangle triangle(3, 4, 5);

    // Create a list of shapes
    std::vector<Shape*> shapes = { &circle, &rectangle, &triangle };

    // Sort the shapes by area using the AreaComparator
    AreaComparator comparator;
    std::sort(shapes.begin(), shapes.end(), [&comparator](const Shape* s1, const Shape* s2) {
        return comparator.compare(s1, s2);
    });

    // Print the sorted shapes
    std::cout << "Sorted Shapes by Area:" << std::endl;
    for (const auto shape : shapes) {
        std::cout << "Area: " << shape->area() << ", Perimeter: " << shape->perimeter() << std::endl;
    }

    // Clean up the memory
    for (auto shape : shapes) {
        delete shape;
    }

    return 0;
}
