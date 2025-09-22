#include<iostream>
using namespace std;

class Myclass {
    int x; 
    float y;

public:
    Myclass() {
        x = 0; 
        y = 2;
    }

    // Copy constructor
    Myclass(const Myclass &other) {
        x = other.x;
        y = other.y;
    }

    void display() {
        cout << "x:" << x << ", y:" << y << endl;
    }
};

int main() {
    Myclass m1;
    m1.display();

    // Using the copy constructor to create a new object as a copy of m1
    Myclass m2 = m1;
    m2.display();

    return 0;
}
