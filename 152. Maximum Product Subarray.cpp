//  152. Maximum Product Subarray

#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int maxProduct(vector<int> &nums)
    {
        int n = nums.size();
        if (n == 0)
            return 0;
        if (n == 1)
            return nums[0];
        int max_product = nums[0];
        int min_product = nums[0];
        int max_product_so_far = nums[0];
        for (int i = 1; i < n; i++)
        {
            int temp = max_product;
            max_product = max(max(max_product * nums[i], min_product * nums[i]), nums[i]);
            min_product = min(min(temp * nums[i], min_product * nums[i]), nums[i]);
            max_product_so_far = max(max_product_so_far, max_product);
        }
        return max_product_so_far;
    }
};