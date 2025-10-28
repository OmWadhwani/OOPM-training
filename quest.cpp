// o Base class : Shape with virtual function area().o Derived classes : Circle, Rectangle, Triangle.o Input parameters dynamically and display area.

#include<iostream>
using namespace std;
class Shape{
    public:
    virtual void Area() = 0;
};

class Circle: 
public Shape{
    int rad;
 public :
     Circle(int r)
     {
         rad =r;
     }
 void Area() override
    {
        cout<<"Circle area is" <<3.14*rad*rad<<endl;
    }
};
class Rectangle: public Shape
{
int len,  brdth ;
public : 
Rectangle(int l , int b)
    {
        len =l ;
        brdth =b;
    }
    void Area() override
    {
        cout << "rectangle area is" << len*brdth<< endl;
    }
};

int main(){

}