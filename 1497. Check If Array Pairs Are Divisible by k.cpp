//  1497. Check If Array Pairs Are Divisible by k

#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    bool canPair(vector<int> nums, int k)
    {
        int num = nums.size();
        if (num % 2 != 0)
            return false;

        unordered_map<int, int> map;
        int nonPair = 0;
        for (int i = 0; i < num; i++)
        {
            int temp = (k + (nums[i] % k)) % k;
            if (map[(k - temp) % k] > 0)
            {
                map[(k - temp) % k]--;
                nonPair--;
            }
            else
            {
                map[temp]++;
                nonPair++;
            }
        }
        return nonPair == 0 ? true : false;
    }
}
}
;