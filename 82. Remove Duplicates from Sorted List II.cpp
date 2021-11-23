//  82. Remove Duplicates from Sorted List II

#include <bits/stdc++.h>

using namespace std;

//      sorted list II

class Solution
{
    ListNode *deleteDuplicates(ListNode *head)
    {
        if (!head or !head->next)
            return head;
        ListNode *curr = head, *prev = NULL;
        while (curr)
        {
            if (curr->next and curr->next->val == curr->val)
            {
                int val = curr->val;
                while (curr and curr->val == val)
                {
                    curr = curr->next;
                }
                if (prev == NULL)
                {
                    head = curr;
                }
                else
                {
                    prev->next = curr;
                }
            }
            else
            {
                prev = curr;
                curr = curr->next;
            }
        }
        return head;
    }
};