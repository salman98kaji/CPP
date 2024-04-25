// Animal Hierarchy:
// Problem Statement: Create a hierarchy of animal classes. Start with a base class Animal and then
//  create derived classes like Mammal, Bird, and Fish. Each of these derived classes should have 
//  specific properties and methods related to their respective categories of animals.

#include<iostream>
#include<string>
using namespace std;

//base class
class Animal
{
    private:
    string name;
    int age;

    public:
    Animal(string name,int age)
    {
        this->name=name;
        this->age=age;
    }
    void display()
    {
        cout<<"Name:"<< name<<" ,"<<"Age:"<<age<<endl;      //standard output stream
    }
    
    virtual void makeSound()=0;                           //pure virtual function
    
};
// derived class mammal

class Mammal:public Animal
{   
    private:
    bool isDomestic;
    
    public: 
    Mammal(string name,int age ,bool isDomestic):Animal(name,age),isDomestic(isDomestic){}

    void makeSound(){
        cout<<"Mammal sound"<<endl;
    }
    void displayInfo(){
        display();
        cout<<"isDomestic:"<< (isDomestic?"yes":"no")<<endl;
    }
};
class Bird:public Animal
{
    private:
    double wingspan;
    public:
    Bird(string name,int age,double wingspan):Animal(name,age),wingspan(wingspan){}
    
    void makeSound()
    {
        cout<<"Bird sound"<<endl;
    }
    void displayInfo()
    {
        display();
        cout<<"WingSpan:"<<wingspan<<endl;
    }
};
class Fish:public Animal
{
    private:
    string habitat;
    public:
    Fish(string name,int age, string habitat):Animal(name,age),habitat(habitat){}
    
    void makeSound()
    {
        cout<<"Fish sound"<<endl;
    }
    void displayInfo()
    {
        display();
        cout<<"Habitat:"<<habitat<<endl;
    }
};

int main()
{
    Mammal obj1("Lion",15,true);
    obj1.makeSound();
    obj1.displayInfo();

    Bird obj2("Eagle",5,10.5);
    obj2.makeSound();
    obj2.displayInfo();

    Fish obj3("Katla",1,"Lakes");
    obj3.makeSound();
    obj3.displayInfo();
}
