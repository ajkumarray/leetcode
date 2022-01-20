//  875. Koko Eating Bananas
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int minEatingSpeed(vector<int> &piles, int h)
    {
        int l = 1, r = *max_element(piles.begin(), piles.end());
        while (l < r)
        {
            int mid = l + (r - l) / 2;
            int cnt = 0;
            for (int i = 0; i < piles.size(); i++)
                cnt += (piles[i] + mid - 1) / mid;
            if (cnt > h)
                l = mid + 1;
            else
                r = mid;
        }
        return l;
    }
};