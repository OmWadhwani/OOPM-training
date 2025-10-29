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
        cout << "Enter holder name: ";
        cin >> holderName;
        cout << "Enter account number: ";
        cin >> account_number;
        cout << "Enter Aadhar number: ";
        cin >> aadhar;
        cout << "Enter initial amount (min Rs.1000): ";
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

private:
    bool doc_verify()
    {
        for (int i = 0; i < 4; i++)
        {
            if (aadhar == valid_aadhar[i])
                return true;
        }
        return false;
    }
};

// -------------------- Main Function --------------------
int main()
{
    Employees emp;
    emp.createAccount();
    emp.emp_type();
    emp.creditOrDebit();
    return 0;
}
