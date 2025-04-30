#include<iostream>
using namespace std;

class Employee
{
public:
    string emp_name;
    int emp_id;
    int emp_salary;
public:
    void setEmployee(
        string emp_name,
        int emp_id,
        int emp_salary)
    {
        this->emp_name = emp_name;
        this->emp_id = emp_id;
        this->emp_salary = emp_salary;
    }
    void getEmployee()
    {
        cout << endl << "The Higest Salary From All The Employee Is :- " << endl;
        cout << "Employee Id Is :- " << emp_id << endl;
        cout << "Employee Name Is :- " << emp_name << endl;
        cout << "Employee Salary Is :- " << emp_salary << endl;
    }
};

int main()
{
    int size;

    cout << "Enter The Size Of Employee Management :- ";
    cin >> size;

    Employee emp[size];

    string emp_name;
    int emp_id;
    int emp_salary;

    for (int i=0; i<size; i++)
    {
        cout << "Enter Employee Name :- ";
        cin >> emp_name;
        cout << "Enter Employee Id :- ";
        cin >> emp_id;
        cout << "Enter Employee Salary :- ";
        cin >> emp_salary;
        cout << endl;
        
        emp[i].setEmployee(emp_name,emp_id,emp_salary);
    }
    int highest = emp[0].emp_salary;
    for (int i=0; i<size; i++)
    {
        if (emp[i].emp_salary > highest)
        {
            highest = emp[i].emp_salary;
        }
    }
    for (int i=0; i<size; i++)
    {
        if (emp[i].emp_salary == highest)
        {
            emp[i].getEmployee();
        }
        else
        {
            break;   
        }
    }
    return 0;
}