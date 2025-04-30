#include<iostream>
using namespace std;

class Student
{
public:
    string std_name;
    int total_marks;
public:
    void setStudent(
        string std_name, 
        int total_marks)
    {
        this->std_name = std_name;
        this->total_marks = total_marks;

    }
    void getStudent()
    {
        cout << endl << "Student With Highest Total Marks Is :- " << endl;
        cout << "Name :- " << std_name << endl;
        cout << "Total Marks :- " << total_marks << endl;
    }
};

int main()
{
    int size;

    cout << "Enter The Size Of Classroom :- ";
    cin >> size;

    Student std[size];
    string std_name;
    int sub_1_marks,sub_2_marks,sub_3_marks;
    int total_marks;

    for (int i=0; i<size; i++)
    {
        cout << endl << "Student "<< i+1 <<" :-- " << endl;
        cout << "Enter Student Name :- ";
        cin >> std_name;
        cout << "Enter 1st Subject Marks :- ";
        cin >> sub_1_marks;
        cout << "Enter 2nd Subject Marks :- ";
        cin >> sub_2_marks;
        cout << "Enter 3rd Subject Marks :- ";
        cin >> sub_3_marks;
        cout << endl;
        total_marks = sub_1_marks + sub_2_marks + sub_3_marks;

        std[i].setStudent(std_name,total_marks);
    }
    int highest = std[0].total_marks;
    for (int i=0; i<size; i++)
    {
        if (std[i].total_marks > highest)
        {
            highest = std[i].total_marks;
        }
    }
    for (int i=0; i<size; i++)
    {
        if (std[i].total_marks == highest)
        {
            
        std[i].getStudent();
        }
    }
    return 0;
}