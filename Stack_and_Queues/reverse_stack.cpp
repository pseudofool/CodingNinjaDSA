void reverseStack(stack<int> &input, stack<int> &extra) {
    // base case
    if (input.empty() || input.size() == 1){
        return;
    }
    // storing top element in temp variable
    int temp = input.top();
    input.pop();
    
    // using implicit stack to reverse using recursion
    reverseStack(input, extra);
    while(!input.empty()){
        extra.push(input.top());
        input.pop();
    }
    input.push(temp);
    while(!extra.empty()){
        input.push(extra.top());
        extra.pop();
    }
}