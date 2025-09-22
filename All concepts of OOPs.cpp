#include<iostream>
using namespace std;

// Encapsulation: Using a class to encapsulate data and methods
class Car {
private:
    string brand;
    int speed;

public:
    // Constructor to initialize the object
    Car(string b, int s) : brand(b), speed(s) {}

    // Getter and setter methods for encapsulated data
    string getBrand()  {
        return brand;
    }

    int getSpeed()  {
        return speed;
    }

    void setSpeed(int s) {
        speed = s;
    }

    // Abstraction: Hiding the internal details and showing only essential features
    virtual void displayInfo()  {
        cout << "Brand: " << brand << ", Speed: " << speed << " km/h" << endl;
    }
};

// Inheritance: Creating a new class (SportsCar) that inherits from the base class (Car)
class SportsCar : public Car {
public:
    SportsCar(string b, int s) : Car(b, s) {}

    // Polymorphism: Overriding the displayInfo method to provide a specialized implementation
    void displayInfo()  {
        cout << "Sports Car - Brand: " << getBrand() << ", Speed: " << getSpeed() << " km/h" << endl;
    }
};

int main() {
    // Creating an object of the base class (Car)
    Car myCar("Toyota", 60);

    // Encapsulation: Accessing and modifying data through getter and setter methods
    cout << "Initial Speed: " << myCar.getSpeed() << " km/h" << endl;
    myCar.setSpeed(80);
    cout << "Updated Speed: " << myCar.getSpeed() << " km/h" << endl;

    // Abstraction: Displaying information using a simplified interface
    myCar.displayInfo();

    // Inheritance and Polymorphism: Creating an object of the derived class (SportsCar)
    SportsCar mySportsCar("Ferrari", 200);

    // Polymorphism: Invoking the overridden displayInfo method
    mySportsCar.displayInfo();

    return 0;
}

