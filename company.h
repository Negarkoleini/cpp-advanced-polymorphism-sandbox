#ifndef COMPANY
#define COMPANY

#include <iostream>
#include<string>
#include<iomanip>

using namespace std;

class Employee {
protected:
    string name;
    int id;
    double baseSalary;
    int minHoursRequired;

   
public:
    Employee(string n,int i, double base, int min);
    ~Employee();
    virtual void printInformation()=0;
    virtual double calculateSalary()=0;
};

class Manager: public Employee {

private:
    double performanceBonus;
    int supervisedEmployeesCount;
    int yearsAtCompany;
public:
    Manager(string n , int i, double salary , int min , double bouns , int count , int year);
    void printInformation();
    double calculateSalary();
};

class Developer : public Employee {

private:
    int overtimeHours;

public:
    Developer(string n, int i, double salary, int min, int overtime);
    void printInformation();
    double calculateSalary();
};

class Intern: public Employee {
private:
    int workedHours;
public:
    Intern(string n, int i, double salary, int min, int work);
    void printInformation();
    double calculateSalary();
};



#endif
