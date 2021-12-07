//  1032. Stream of Characters

#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    StreamChecker(vector<string> &words)
    {
        for (auto &word : words)
        {
            reverse(word.begin(), word.end());
            word_set.insert(word);
        }
    }

    bool query(char letter)
    {
        string str = "";
        str += letter;
        reverse(str.begin(), str.end());
        if (word_set.find(str) != word_set.end())
        {
            word_set.erase(str);
            word_set.insert(str);
            return true;
        }
        return false;
    }
};