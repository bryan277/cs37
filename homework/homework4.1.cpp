// Hans Vos
// CS37
// Homework 4.1
// Due 2/11

#include <iostream>

using namespace std;

class Employee
{
    private:
        char name, address, title, department;
        int salary, age;

    public:
        void setValues(char vname, char vaddress, char vtitle, char vdepartment, int vsalary, int vage)
        {
            name = vname;
            address = vaddress;
            title = vtitle;
            department = vdepartment;
            salary = vsalary;
            age = vage;
        }

    void getEmployeeName()
    {
        return name;
    }
       
    void getAddress()
    {
        return address;
    }

    void getTitle()
    {
        return title;
    }

    void getDepartment()
    {
        return department;
    }

    void getSalary()
    {
        return salary;
    }

    void getAge()
    {
        return age;
    }

    
};

void getInfo(Employee &lmR1)
{
    char vname, vaddress, vtitle, vdepartment;
    int vsalary, vage;

    cout << "Enter name: ";
    getline(cin, vname);

    cout << "Enter address: ";
    getline(cin, vname);

    cout << "Enter title: ";
    getline(cin, vname);

    cout << "Enter department: ";
    getline(cin, vname);
    cin.ignore();

    cout << "Enter salary: ";
    cin >> vsalary;

    cout << "Enter age: ";
    cin >> vage;

    lmR1.setValues(vname, vaddress, vtitle, vdepartment, vsalary, vage);
}

int main()
{
    Employee myR1;
    getInfo(myR1);

    cout << "Employee: " << myR1.getEmployeeName();

    cout << "Address: " << myR1.getAddress();

    cout << "Title: " << myR1.getTitle();

    cout << "Department: " << myR1.getDepartment();

    cout << "Salary: " << myR1.getSalary();

    cout << "Age: " << myR1.getAge();
}


