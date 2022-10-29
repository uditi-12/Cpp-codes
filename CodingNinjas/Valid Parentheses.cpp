bool isValidParenthesis(string expression)
{
    // Write your code here.
    int open=0,close=0,i=0;
    
    stack<char> s;

    while(i<expression.size()){
        if(expression[i]=='{' || expression[i]=='[' ||expression[i]=='(')
            s.push(expression[i]);
        else
        {
            if(!s.empty()){
            if(expression[i]=='}' && s.top()=='{')
                s.pop();
           else if(expression[i]==']' && s.top()=='[')
                s.pop();
            else if(expression[i]==')' && s.top()=='(')
                s.pop();
                else
                    return false;
            }
            else{
                return false;
            }
        }
        i++;
    }
    
    
    if(s.empty())
        return true;
    return false;
        
}
