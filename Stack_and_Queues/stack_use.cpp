#include <iostream>

using namespace std;
#include "dynamic_stack_using_array.h"

int main(){
    StackUsingArray s;
    cout << s.isEmpty() << endl;
    cout << s.pop() << endl;
    s.push(10);
    s.push(20);
    cout << s.top() << endl;
    s.push(30);
    cout  << s.size() << endl;
    s.push(40);
    cout << s.top() << endl;

    


    return 0;
}