// Shape Hierarchy:
// Problem Statement: Design a hierarchy of shape classes. 
// Begin with a base class Shape and then create derived classes like Circle, Rectangle, and Triangle. 
// Each shape should have methods for calculating area and perimeter specific to its geometry.

#include<iostream>
#include<math.h>

using namespace std;
class Shape
{   
    public:
    virtual double area()=0;
    virtual double perimeter()=0;
};
class Circle:public Shape
{
    private:
    double radius;
    public:
        Circle(double radius){
            this->radius = radius;
        }
        double area() {
            return M_PI * radius * radius;
        }  
        double perimeter(){
            return 2 * M_PI * radius;
        }            
};
class Rectangle:public Shape
{
    private:
    double l,b;
    public:
        Rectangle(double l,double b){
            this->l=l;
            this->b=b;
        }
        double area() {
            return l*b;
        }  
        double perimeter(){
            return 2 * (l+b);
       } 
};
class Triangle:public Shape
{
    private:
    double b,h,s;
    public:
        Triangle(double b, double h,double s){
            this->b=b;
            this->h=h;
            this->s=s;
        }
        double area() {
            return 0.5*b*h;
        }  
        double perimeter(){
            return 3*s;
        }            
};           

int main()
{
    Circle c(5);
    cout<<"Area of circle is: "<<endl;
    cout<<c.area()<<endl;
    cout<<"Perimeter of circle is: "<<endl;
    cout<<c.perimeter()<<endl;

    Rectangle r(5,6);
    cout<<"Area of rectangle is: "<<r.area()<<endl;
    cout<<"Perimeter of rectangle is: "<<r.perimeter()<<endl;
    
    Triangle t(4,5,6);
    cout<<"Area of traingle is: "<<t.area()<<endl;
    cout<<"Perimeter of traingle is: "<<t.perimeter()<<endl;

}