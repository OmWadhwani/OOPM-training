#include<iostream>
using namespace std;
class A{
    public:
    void display();
};
void A:: display(){
    cout<<"this is display function"<<endl;
}
int main(){
    A a;
    a.display();
}