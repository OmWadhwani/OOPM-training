#include <iostream>
using namespace std;

class Myclass
{
    int x;
    float y;

public:
    // Default constructor
    Myclass()
    {
        x = 0;
        y = 0.0;
    }

    // Parameterized constructor with two parameters
    Myclass(int a, float b)
    {
        x = a;
        y = b;
    }

    void display()
    {
        cout << "x: " << x << ", y: " << y << endl;
    }
};

int main()
{
    // Using the default constructor
    Myclass m1;
    cout << "Object m1 created using default constructor:" << endl;
    m1.display();

    // Using the parameterized constructor
    Myclass m2(5, 3.14);
    cout << "\nObject m2 created using parameterized constructor:" << endl;
    m2.display();

    return 0;
}
