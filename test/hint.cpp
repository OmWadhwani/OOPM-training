
#include<iostream>
#include<string>
using namespace std;
class Bank{
    protected:
    int amount;
    public:
        virtual void calculateInterest(){ //Pure virtual function

        }
};

class CurrentAcc: public Bank{
    int curr_amt;
    public:
        CurrentAcc(int a)
        {
            amount = a;
        }
        void calculateInterest() override
        {
            curr_amt = amount;
        }
        void show_curr_amt(){
            cout<<"current intrst "<<curr_amt<<endl;
        }
};

class SavingAcc : public Bank
{
    int sav_amt;

public:
    SavingAcc(int a)
    {
        amount = a;
    }
    void calculateInterest() override
    {
        sav_amt = amount+ (amount*.025);
    }
    void show_sav_int(){
        cout<<"Saings account "<< sav_amt<<endl;
    }
};
int main(){
    SavingAcc S1(1000);
    S1.calculateInterest();
    S1.show_sav_int();
}