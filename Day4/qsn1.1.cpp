//1.1) Create a class Person with data members as name, age, city. Write getters and setters for all the data 
//members. Also add the display function. Create Default and Parameterized constructors. Create the 
//object of this class in main method and invoke all the methods in that class.

#include<iostream>
#include<string>
using namespace std;

class Person
{
    private:
    string name;
    int age;
    string city;

    public:

    Person(){       // default constr
        name="abc";
        age=0;
        city="xyz";
    }
    Person(string x,int y,string z){     //parameterised constr
        name=x;
        age=y;
        city=z;
    }
    void setName(string x){           //setter
        name=x;
    }
    string getName(){           //getter
        return name;
    }
    void setAge(int y){        
        age=y;
    }
    int getAge(){
        return age;
    }
    void setCity(string z){
        city=z;
    }
    string getCty(){
        return city;
    }
    void display(){
        cout<<"Name="<<name<<endl;
        cout<<"Age="<<age<<endl;
        cout<<"City="<<city<<endl;
    }
};

int main()
{
    // Creating an object using default constructor
    Person p3;
    p3.display();

    // Setting data using setters
    Person p1;
    p1.setName("Salman kaji");
    p1.setAge(25);
    p1.setCity("Pune");
    cout<<"Person 1 informaton"<<endl;
    p1.display();
    cout<<endl;

// Creating an object using parameterised constructor
    Person p2("Fardin kaji",15,"Agartala");
    cout<<"Person 2 information"<<endl;
    p2.display();
    cout<<endl;
}