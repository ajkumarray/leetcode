//  876. Middle of the Linked List

#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    ListNode *middleNode(ListNode *head)
    {
        ListNode *slow = head;
        ListNode *fast = head;

        if (head != NULL)
        {
            while (fast != NULL && fast->next != NULL)
            {
                fast = fast->next->next;
                slow = slow->next;
            }
        }
        return slow;
    }
};