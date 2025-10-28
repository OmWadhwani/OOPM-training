
// Compile time polymphism
#include <iostream>
using namespace std;

class Add
{
public:
    int a;
    Add(int x) : a(x) {}

    // Overload '+' operator
    Add operator+(Add obj)
    {
        return Add(a + obj.a);
    }
};

int main()
{
    Add obj1(5), obj2(10);
    Add obj3 = obj1 + obj2; // '+' acts differently here
    cout << "Sum: " << obj3.a << endl;
}
