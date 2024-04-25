#include <iostream>
#include <vector>
#include <string>

// Base class Emp
class Emp {
protected:
    int id;
    std::string name;
    int deptId;
    double basicSalary;

public:
    // Constructor
    Emp(int id, const std::string& name, int deptId, double basicSalary)
        : id(id), name(name), deptId(deptId), basicSalary(basicSalary) {}

    // Compute net salary (virtual function)
    virtual double computeNetSalary() const {
        return 0; // Base implementation, overridden in derived classes
    }

    // Getter methods
    int getId() const {
        return id;
    }

    std::string getName() const {
        return name;
    }

    int getDeptId() const {
        return deptId;
    }
};

// Derived class Mgr
class Mgr : public Emp {
private:
    double perfBonus;

public:
    // Constructor
    Mgr(int id, const std::string& name, int deptId, double basicSalary, double perfBonus)
        : Emp(id, name, deptId, basicSalary), perfBonus(perfBonus) {}

    // Override computeNetSalary
    double computeNetSalary() const override {
        return basicSalary + perfBonus;
    }
};

// Derived class Worker
class Worker : public Emp {
private:
    double hoursWorked;
    double hourlyRate;

public:
    // Constructor
    Worker(int id, const std::string& name, int deptId, double basicSalary, double hoursWorked, double hourlyRate)
        : Emp(id, name, deptId, basicSalary), hoursWorked(hoursWorked), hourlyRate(hourlyRate) {}

    // Override computeNetSalary
    double computeNetSalary() const override {
        return basicSalary + (hoursWorked * hourlyRate);
    }

    // Getter method for hourly rate
    double getHourlyRate() const {
        return hourlyRate;
    }
};

int main() {
    std::vector<Emp*> employees;

    int choice;
    do {
        std::cout << "\nMenu: \n";
        std::cout << "1. Hire Manager\n";
        std::cout << "2. Hire Worker\n";
        std::cout << "3. Display information of all employees net salary\n";
        std::cout << "4. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1: {
                int id, deptId;
                std::string name;
                double basicSalary, perfBonus;
                std::cout << "Enter Manager details (id, name, deptId, basicSalary, perfBonus): ";
                std::cin >> id >> name >> deptId >> basicSalary >> perfBonus;
                employees.push_back(new Mgr(id, name, deptId, basicSalary, perfBonus));
                break;
            }
            case 2: {
                int id, deptId;
                std::string name;
                double basicSalary, hoursWorked, hourlyRate;
                std::cout << "Enter Worker details (id, name, deptId, basicSalary, hoursWorked, hourlyRate): ";
                std::cin >> id >> name >> deptId >> basicSalary >> hoursWorked >> hourlyRate;
                employees.push_back(new Worker(id, name, deptId, basicSalary, hoursWorked, hourlyRate));
                break;
            }
            case 3: {
                std::cout << "\nEmployee Details:\n";
                for (const auto& emp : employees) {
                    std::cout << "ID: " << emp->getId() << ", Name: " << emp->getName() << ", Department: " << emp->getDeptId()
                              << ", Net Salary: " << emp->computeNetSalary() << std::endl;
                }
                break;
            }
            case 4:
                std::cout << "Exiting...\n";
                break;
            default:
                std::cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 4);

    // Cleanup memory
    for (auto emp : employees) {
        delete emp;
    }

    return 0;
}
