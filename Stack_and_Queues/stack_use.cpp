#include <iostream>

using namespace std;
//#include "dynamic_stack_using_array.h"
#include "stack_using_templates.h"


int main(){
    StackUsingArray<int> s1;
    s1.push(10);
    s1.push(20);
     StackUsingArray<char> s2;
     s2.push('a');
     s2.push('b');
    cout << s1.top() << " " << s2.top() << endl;

    


    return 0;
}