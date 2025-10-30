#include <iostream>
#include <string>
using namespace std;

class Account
{
public:
    string holderName;
    int account_number;
    int aadhar;
    int amount = 0;

    void createAccount()
    {
        cout << "Enter holder name: "<<endl;
        cin >> holderName;
        cout << "Enter account number: "<<endl;
        cin >> account_number;
        cout << "Enter Aadhar number: "<<endl;
        cin >> aadhar;
        cout << "Enter initial amount (min Rs.1000): "<<endl;
        cin >> amount;

        if (amount<1000)
        {
            cout << " Insufficient amount entered!\n";
            return;
        }
        cout << "Account created successfully!\n";
    }

    void creditOrDebit()
    {
        char ans;
        int val;
        cout << "Press C to credit amount or D to debit amount: ";
        cin >> ans;

        if (ans == 'C' || ans == 'c')
        {
            cout << "Enter amount to credit: ";
            cin >> val;
            amount += val;
        }
        else if (ans == 'D' || ans == 'd')
        {
            cout << "Enter amount to debit: ";
            cin >> val;
            amount -= val;
        }
        else
        {
            cout << "Invalid option!\n";
        }

        cout << "Current Balance: Rs." << amount << endl;
    }
};

class Employees : public Account
{
    string empType;
    int salary;
    int valid_aadhar[4] = {123, 456, 789, 1080};

public:
    void emp_type()
    {
        cout << "Enter type of employee you want (e.g., clerk, manager): ";
        cin >> empType;

        if (empType == "clerk")
        {
            if (doc_verify())
                cout << "Document verification successful!\n";
            else
                cout << " Invalid Aadhar! Verification failed.\n";
        }
    }

    bool doc_verify()
    {
        for (int i = 0; i < 4; i++)
        {
            if (aadhar == valid_aadhar[i])
                return true;
        }
        return false;
    }

    
    void set_salary(int x,string emp_type){
    string emp;
    cout<<"Whats your employ type"<<endl;
    if(emp =="HR"){
        salary = x;
    }
    else{
        cout<<"Invalid access"<<endl;
    }
    }
};

int main()
{
    Account A1;
    Employees E1;
    A1.createAccount();
    E1.doc_verify();
    return 0;
}
