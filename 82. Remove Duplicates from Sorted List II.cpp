//  82. Remove Duplicates from Sorted List II

#include <bits/stdc++.h>

using namespace std;

//      sorted list II
ListNode *deleteDuplicates(ListNode *head)
{
    if (head == NULL)
        return head;

    if (head->next == NULL)
    {
        head->next = deleteDuplicates(head->next);
    }
    else
    {
        if (head->val == head->next->val)
        {
            if (head->next->next == NULL)
            {
                head = NULL;
            }
            else
                head = head->next->next;
            head = deleteDuplicates(head);
        }
        else
            head->next = deleteDuplicates(head->next);
    }

    return head;
}
}
;