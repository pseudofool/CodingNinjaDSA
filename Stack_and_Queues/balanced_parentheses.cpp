bool isBalanced(string expression) 
{
    stack<int> s;
    for (int i=0; i<expression.length(); i++){
        if (expression[i] == '('){
            s.push(expression[i]);
        }else if (!s.empty()){
            s.pop();
        }else{
            return false;
        }
    }
    return s.empty();
}