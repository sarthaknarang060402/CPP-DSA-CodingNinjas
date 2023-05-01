void reverseStack(stack<int> &input, stack<int> &extra)
{
    if (input.empty())
        return;
    int temp = input.top();
    input.pop();
    reverseStack(input, extra);
    for (int i = 0; (!input.empty()); i++)
    {
        extra.push(input.top());
        input.pop();
    }
    input.push(temp);
    for (int i = 0; (!extra.empty()); i++)
    {
        input.push(extra.top());
        extra.pop();
    }
}