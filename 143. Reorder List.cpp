//  143. Reorder List

#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    //  876. Middle of the Linked List
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

    //  206. Reverse Linked List
    ListNode *reverseList(ListNode *head)
    {
        ListNode *prev = NULL;
        ListNode *next = NULL;
        while (head != NULL)
        {
            next = head->next;
            head->next = prev;
            prev = head;
            head = next;
        }
        head = prev;
        return head;
    }

    void reorderList(ListNode *head)
    {
        if (!head || !head->next)
            return;
        auto mid = middleNode(head);
        auto right = reverseList(mid), left = head->next;
        for (int i = 0; left != right; i++, head = head->next)
        {
            if (i & 1)
            {
                head->next = left;
                left = left->next;
            }
            else
            {
                head->next = right;
                right = right->next;
            }
        }
    }
};