#include<iostream>
using namespace std;

class myclass{
    public:
        
    ~myclass(){
        cout<<"Destructor called"<<endl;
    } // destructor is called only when the object goes out of scope
    myclass()
    {
        cout << "constructor called" << endl;
    }
};

int main(){
myclass obj;
return 0;
}