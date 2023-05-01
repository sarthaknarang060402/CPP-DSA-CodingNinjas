#include <stack>
int countBracketReversals(string input)
{

    if (input.length() % 2 != 0)
        return -1; // when the expression has total odd no. of brackets
    stack<char> s;
    int count = 0;
    for (int i = 0; input[i] != '\0'; i++) // filling our stack while removing the balanced parts
    {
        if (input[i] == '{')
            s.push('{');
        else if (input[i] == '}' && !s.empty() && s.top() == '{')
            s.pop();
        else
            s.push('}');
    }
    while (!(s.empty()))
    {
        char c1 = s.top();
        s.pop();
        char c2 = s.top();
        s.pop();
        if (c1 == c2)
            count++;
        else
            count += 2;
    }
    return count;
}