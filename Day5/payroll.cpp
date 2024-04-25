#include <iostream>
#include <string>

// Abstract base class Employee
class Employee {
protected:
    std::string name;
    int employeeID;

public:
    // Constructor
    Employee(const std::string& n, int id) : name(n), employeeID(id) {}

    // Abstract method for calculating pay
    virtual double calculatePay() const = 0;

    // Getter methods
    std::string getName() const {
        return name;
    }

    int getEmployeeID() const {
        return employeeID;
    }
};

// Concrete derived class HourlyEmployee
class HourlyEmployee : public Employee {
private:
    double hourlyRate;
    double hoursWorked;

public:
    // Constructor
    HourlyEmployee(const std::string& n, int id, double rate, double hours) 
        : Employee(n, id), hourlyRate(rate), hoursWorked(hours) {}

    // Implementation of calculatePay method
    double calculatePay() const override {
        return hourlyRate * hoursWorked;
    }
};

// Concrete derived class SalariedEmployee
class SalariedEmployee : public Employee {
private:
    double monthlySalary;

public:
    // Constructor
    SalariedEmployee(const std::string& n, int id, double salary)
        : Employee(n, id), monthlySalary(salary) {}

    // Implementation of calculatePay method
    double calculatePay() const override {
        return monthlySalary;
    }
};

int main() {
    // Example usage
    HourlyEmployee hourlyEmp("John Doe", 101, 15.50, 40);
    SalariedEmployee salariedEmp("Alice Smith", 102, 4000);

    // Accessing attributes and calculating pay
    std::cout << "Hourly Employee: " << hourlyEmp.getName() << ", ID: " << hourlyEmp.getEmployeeID()
              << ", Pay: $" << hourlyEmp.calculatePay() << std::endl;

    std::cout << "Salaried Employee: " << salariedEmp.getName() << ", ID: " << salariedEmp.getEmployeeID()
              << ", Pay: $" << salariedEmp.calculatePay() << std::endl;

    return 0;
}
