#include <iostream>
#include <string>

using namespace std;

class Employee {
private:
    string name;
    int age;
    double salary;

public:
    Employee(const string empName, int empAge, double empSalary){
       name=empName; 
       age=empAge; 
       salary=empSalary; 
    }
    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Salary: $" << salary << endl;
    }
};

class Manager : public Employee {
private:
    int teamSize;

public:
    Manager(const string& empName, int empAge, double empSalary, int empTeamSize)
        : Employee(empName, empAge, empSalary), teamSize(empTeamSize) {}

    void display() {
        Employee::display();
        cout << "Team Size: " << teamSize << " members" << endl;
    } 
};

int main() {
    Employee emp("John Doe", 30, 5000);
    Manager mgr("Jane Smith", 35, 8000, 10);

    cout << "Employee Details: " << endl;
    emp.display();

    cout << "\nManager Details: " << endl;
    mgr.display();

    return 0;
}
