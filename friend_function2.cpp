#include<iostream>
using namespace std;
class test{
    int a;
    int b;
    public:
    void set_value(){
        a= 23;
        b = 44;
    }
    friend float mean(test t);
};

float mean(test t){
    float result;
    result  = (t.a + t.b)/2.0;
    return result;
}

int main(){
    test s;
    s.set_value();
    cout<<"Mean is:"<<mean(s)<<endl;
}