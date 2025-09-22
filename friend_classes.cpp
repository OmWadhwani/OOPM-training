#include <iostream>
using namespace std;

class Two; // Forward declaration of class

class One
{
    friend class Two;  // Two is the friend of class One
    int a = 24;
public:
    void show()
    {
        cout << "This is class One" << endl;
    }
};

class Two
{
    friend class One; // Class One is a friend of class Two

public:
    void show2()
    {
        cout << "And this is class Two" << endl;
    }

    void accessOnePrivate(One &obj) // Member function of class Two to access private data of class One
    {
        cout << "Accessing private data of class One from class Two: " << obj.a << endl;
    }
};

int main()
{
    One obj1;
    Two obj2;

    obj1.show();
    obj2.show2();

    // Accessing private member of class One from class Two
    obj2.accessOnePrivate(obj1);

    return 0;
}
