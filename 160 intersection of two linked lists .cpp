https://leetcode.com/problems/intersection-of-two-linked-lists/description/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
     ListNode *find(ListNode *headA, ListNode *headB,int diff) 
     {
         ListNode *t1=headA, *t2=headB;
        int c1=0;
        while(t1 && diff !=0)
        {
            c1++;
             t1=t1->next;
            if(c1==diff)break;
        }
         while(t1 && t2)
        {
             if(t1==t2)return t1;
            t1=t1->next;
            t2=t2->next;
        }
        return t1;
     }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) 
    {
        ListNode *t1=headA, *t2=headB;
        int c1=0,c2=0;
        while(t1)
        {
            c1++;
            t1=t1->next;
        }
        while(t2)
        {
            c2++;
            t2=t2->next;
        }
        
        if(c1>c2)return find(headA, headB,abs(c1-c2)) ;
        else return  find(headB, headA,abs(c1-c2));
        
    }
};
