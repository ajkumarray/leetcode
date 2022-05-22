// 647. Palindromic Substrings

#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int countSubstring(string s)
    {
        int beg, end, n = s.size(), res = 0;
        for (int i = 0; i < n; i++)
        {
            //  for odd length palindromic substring
            beg = i, end = i;
            while (beg >= 0 && end < n && s[beg--] == s[end++])
                res++;

            //  for even length palindromic substring
            beg = i - 1, end = i;
            while (beg >= 0 && end < n && s[beg--] == s[end++])
                res++;
        }
        return res;
    }
};