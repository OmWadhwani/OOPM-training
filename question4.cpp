#include<iostream>
#include<string>
using namespace std;

class Vehicle{
    public:
    float speed;
    Vehicle(float s){
        speed =s;
    }

};
class Car: public Vehicle{
    public:
    int seats;
    Car(float s, int seatcount):
    Vehicle(s)
    {
        seats = seatcount;
    }
};
class ElectricCar:
public Car{
    public:
    string battery;
    ElectricCar(float s, int seatcount, string b) : Car(s, seatcount) {
        battery = b;
    }
};

class Airplane{
    public:
    float maxspeed;
    Airplane(float m)
    {
        maxspeed =m;
    }
};
class FlyingCar: public Car, public Airplane{
    public:
        FlyingCar(float k, int seatcount, float m) :
         Car(k,  seatcount), Airplane(m)
        {}
};
// int main(){

// }