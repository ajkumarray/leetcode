//  563. Binary Tree Tilt

#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int findTilt(TreeNode *root, int &tilt)
    {
        if (!root)
            return 0;
        int left = findTilt(root->left, tilt);
        int right = findTilt(root->right, tilt);
        tilt += abs(left - right);
        return left + right + root->val;
    }

    int findTilt(TreeNode *root)
    {
        int res = 0;
        findTilt(root, res);
        return res;
    }
};