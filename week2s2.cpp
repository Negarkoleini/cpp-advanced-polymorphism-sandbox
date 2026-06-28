#include <iostream>
#include<string>
#include"company.h"
#include <iomanip>

using namespace std;

int main()
{
    cout << fixed << setprecision(0);

    Manager m1("ali rezaie", 101, 5000000, 160, 2000000, 8, 7);
    Manager m2("maryam ahmadi", 102, 4500000, 160, 1500000, 3, 4);
    Manager m3("reza karimi", 103, 4800000, 160, 1000000, 0, 6);

    Developer d1("sara hosseini", 201, 4000000, 160, 12);
    Developer d2("mohammad noori", 202, 3800000, 160, 0);
    Developer d3("narges mohammadi", 203, 4200000, 160, 25);

    Intern i1("hamid rezaie", 301, 2000000, 160, 140);
    Intern i2("leila ahmadi", 302, 2000000, 160, 160);
    Intern i3("amir hosseini", 303, 2000000, 160, 200);
    Intern i4("saeed rezaie", 304, 1500000, 0, 100);

    // ---------- آرایه‌ای از اشاره‌گرهای Employee* ----------
    Employee* employees[] = {
        &m1, &m2, &m3,
        &d1, &d2, &d3,
        &i1, &i2, &i3, &i4
    };
    int count = sizeof(employees) / sizeof(employees[0]);

    // ---------- اعمال توابع روی همه کارمندان با یک حلقه ----------
    for (int i = 0; i < count; ++i) {
        // چاپ اطلاعات (چندریختی اجرا می‌شود)
        employees[i]->printInformation();
        cout << "----------------------------------------" << endl;
    }
    cout << "========== The end ==========" << endl;

    return 0;
}