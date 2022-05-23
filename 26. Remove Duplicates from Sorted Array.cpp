//  26. Remove Duplicates from Sorted Array

#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        int i = 0;
        for (int j = 1; j < nums.size(); j++)
        {
            if (nums[i] != nums[j])
            {
                i++;
                nums[i] = nums[j];
            }
        }
        return i + 1;
    }
};

class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        if (nums.size() == 1)
            return 1;
        int i = 0, j = 0;
        while (j < nums.size())
        {
            if (nums[i] != nums[j])
            {
                i++;
                nums[i] = nums[j];
            }
            j++;
        }
        return i + 1;
    }
};

class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        if (nums.size() == 1)
            return 1;
        int i = 0, j = 0;
        while (j < nums.size())
        {
            nums[i] = nums[j];
            while (j < nums.size() && nums[j] == nums[i])
                j++;
            i++;
        }
        return i;
    }
};

class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        auto i = unique(nums.begin(), nums.end());
        nums.resize(distance(nums.begin(), i));
        return nums.size();
    }
};