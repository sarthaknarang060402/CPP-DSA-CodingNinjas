#include <queue>
void reverseQueue(queue<int> &input)
{
    if (input.empty())
        return;
    int temp = input.front();
    input.pop();
    reverseQueue(input);
    input.push(temp);
}