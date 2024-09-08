https://leetcode.com/problems/add-two-numbers/description/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
    {
        int carry=0;
        //ListNode *head=l1,*t1=l1;
        ListNode *head=new ListNode(0);
        ListNode * tail=head;
        while(l1 ||  l2 ||  carry!=0)
        {
            int digit1 = (l1 != nullptr) ? l1->val : 0;
            int digit2 = (l2 != nullptr) ? l2->val : 0;
            int sum=digit1+digit2+carry;
            int digit=sum %10;
            carry=sum/10;
            ListNode * l= new ListNode(digit);
            tail->next=l;
            tail=tail->next;
            if(l1)l1=l1->next;
            if(l2)l2=l2->next; 
        }
        tail=head->next;
        delete head;
        return  tail;
    }
};
