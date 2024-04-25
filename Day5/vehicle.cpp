#include<iostream>
#include<string>
using namespace std;

class vehicle{
    protected:
    string name;
    int numwheels;

    public:
    vehicle(string name,int numwheels){
        this->name=name;
        this->numwheels=numwheels;
    }

    virtual void start_engine()=0;
    virtual void display(){
        cout<<"name:"<<name<<" , "<<"Wheels:"<<numwheels<<endl;
    }
    
};
class car:public vehicle{
    private:
    string model;
    public:
    car(string name,int numwheels,string model):vehicle(name,numwheels),model(model){}
    void displayInfo(){
        display();
        cout<<"Model is:"<<model<<endl;
    }
    void start_engine(){
        cout<<"Car engine started"<<endl;
    }
};

class motorcycle:public vehicle{
    private:
    int gears;
    public:
    motorcycle(string name,int numwheels,int gears):vehicle(name,numwheels),gears(gears){}
    void displayInfo(){
        display();
        cout<<"No of gears is:"<<gears<<endl;
    }
    void start_engine(){
        cout<<"motor cycle engine started"<<endl;
    }
};

class truck:public vehicle{
    private:
    string manufacturer;
    public:
    truck(string name,int numwheels,string manufacturer):vehicle(name,numwheels),manufacturer(manufacturer){}
    void displayInfo(){
        display();
        cout<<"Manufacturer is:"<<manufacturer<<endl;
    }
    void start_engine(){
        cout<<"Truck engine started"<<endl;
    }
};

int main(){
    car c("Tata",4,"Nano");
    c.displayInfo();
    c.start_engine();
    motorcycle m("Pulsar",2,5);
    m.displayInfo();
    m.start_engine();
    truck t("mahindra",8,"tata");
    t.displayInfo();
    t.start_engine();
}