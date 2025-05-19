#include<iostream>
using namespace std;

class BankAccount
{
protected:
    double account_number,account_balance;
    string account_holder_name;
public:
    void setDetails(double account_number,double account_balance,string account_holder_name)
    {
        this->account_balance = account_balance;
        this->account_number = account_number;
        this->account_holder_name = account_holder_name;
    }

    void getDisplay()
    {
        cout << "---- Account Details ----" << endl;
        cout << "Account Number :- " << account_number << endl;
        cout << "Account Holder Name :- " << account_holder_name << endl;
        cout << "Account Balance :- " << account_balance << endl;
    }
};

int main()
{
    int size;

    cout << "Enter The Size Of Bank :- ";
    cin >> size;

    BankAccount obj[size];

    double account_number,account_balance;
    string account_holder_name;
    
    for (int i=0; i<size; i++)
    {
        cout << endl << i+1 << " Account" << endl;
        cout << "Enter Account Number :- ";
        cin >> account_number;
        // cin >> ignore();
        cout << "Enter Account Holder Name :- ";
        getline (cin ,account_holder_name);
        cout << "Enter Account Balance :- ";
        cin >> account_balance;

        obj[i].setDetails(account_balance,account_number,account_holder_name);
    }

    for (int i = 0; i < size; i++)
    {
        obj[i].getDisplay();
    }
    
    return 0;
}