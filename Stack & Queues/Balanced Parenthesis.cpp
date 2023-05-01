#include <stack>
bool isBalanced(string expression)
{
    // Write your code here
    bool ans = 0;
    stack<char> s1;
    for (int i = 0; expression[i] != '\0'; i++)
    {
        if (expression[i] == '[' || expression[i] == '(' || expression[i] == '{')
            s1.push(expression[i]);
    }

    for (int i = 0; expression[i] != '\0'; i++)
    {
        if (expression[i] == ']' || expression[i] == ')' || expression[i] == '}')
        {
            if (s1.top() == '(' && expression[i] == ')')
            {
                ans = 1;
                s1.pop();
            }
            else if (s1.top() == '{' && expression[i] == '}')
            {
                ans = 1;
                s1.pop();
            }
            else if (s1.top() == '[' && expression[i] == ']')
            {
                ans = 1;
                s1.pop();
            }
        }
        else
            ans = 0;
    }
    return s1.empty() && ans;
}