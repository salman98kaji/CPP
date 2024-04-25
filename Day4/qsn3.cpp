//3. Create a class Book with data members as bname,id,author,price. Write getters and setters for all the 
//data members. Also add the display function. Create Default and Parameterized constructors. Create 
//the object of this class in main method and invoke all the methods in that class. 

#include<iostream>
#include<string>
using namespace std;

class Book
{
    private:
    string bname;
    int id;
    string author;
    int price;

    public:
    Book()
    {
        bname="";
        id=0;
        author="";
        price=0;
    }
    Book(string n,int i,string au,int p)
    {
        bname=n;
        id=i;
        author=au;
        price=p;
    }

    string getName(){
        return bname;
    }
    void setName(string n){
        bname=n;
    }
    int getId(){
        return id;
    }
    void setId(int i){
        id=i;
    }
    string getAuthor(){
        return author;
    }
    void setAuthor(string au){
        author= au;
    }
    int getPrice(){
        return price;
    }
    void setPrice(int p){
        price=p;
    }

    void display(){
        cout<<"Book name:"<<bname<<endl;
        cout<<"Book Id: "<<id<<endl;
        cout<<"AUhtor:"<<author<<endl;
        cout<<"Price:"<<price<<endl;
    }
};

int main()
{
    Book b3;
    b3.display();
    Book b1;
    b1.setName("2 States");
    b1.setId(12);
    b1.setAuthor("Chetan Bhagat");
    b1.setPrice(500);
    cout<<"Book 1 information"<<endl;
    b1.display();
    cout<<endl;
    
    Book b2("White Tiger",23,"Sharmila ghose",1150);
    cout<<"Book 2 information"<<endl;
    b2.display();
}
