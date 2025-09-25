#include <iostream>
using namespace std;
// Base class
class Animal
{
public:
    // Virtual function in the base class
    virtual void makeSound() 
    {
        cout << "Animal makes a generic sound" << endl;
    }
};

// Derived class
class Dog : public Animal
{
public:
    // Override the makeSound function in the derived class
    void makeSound()
    {
        cout << "Dog barks: Woof! Woof!" << endl;
    }
};

int main()
{
    Animal animal;
    Dog myDog;

    // Call the makeSound function on objects of both classes
    animal.makeSound(); // Calls the base class implementation
    myDog.makeSound();         // Calls the overridden function in the derived class

    return 0;
}
