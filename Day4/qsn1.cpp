// 1) Write a program to create student class with data members rollno, marks1,mark2,mark3.
// Accept data (acceptInfo()) and display  using display member function.
// Also display total,percentage and grade.

#include<iostream>
using namespace std;

class Student
{
    private:
    int rollno;
    float marks1,marks2,marks3;

    public:

    void acceptInfo()
    {
        cout<<"Enter roll no"<<endl;
        cin>>rollno;
        cout<<"Enter marks of three subjects"<<endl;
        cin>>marks1>>marks2>>marks3;
    }

    void display()
    {
        cout<<"Roll no is: "<<rollno<<endl;
        cout<<"Marks for subject 1 is : "<<marks1<<endl;
        cout<<"Marks for subject 2 is : "<<marks2<<endl;
        cout<<"Marks for subject 3 is : "<<marks3<<endl;

        float total=marks1+marks2+marks3;
        float percentage=(total/300*100);

        cout<<"total marks is: "<<total<<endl;
        cout<<"percentage is: "<<percentage<<endl;

        if (percentage>=90)
        cout<<"Grade A+"<<endl;
        else if (percentage>=80)
        cout<<"Grade A"<<endl;
        else if (percentage>=70)
        cout<<"Grade B"<<endl;
        else if (percentage>=60)
        cout<<"Grade C"<<endl;
        else
        cout<<"Grade D"<<endl;
    }
};

int main()
{
    Student stu;
    stu.acceptInfo();
    cout<<"Student information"<<endl;
    stu.display();
    return 0;
    
}