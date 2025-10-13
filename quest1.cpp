#include <iostream>
#include <string>
using namespace std;

class Bankaccount{
    
    int accoountNumber;
    int balance;
    public:
    Bankaccount(int acc, int bal){
        accoountNumber = acc;
        balance = bal;
    }

    Bankaccount(const Bankaccount &obj){
        balance = obj.balance;
        accoountNumber = obj.accoountNumber;
    }
    void add_balance(int amt){
        balance+=amt;
    }

    void show(){
        cout<<"Account Number: "<<accoountNumber<<endl;
        cout<<"Balance:"<<balance<<endl;
    }
};

int main(){
Bankaccount b(101,3000);
b.add_balance(300);
Bankaccount b2 = b;
b.show();
b2.add_balance(400);
b2.show();
}