#include <iostream>
#include <string>

class Car{

private:
std::string model;
int fuel;
int speed;

public:
    Car(std::string carModel, int carFuel, int carSpeed)
    {model=carModel;
    fuel =carFuel;
    speed = carSpeed;}
void accelerate(){
speed = speed + 20;
}
void refuel(){
if (fuel>100){fuel = 100;}
else {fuel = fuel+10;}
}
void stats(){
std::cout<<"Car model: "<<model<<", car fuel: "<<fuel<<", car speed: "<<speed<<std::endl;
}
};

int main(){


Car BMW("2001",40,20);
BMW.accelerate();
BMW.refuel();
BMW.stats();



return 0;
}
