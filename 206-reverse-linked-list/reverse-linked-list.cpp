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
    ListNode* reverseList(ListNode* head) 
    {
        /*
        //base case
        if(head==nullptr or head->next==nullptr)
        return head;

        //recursive call
        ListNode* revHead = reverseList(head->next);
        head->next->next = head;
        head->next = nullptr;

        return revHead;   */

        if(head==nullptr or head->next==nullptr)
        return head;

        ListNode* temp;
        ListNode* current = head;
        ListNode* prev = nullptr;

        while(current!=nullptr)
        {
            temp = current->next;
            current->next = prev;

            prev = current;
            current = temp;
        } 
        return prev;        
    }
};