#include <iostream>
using namespace std;
#include "templates.h"

int main(){
    Pair<int, int> p1;
    p1.setX(10);
    p1.setY(20);
    
    Pair<Pair<int, int>, int> p2;
    p2.setX(p1);
    p2.setY(30);
    
    cout << "Pair P1: " << p1.getX() << " " << p1.getY() << endl;
    cout << "Triplet P2: " << p2.getX().getX() << " " << p2.getX().getY() << " " << p2.getY() << " " << endl;


return 0;
}