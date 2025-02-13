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
        ListNode* dummy = new ListNode();
        ListNode* pointer = dummy;

        int total =0;
        int carry = 0;

        while(l1 or l2 or carry)
        {
            total=carry;

            if(l1)
            {
                total+=l1->val;
                l1=l1->next;
            }
            if(l2)
            {
                total+=l2->val;
                l2=l2->next;
            }

            int num = total%10;
            carry = total/10;
            dummy->next = new ListNode(num);
            dummy=dummy->next;
        }
        return pointer->next;


        
        
    }
};