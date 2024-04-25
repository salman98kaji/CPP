/* Create a class ComplexNumber with data members real, imaginary. Create Default and Parameterized constructors.
Write getters and setters for all the data members.
Also add the display function. Create the object of this class in main method and invoke all the methods in that class.
 */


#include<iostream>
using namespace std;


class ComplexNumber
{
    private:
    double real;
    double imaginary;


    public:
   
    ComplexNumber(){
        real=10;
        imaginary=12;
    }
    ComplexNumber(double real,double imaginary ){
        this->real=real;
        this->imaginary=imaginary;  
    }
    void setReal(double r){
        real=r;
    }
    double getReal(){
        return real;
    }
    void setImaginary(double i){
        imaginary=i;
    }
    double getImaginary(){
        return imaginary;
    }
    void display(){
        cout<<"complex number"<<endl;
        cout<<"real num:"<<real<<" "<<"imaginary num:"<<imaginary<<" "<<endl;
    }
};


int main(){
    ComplexNumber obj1;
    obj1.setReal(5);
    obj1.setImaginary(2);
    cout<<"setter getter"<<endl;
    obj1.display();

    ComplexNumber obj2(8,9);
    cout<<"parameterised"<<endl;
    obj2.display();
    return 0;    
}