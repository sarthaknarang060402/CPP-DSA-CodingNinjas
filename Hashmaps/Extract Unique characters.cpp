#include <bits/stdc++.h>
string uniqueChar(string str)
{
    unordered_map<int, bool> seen;
    string ans;
    for (int i = 0; i < str.length(); i++)
    {
        if (seen.count(str[i]) > 0)
        {
            continue;
        }
        seen[str[i]] = true;
        ans.push_back(str[i]);
    }
    return ans;
}