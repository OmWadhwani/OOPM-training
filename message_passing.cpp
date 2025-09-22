#include<iostream>
using namespace std;
class Cars{
	public:
		void StartEngine(){
			cout<<"Engine started"<<endl;
		}
};
class Driver{
	public:
		void drive(Cars &car){
			car.StartEngine();
			cout<<"Car is being drived"<<endl;
		}
};
int main(){
	Cars mycar;
	Driver driver;
	driver.drive(mycar); /*Message passing, Driver instructs the car to 
	start the engine and driver*/
}
