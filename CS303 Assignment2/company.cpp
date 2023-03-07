#include <string>
#include <iostream>
#include "company.h"
using namespace std;

Employee::Employee(string firstname, string lastname) {
}

double Employee::weeklySalary(int hoursworked, int hourlyrate) {
    return hoursworked;
}

int Employee::healthCare(int paycheck) {
    return paycheck;
}

int Employee::vacationDays(int hoursworked) {
    return hoursworked;
}

// Nonprofessional
double NonProfessionalEmployee::weeklySalary(int hoursworked, int hourlyrate) {
    double salary = (hoursworked * hourlyrate);
    cout << "Weekly salary is: " << salary;
    return salary;
}

int NonProfessionalEmployee::healthCare(int paycheck) {
    cout << "With the employee making " << paycheck << ", you will have " << (paycheck * .20) << " dollars deducted for health care.\n"; // more healthcare cost 
    return paycheck;
}

int NonProfessionalEmployee::vacationDays(int hoursworked) {
    cout << "Since you are a nonprofessional employee, you get a 3 day vacation every 3 months.\n"; // random amount
    return hoursworked;
}

// Professional
double ProfessionalEmployee::weeklySalary(int hoursworked, int hourlyrate) {
    double salary = (hoursworked * hourlyrate);
    cout << "Weekly salary is: " << salary;
    return salary;
}

int ProfessionalEmployee::healthCare(int paycheck) {
    cout << "With the employee making " << paycheck << ", you will have " << (paycheck * .1) << " dollars deducted for health care.\n";
    return paycheck;
}

int ProfessionalEmployee::vacationDays(int hoursworked) {
    cout << "Since you are a professional employee, you get a 1 week vacation every 3 months.\n";
    return hoursworked;
}
