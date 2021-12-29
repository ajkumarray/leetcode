//  713. Subarray Product Less Than K

#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int numSubarrayProductLessThanK(vector<int> &nums, int k)
    {
        int n = nums.size();
        int ans = 0;
        int left = 0;
        int right = 0;
        int prod = 1;
        while (right < n)
        {
            prod *= nums[right];
            while (prod >= k && left <= right)
            {
                prod /= nums[left];
                left++;
            }
            ans += right - left + 1;
            right++;
        }
        return ans;
    }
};