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
    ListNode* mergeKLists(vector<ListNode*>& lists) 
    {
        //base case
        if(lists.empty())
        return nullptr;

        while(lists.size()>1)
        {
            vector<ListNode*> temp;

            for(int i=0;i<lists.size();i+=2)
            {
                ListNode* l1 = lists[i];
                ListNode* l2 = i+1<lists.size()?lists[i+1]:nullptr;

                temp.push_back(merge2Lists(l1, l2));
            }
            lists = move(temp);
        }
        return lists[0];
        
    }
    ListNode* merge2Lists(ListNode* list1, ListNode* list2)
    {
        if(list1==nullptr)
        return list2;

        if(list2==nullptr)
        return list1;

        ListNode* temp;

        if(list1->val<list2->val)
        {
            temp = list1;
            temp->next = merge2Lists(list1->next, list2);
        }
        else
        {
            temp = list2;
            temp->next = merge2Lists(list1, list2->next);
        }

        return temp;
    }
};