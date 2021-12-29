#include <iostream>
using namespace std;
#include "queue_using_array.h"

int main(){
    Queue<int> q(5);
    cout << q.isEmpty() << endl;
    cout << q.dequeue() << endl;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    cout << q.getSize() << endl;
    cout << q.top() << endl;
    q.dequeue();
    q.enqueue(50);
    q.enqueue(60);
    



    return 0;
}