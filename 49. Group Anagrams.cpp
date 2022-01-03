//  49. Group Anagrams

#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<vector<string> > groupAnagrams(vector<string> &strs)
    {
        unordered_map<string, vector<string> > map_list;
        int n = string_list.size();
        string temp;
        for (int i = 0; i < n; ++i)
        {
            temp = string_list[i];
            sort(string_list[i].begin(), string_list[i].end());
            map_list[string_list[i]].push_back(temp);
        }
        vector<vector<string> > result;
        for (auto itr = map_list.begin(); itr != map_list.end(); ++itr)
            result.push_back(itr->second);

        return result;
    }
};