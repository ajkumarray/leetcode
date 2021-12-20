//  221. Maximal Square

#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int maximalSquare(vector<vector<char> > &matrix)
    {
        int m = matrix.size();
        if (m == 0)
            return 0;
        int n = matrix[0].size();
        if (n == 0)
            return 0;
        int dp[m + 1][n + 1];
        memset(dp, 0, sizeof(dp));
        int max_len = 0;
        for (int i = 1; i <= m; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (matrix[i - 1][j - 1] == '1')
                {
                    dp[i][j] = min(min(dp[i - 1][j], dp[i][j - 1]), dp[i - 1][j - 1]) + 1;
                    max_len = max(max_len, dp[i][j]);
                }
            }
        }
        return max_len * max_len;
    }
};