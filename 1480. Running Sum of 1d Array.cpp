//  1480. Running Sum of 1d Array

#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<int> runningSum(vector<int> &nums)
    {
        for (int i = 1; i < nums.size(); i++)
        {
            nums[i] = nums[i] + nums[i - 1];
        }
        return nums;
    }
};