#include<iostream>
#include<string>
using namespace std;

class Complex{
    int real ,img;
    public:
    Complex(){
        real=0;
        img=0;
    }
    Complex(int r,int i){
        real=r;
        img=i;
    }
    void display(){
        cout<<real<<"+"<<img<<"i"<<endl;
    }

    Complex operator+(Complex &obj){
        Complex temp;
        temp.real=real+obj.real;
        temp.img=img+obj.img;
        return temp;
    }
};
int main(){
   Complex C1(2,3);
   Complex C2(3,2);
   Complex C3;
   C3=C1+C2;
   C3.display();
    return 0;
}