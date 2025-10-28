
//Compile time polymphism
#include <iostream>
using namespace std;

class Print
{
public:
    void show(int x)
    {
        cout << "Integer: " << x << endl;
    }

    void show(double y)
    {
        cout << "Double: " << y << endl;
    }

    void show(string s)
    {
        cout << "String: " << s << endl;
    }
};

int main()
{
    Print obj;
    obj.show(10);
    obj.show(3.14);
    obj.show("Hello");
}
