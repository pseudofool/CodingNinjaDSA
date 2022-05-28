#include <iostream>
using namespace std;
#include "car.h"

int main(){
    Car c;
    // c.color = "red";
    c.numGears = 3;
    // c.numTyres = 4;
    c.maxSpeed = 40;
    c.print();

    return 0;
}