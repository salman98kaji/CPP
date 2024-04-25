//  Create a class Point with data members as x,y. Create Default and Parameterized constructors.
//  Write getters and setters for all the data members. Also add the display function.Create the 
//  object of this class in main method and invoke all the methods in that class. 

#include<iostream>
using namespace std;

 class Point{
    private:
    int x;
    int y;
    public:
    Point(){
        int x=1;
        int y=1;
    }
    Point(int x,int y){
        this->x=x;
        this->y=y;
    }
    void setPoint(int a,int b){
        x=a;
        y=b;
    }
    int getPoint(){
        return x;
        return y;
    }
    void display(){
        cout<<"x is "<<x<<", "<<"y is "<<y<<endl;
    }
 };

 int main(){
    Point o3;
    cout<<"Default"<<endl;
    o3.display();

    Point o1;
    o1.setPoint(2,3);
    cout<<"Getter setter "<<endl;
    o1.display();

    Point o2(10,8);
    cout<<"Parametrised"<<endl;
    o2.display();
    
    // Point o3;
    // cout<<"Default"<<endl;
    // o3.display();
      
 }