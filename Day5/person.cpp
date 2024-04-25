// Person and Student Inheritance:
// Problem Statement: Model a system for handling individuals and students within an educational 
// institution. Create a base class Person with attributes like name and age. Derive a Student 
// class with additional attributes like student ID and GPA, inheriting the common attributes 
// from the Person class.

#include<iostream>
#include<string.h>
using namespace std;

class Person
{
    protected:
    string name;
    int age;
    public:
    Person(){
        string name="abc";
        int age=0;
    }
    Person(string name,int age){
        this->name=name;
        this->age=age;
    }
    void display(){
        cout<<"Student name and age is="<<name<<" "<<age<<" "<<endl;
    }
};

class student:public Person{
    private:
    string id;
    double gpa;
    public:
    student(string name,int age,string id,double gpa){
        this->name=name;
        this->age=age;
        this->id=id;
        this->gpa=gpa;
    }
    void display(){
        Person::display();
        cout<<"Student id is:"<<id<<endl;
        cout<<"Student gpa is:"<<gpa<<endl;
    }
};
int main(){
    student s1("salman",25,"101",7.9);
    student s2("fardin",16,"102",8.5);
    cout<<"---------Stduent 1 details---------"<<endl;
    s1.display();
    cout<<"--------stduent 2 details---------"<<endl;
    s2.display();
    return 0;

}

