#include <iostream>
using namespace std;

class Complex
{
    float real;
    float imag;

public:
    // Default constructor
    Complex()
    {
        real = 0;
        imag = 0;
    }

    // Parameterized constructor
    Complex(float r, float i)
    {
        real = r;
        imag = i;
    }

    // Overload '+' operator
    Complex operator+(const Complex &obj)
    {
        Complex result;
        result.real = real + obj.real;
        result.imag = imag + obj.imag;
        return result;
    }

    // Overload '-' operator
    Complex operator-(const Complex &obj)
    {
        Complex result;
        result.real = real - obj.real;
        result.imag = imag - obj.imag;
        return result;
    }

    // Display function
    void display()
    {
        if (imag >= 0)
            cout << real << " + " << imag << "i" << endl;
        else
            cout << real << " - " << -imag << "i" << endl;
    }
};

int main()
{
    Complex c1(5.5, 3.2);
    Complex c2(2.1, 1.3);

    Complex sum = c1 + c2;  // Using overloaded '+'
    Complex diff = c1 - c2; // Using overloaded '-'

    cout << "First Complex Number: ";
    c1.display();

    cout << "Second Complex Number: ";
    c2.display();

    cout << "\nSum: ";
    sum.display();

    cout << "Difference: ";
    diff.display();

    return 0;
}
