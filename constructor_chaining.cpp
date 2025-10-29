#include <iostream>
using namespace std;

// Base class
class Parent
{
public:
    Parent()
    {
        cout << "Parent class default constructor called" << endl;
    }

    Parent(int x)
    {
        cout << "Parent class parameterized constructor called with value: " << x << endl;
    }
};

// Derived class
class Child : public Parent
{
public:
    Child()
    {
        cout << "Child class default constructor called" << endl;
    }

    // Constructor chaining: calling Parent(int) from Child(int)
    Child(int x) : Parent(x)
    {
        cout << "Child class parameterized constructor called with value: " << x << endl;
    }
};

int main()
{
    cout << "Creating first object..." << endl;
    Child c1; // Calls Parent() then Child()

    cout << "\nCreating second object..." << endl;
    Child c2(100); // Calls Parent(int) then Child(int)

    return 0;
}
