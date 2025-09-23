#include<iostream>
using namespace std;
class Parent1{
    public:
    void skin(){
        cout<<"Skin color is brown"<<endl;
    }
};
class Parent2{
    public:
    void eyes(){
        cout<<"Eyes color is blue"<<endl;
    }
};

class Child : public Parent1, public Parent2{
    public:
    void result(){
        cout<<"The child looks like"<<endl;
    }
};

int main(){
    Child A;
    A.result();
    A.eyes();
    A.skin();
}