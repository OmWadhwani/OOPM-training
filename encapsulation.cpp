#include <iostream>
using namespace std;

class Base {
protected:
    int conf_data;

public:
    void set_conf_data(int data) {
        conf_data = data;
    }

    void display_conf_data() const {
        cout << "Confidential data: " << conf_data << endl;
    }
};

class Derived : public Base {
public:
    void modify_conf_data(int newdata) {
        set_conf_data(newdata); // Use the setter method to modify data
    }

    void view_modify_data() const { // const means view data only
        display_conf_data(); // Use the getter method to view data
    }
};

int main() {
    Derived object;
    object.set_conf_data(10);
    object.display_conf_data();
    object.modify_conf_data(20);
    object.view_modify_data();

    return 0;
}
