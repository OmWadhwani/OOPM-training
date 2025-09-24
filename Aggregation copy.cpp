#include <iostream>
using namespace std;
class Base
{
protected:
    int data = 34;

public:
    int test()
    {
        return data;
    }
};

class Derived
{
public:
    Base b;
    void show()
    {
        cout << "Data is: " << b.test() << endl;
    }
};

int main()
{
    Derived d;
    d.show();
    return 0;
} 