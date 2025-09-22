#include <iostream>
using namespace std;

class Two; 
class One
{
    int data;
public:
    
    void input(int value) 
    {
        data = value; 
    }
    friend void add(One, Two); 
};
class Two
{
    int data;

public:
    void input(int value)
    {
        data = value;
    }
    friend void add(One, Two); // friend function declaration
};
void add(One obj1, Two obj2) // friend function definition
{
    cout << "sum of two objects from definition of class One and Two is: " << obj1.data + obj2.data<<endl;
}
int main()
{
    One A;
    Two B;
    A.input(20);
    B.input(50);
    add(A, B); //calling friend function
    return 0;
}