
/*Important! 
  the diamond problem is also called disinheritance*/
#include <iostream>
using namespace std;
class Animal
{
public:
    void eat()
    {
        cout << "Animal is eating" << endl;
    }
};

class Mammal : public Animal
{
public:
    void run()
    {
        cout << "Mammal is running" << endl;
    }
};

class Bird : public Animal
{
public:
    void fly()
    {
        cout << "Bird is flying" << endl;
    }
};

class Bat : public Mammal, public Bird
{
public:
    void navigate()
    {
        cout << "Bat navigates" << endl;
    }
};

int main()
{
    Bat b;
    b.eat(); /*program doesn't knows from which class to inherit this function*/
    b.run();
    b.fly();
    b.navigate();
}