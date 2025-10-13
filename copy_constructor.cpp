#include<iostream>
#include<string>
using namespace std;

class Myclass {
    int age;
    string name;

public:
    Myclass(int a , string s) {
        age = a;
        name  =s;
    }

    // Copy constructor
    Myclass(const Myclass &S){
        age = S.age;
        name = S.name;
    }

    void display() {
        cout << "Age is:" << age<< ", name is:" << name << endl;
    }
};

int main() {
Myclass obj1(21,"aJAY");

Myclass obj2(obj1);
Myclass obj3(obj1);
obj3.display();
Myclass obj4(obj1);
    return 0;
}
