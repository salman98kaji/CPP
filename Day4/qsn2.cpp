//2. Create a class Date with data members as dd, mm, yy. Write getters and setters for all the data members.
// Also add the display function. Create Default and Parameterized constructors. Create the 
//object of this class in main method and invoke all the methods in that class.

#include<iostream>
using namespace std;

class Date
{
    private:
    int dd;
    int mm;
    int yy;

    public:
    Date()
    {
        dd=5;
        mm=6;
        yy=2001;
    }
    Date(int d,int m,int y)
    {
        dd=d;
        mm=m;
        yy=y;
    }
    int getDay(){
        return dd;
    }
    void setDay(int d){
        dd=d;
    }
    int getMonth(){
        return mm;
    }
    void setMonth(int m){
        mm=m;
    }
    int getYear(){
        return yy;
    }
    void setYear(int y){
        yy=y;
    }
    void display(){
        cout<<"Date:"<<dd<<"/"<<mm<<"/"<<yy<<endl;
    }
};

int main()
{
    Date d1;
    //using setter and getter
    d1.setDay(30);
    d1.setMonth(12);
    d1.setYear(1998);
    cout<<"Day 1 info:"<<endl;
    d1.display();
    cout<<endl;
    
    //using parametrised constr
    Date d2(12,05,2014);
    cout<<"Day2 info :"<<endl;
    d2.display();   
}