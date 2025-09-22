#include<iostream>
using namespace std;

class Animal {
public:
    void eat() {
        cout << "Animal is eating\n";
    }
};

class Mammal : virtual public Animal {
public:
    void run() {
        cout << "Mammal is running\n";
    }
};

class Bird : virtual public Animal {
public:
    void fly() {
        cout << "Bird is flying\n";
    }
};

class Bat : public Bird, public Mammal {
public:
    void navigate() {
        cout << "Bat is navigating\n";
    }
};


int main(){
    Bat b;
    b.eat();
    b.fly();
    b.navigate();
}
