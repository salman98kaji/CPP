//Bank Account Inheritance:
// Problem Statement: Design a system for managing bank accounts. Create a base class BankAccount
//  with attributes like account number and balance. Derive classes like SavingsAccount and
//   CheckingAccount, each with specialized methods like withdraw() and calculate_interest().

#include<iostream>
#include<string.h>
using namespace std;

class BankAccount
{
    protected:
    int accNum;
    double balance;
    
    public:
    BankAccount(int a, double b){
        accNum=a;
        balance=b;
    }
    virtual void withdraw(double amount)=0;
    virtual void calculate_interest()=0;
    
    void deposit(double amount){
        balance+=amount;
        cout<<"Deposit of amount $"<<amount<<"completed"<<endl;
    }
    double getBalance(){
        return balance;
    }

};
class SavingsAccount:public BankAccount
{
    private:
    double interestRate;
    public:
    SavingsAccount(int accNum,double balance,double ir):BankAccount(accNum,balance)  //constr initializer list
    {
        interestRate=ir;
    }
    void withdraw(double amount){
        if(balance-amount>=0) {
            balance-=amount;
            cout<<"withdrawal of $"<<amount<<" completed"<<endl;
        }else{
            cout<<"Insufficient balance"<<endl;
        }
    }
    void calculate_interest(){
        double interest=balance*interestRate/100;
        balance+=interest;
        cout << "Interest calculated: $" << interest << endl;
    }
};
class CheckingAccount:public BankAccount
{
    public:
    CheckingAccount(int accNum,double balance):BankAccount(accNum,balance){
        accNum=accNum;
        balance=balance;
        
    }
    void withdraw(double amount){
        if (balance-amount>=0){
            balance-=amount;
            cout<<"Withdrawal of $"<<amount<<" "<<"is completed"<<endl;
        }
        else{
            cout<<"Insufficient balance"<<endl;
        }
    }
    void calculate_interest(){
        cout<<"Checking account donot earn interest"<<endl;
    }
};


int main()
{
    SavingsAccount s(1101,5000,2.5);
    s.deposit(500);
    s.withdraw(200);
    s.calculate_interest();
    cout<<"Balance"<<s.getBalance()<<endl;;  
    CheckingAccount c(101,7000);
    c.deposit(800);
    c.withdraw(350);
    c.calculate_interest();
    cout<<"Balance"<<c.getBalance()<<endl;            
   
    
}
