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
        cout << endl << "= = = = Enter " << i+1 << " Number Of Account Details = = = =" << endl;
        cout << endl;
        cout << "Enter Account Number :- ";
        cin >> account_number;
        // cin >> ignore();
        cout << "Enter Account Holder Name :- ";
        getline (cin ,account_holder_name);
        cout << "Enter Account Balance :- ";
        cin >> account_balance;

        obj[i].setDetails(account_balance,account_number,account_holder_name);
    }

    double perform_account_number;
    int choice;
    do
    {

        cout << endl << "= = = = Task's = = = =" << endl;
        cout << "Enter 1 For Withdraw" << endl;
        cout << "Enter 2 For Deposit" << endl;
        cout << "Enter 3 For Current Balance" << endl;
        cout << "Enter 4 For To Display Account Balance" << endl;
        cout << "Enter 0 To Exit Program" << endl;
        cout << "Enter Your Choice :- ";
        cin >> choice;
        
        switch (choice)
        {
        case 0:
            /* code */
            break;

        case 1:
            cout << "Enter Account Number To Withdraw :- ";
            cin >> perform_account_number;
            break;

        case 2:
            cout << "Enter Account Number To Deposit :- ";
            cin >> perform_account_number;
            break;

        case 3:
            cout << "Enter Account Number To See The Current Balance :- ";
            cin >> perform_account_number;
            break;

        case 4:
            cout << "Enter Account Number To See Account Details :- ";
            cin >> perform_account_number;
            break;
        
        default:
            cout << "Sorry Wrong Choice";
            break;
        }

        switch (choice)
        {
        case 0:
            cout << "= = = = Program Is Sucessfully Executed = = = =" << endl;
            break;
        
        case 1:    
            
            break;
        
        default:
            break;
        }
    }
    while (choice != 0);
    
    return 0;
}