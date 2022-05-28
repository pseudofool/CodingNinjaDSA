#include "vehicle.h"
class Car:public Vehicle{
    public:
        int numGears;
    void print(){
        // cout << "Num tyres: " << numTyres << endl;
        // cout << "Color: " << color << endl;
        cout << "Num Gears: " << numGears << endl;
        cout << "max speed: " << maxSpeed << endl;
    }
};