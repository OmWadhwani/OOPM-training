#include <iostream>
using namespace std;

class Animal
{
public:
    virtual void sound()
    { // virtual = dynamic binding
        cout << "Some generic animal sound" << endl;
    }
};

class Dog : public Animal
{
public:
    void sound() override
    { // override keyword (optional)
        cout << "Bark!" << endl;
    }
};

class Cat : public Animal
{
public:
    void sound() override
    {
        cout << "Meow!" << endl;
    }
};

int main()
{
    Animal *a1; // base class pointer
    Dog d;
    Cat c;

    a1 = &d;
    a1->sound(); // Bark!

    a1 = &c;
    a1->sound(); // Meow!
}
