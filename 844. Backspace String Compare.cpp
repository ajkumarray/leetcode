//  844. Backspace String Compare

#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    bool backspaceCompare(string S, string T)
    {
        //  for string S
        stack<char> s1;
        for (auto x : S)
        {
            if (x == '#')
            {
                if (!s1.empty())
                    s1.pop();
            }
            else
                s1.push(x);
        }

        //  for string T
        stack<char> s2;
        for (auto x : T)
        {
            if (x == '#')
            {
                if (!s2.empty())
                    s2.pop();
            }
            else
                s2.push(x);
        }

        //  compare
        while (!s1.empty() && !s2.empty())
        {
            if (s1.top() != s2.top())
                return false;
            s1.pop();
            s2.pop();
        }

        if (s1.empty() && s2.empty())
            return true;
        else
            return false;
    }
};