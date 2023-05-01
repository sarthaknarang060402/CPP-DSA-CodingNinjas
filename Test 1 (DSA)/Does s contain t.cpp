#include <cstring>

bool checksequenece(char large[], char *small)
{
    if (small[0] == '\0')
        return 1;
    else if (large[0] == '\0')
        return 0;
    bool value;
    if (small[0] == large[0])
        value = checksequenece(large + 1, small + 1);
    else
        value = checksequenece(large + 1, small);
    return value;
}
