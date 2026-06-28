#include <iostream>
#include<string>
#include "company.h"

using namespace std;

Employee::Employee(string n,int i,double base, int min) {
	name = n;
	id = i;
	baseSalary = base;
	minHoursRequired = min;


}
Employee:: ~Employee() {
	cout << "destructor called" << endl;
}

Manager::Manager(string n, int i, double salary, int min, double bouns, int count, int year) : Employee(n, i, salary, min) {
	performanceBonus = bouns;
	supervisedEmployeesCount = count;
	yearsAtCompany = year;

}



void Manager::printInformation() {
	cout << "this person is manager" << endl;
	cout << "employee name is " << name << endl;
	cout << "employee id is " << id << endl;
	cout << "employee base salary is " << baseSalary << endl;
	cout << "employee minHoursRequited is " << minHoursRequired << endl;
	cout << "performanceBonus is " << performanceBonus << endl;
	cout << "supervisedEmployeesCount is " << supervisedEmployeesCount << endl;
	cout << "yearsAtCompany is " << yearsAtCompany << endl;
	cout << "final salary :" << calculateSalary() << endl;
}


double Manager:: calculateSalary() {
	double salary = baseSalary + performanceBonus + (5000 * supervisedEmployeesCount);

	if (yearsAtCompany > 5) {
		salary = salary * 1.2;
	}

	return salary;

}

Developer::Developer(string n, int i, double salary, int min, int overtime): Employee(n, i, salary, min) {
	overtimeHours = overtime;
}

double Developer::calculateSalary() {
	double salary = baseSalary + (overtimeHours * 10000);
	return salary;
}



void Developer::printInformation() {
	cout << "this person is developer" << endl;
	cout << "employee name is " << name << endl;
	cout << "employee id is " << id << endl;
	cout << "employee base salary is " << baseSalary << endl;
	cout << "employee minHoursRequited is " << minHoursRequired << endl;
	cout << "overtime hours is " << overtimeHours << endl;
	cout << "final salary :" << calculateSalary() << endl;
}



Intern::Intern(string n, int i, double salary, int min, int work) : Employee(n, i, salary, min) {
	workedHours = work;

}
void Intern:: printInformation(){
	cout << "this person is developer " << endl;
	cout << "employee name is " << name << endl;
	cout << "employee id is " << id << endl;
	cout << "employee base salary is " << baseSalary << endl;
	cout << "employee minHoursRequited is " << minHoursRequired << endl;
	cout << "worked hours is " << workedHours << endl;
	cout << "final salary :" << calculateSalary() << endl;
}

double Intern::calculateSalary() {
	if (minHoursRequired <= 0)
		return 0;

	double salary = ((double)workedHours / minHoursRequired) * baseSalary;

	return salary;

}



