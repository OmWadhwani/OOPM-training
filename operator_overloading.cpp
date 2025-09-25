#include <iostream>
using namespace std;

class Complex {
private:
    float real;
    float imaginary;

public:
    // Constructor to initialize the complex number
    Complex(float r = 0.0, float i = 0.0) : real(r), imaginary(i) {}

    // Overloading the + operator to add two complex numbers
    Complex operator+(const Complex& other) const {
        Complex result;
        result.real = real + other.real;
        result.imaginary = imaginary + other.imaginary;
        return result;
    }

    // Display the complex number
    void display() const {
        cout << "Complex Number: " << real << " + " << imaginary << "i" << endl;
    }
};

int main() {
    // Creating two complex numbers
    Complex c1(2.5, 3.0);
    Complex c2(1.5, 2.0);

    // Adding two complex numbers using operator overloading
    Complex sum = c1 + c2;

    // Displaying the result
    cout << "Result after addition: ";
    sum.display();

    return 0;
}
