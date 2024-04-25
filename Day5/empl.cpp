#include<iostream>
#include<string>
using namespace std;

class Employee{
    protected:
    int empid;
    string name;
    double salary;

    public:
    Employee(int empid,string name,double salary){
        this->empid=empid;
        this->name=name;
        this->salary=salary;
    }

    virtual void calsal()=0;
    virtual void display(){
        cout<<"name="<<name<<endl;
        cout<<"empid="<<empid<<endl;
        cout<<"salary="<<salary<<endl;
    }
};
class manager:public Employee{
    private:
    int numSubordinates;

    public:
    manager(int empid,string name,double salary,int numSubordinates):Employee(empid,name,salary),numSubordinates(numSubordinates){}

    void calsal(){
        salary+=0.1*salary;
    }
    void displayinfo(){
        display();
        cout<<"numSubordinates:"<<numSubordinates<<endl;
    }
};

class developer:public Employee{
    private:
    string programinglang;

    public:
    developer(int empid, string name,double salary, string programinglang):Employee(empid,name,salary),programinglang(programinglang){}

    void calsal(){
        salary+=0.05*salary;
    }
    void displayinfo(){
        display();
        cout<<"programming language known: "<<programinglang<<endl;
    }

};

int main(){
    manager m(101,"salman",10000,5);
    m.calsal();
    m.displayinfo();

    developer d(103,"Fardin",15000,"C++");
    d.calsal();
    d.displayinfo();
}