#include<iostream>
using namespace std;

// Inline function declaration
inline int add(int a, int b) {
    return a + b;
}

int main() {

    cout << "Sum: " << add(3, 5) << endl;

    return 0;
}
