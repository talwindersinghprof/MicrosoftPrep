https://leetcode.com/problems/odd-even-linked-list/description/
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) 
    {
        if(!head)return head;
        ListNode* odd=head, *even=head->next ,*even_start=head->next;
        while(odd && even && odd->next && even->next)
        {
            odd->next=even->next;
            even->next=odd->next->next;
            odd=odd->next;
            even=even->next;
        }
        odd->next=even_start;
        return head;
    }
};
