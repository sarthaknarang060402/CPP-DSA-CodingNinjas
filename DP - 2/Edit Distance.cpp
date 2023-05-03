int editDistance(string s1, string s2)
{
    // Write your code here
    if (s1.length() == 0)
    {
        return s2.length();
    }

    if (s2.length() == 0)
    {
        return s1.length();
    }

    if (s1.back() == s2.back())
    {
        s1.pop_back();
        s2.pop_back();
        return editDistance(s1, s2);
    }

    return 1 + min(editDistance(s1, string(s2.begin(), s2.end() - 1)),
                   min(editDistance(string(s1.begin(), s1.end() - 1), s2),
                       editDistance(string(s1.begin(), s1.end() - 1),
                                    string(s2.begin(), s2.end() - 1))));
}