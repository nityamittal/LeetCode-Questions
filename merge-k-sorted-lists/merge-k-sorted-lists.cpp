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
struct compare{
    bool operator()(const ListNode* left, const ListNode* right) {
        return left->val > right->val;
    }
};
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) 
    {
        priority_queue<ListNode *, vector<ListNode *>, compare> q;
        
        for(auto l : lists) 
        {
            if(l)  
                q.push(l);
        }
        
        if(q.empty())  
            return NULL;

        ListNode* result = q.top();
        q.pop();
        if(result->next) 
            q.push(result->next);
        
        ListNode* tail = result;            
        while(!q.empty()) 
        {
            tail->next = q.top();
            q.pop();
            tail = tail->next;
            if(tail->next) 
                q.push(tail->next);
        }
        
        return result;
        
    }
};