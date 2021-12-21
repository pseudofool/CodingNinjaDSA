bool checkRedundantBrackets(string expression) {
	stack<char> s;
    for (int i=0; i<expression.length(); i++){
        if (expression[i] == '+' || expression[i] == '-' || expression[i] == '/' || expression[i] == '*' || expression[i] == '('){
            s.push(expression[i]);
        }else if (expression[i] == ')'){
            if (s.top() == '('){
                return true;
            }else{
                while(s.top() != '('){
                    s.pop();
                }
                s.pop();
            }
        }
    }
    return false;
}