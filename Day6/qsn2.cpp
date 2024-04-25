#include <iostream>
#include <string>

class BankAccount {
private:
    int acctNo;
    std::string customerName;
    double balance;

public:
    // Constructors
    BankAccount(int acctNo, const std::string& customerName, double balance) 
        : acctNo(acctNo), customerName(customerName), balance(balance) {}

    // Business logic methods
    void withdraw(double amt) {
        if (amt > balance) {
            std::cout << "Insufficient balance. Withdrawal failed.\n";
        } else {
            balance -= amt;
            std::cout << "Withdrawal of $" << amt << " successful.\n";
        }
    }

    void deposit(double amt) {
        balance += amt;
        std::cout << "Deposit of $" << amt << " successful.\n";
    }

    // Getter methods
    int getAccountNumber() const {
        return acctNo;
    }

    std::string getCustomerName() const {
        return customerName;
    }

    double getBalance() const {
        return balance;
    }
};

int main() {
    // Creating an object of the BankAccount class
    BankAccount account(123456, "John Doe", 1000.0);

    // Testing withdraw and deposit methods
    std::cout << "Initial balance: $" << account.getBalance() << std::endl;

    account.withdraw(500);
    std::cout << "Current balance after withdrawal: $" << account.getBalance() << std::endl;

    account.deposit(200);
    std::cout << "Current balance after deposit: $" << account.getBalance() << std::endl;

    return 0;
}
