#include <stack>
bool checkRedundantBrackets(string expression)
{
    // Write your code here
    stack<char> s;
    for (int i = 0; expression[i] != '\0'; i++)
    {
        int count = 0;
        for (; expression[i] != ')'; i++)
            s.push(expression[i]);

        for (; s.top() != '('; count++)
            s.pop();

        if (count == 0 || count == 1)
            return true;
        else
            s.pop();
    }
    return false;
}