#include<iostream>
using namespace std;

class Myfriend{ // interfaces
    public:
   virtual void shoes() = 0; //Pure Vir funct
};

class Me: public Myfriend{
    public:
    void shoes() override{
        cout<<"These shoes are mine"<<endl;
    }
};

int main(){
    Me m;
    m.shoes();
}