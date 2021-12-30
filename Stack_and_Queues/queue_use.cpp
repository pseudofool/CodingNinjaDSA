#include <iostream>
using namespace std;
#include "dynamic_queue_using_array.h"

int main(){
    Queue<int> q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.enqueue(60);
    cout << q.getSize();



    return 0;
}