#include<iostream>
#include<string>
using namespace std;

class Animal{
    private:
    string name;
    int age;

    public:
    Animal(string name,int age){
        this->name=name;
        this->age=age;
    }
    void display(){
        cout<<"name="<<name<<" ,"<<"age="<<age<<endl;
    }
    virtual void makeSound()=0;
};

class mammal:public Animal{
    private:
    bool isDomestic;

    public:
    mammal(string name,int age,bool isDomestic):Animal(name,age),isDomestic(isDomestic){}

    void displayInfo(){
        display();
        cout<<"isDomestic:"<<(isDomestic?"yes":"no")<<endl;
    }
    void makeSound(){
        cout<<"Mammal sound"<<endl;
    }
};

class Bird:public Animal{
    private:
    double wingspan;

    public:
    Bird(string name,int age,double wingspan):Animal(name,age),wingspan(wingspan){}

    void displayInfo(){
        display();
        cout<<"wingspan:"<<wingspan<<endl;
    }
    void makeSound(){
        cout<<"Bird sound"<<endl;
    }
};

class fish:public Animal{
    private:
    string habitat;

    public:
    fish(string name,int age,string habitat):Animal(name,age),habitat(habitat){}

    void displayInfo(){
        display();
        cout<<"habitat:"<<habitat<<endl;
    } 
    void makeSound(){
        cout<<"Fish sound"<<endl;
    }
};

int main(){
    mammal m("Lion",15,false);
    m.displayInfo();
    m.makeSound();

    Bird b("Eagle",7,10.5);
    b.displayInfo();
    b.makeSound();

    fish f("katla",1,"Water");
    f.displayInfo();
    f.makeSound();
}