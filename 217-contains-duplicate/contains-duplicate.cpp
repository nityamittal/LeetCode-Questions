class Solution {
public:
    bool containsDuplicate(vector<int>& nums) 
    {
        set<int> s;

        for(auto num:nums)
        {
            if(s.find(num)==s.end())
            {
                s.insert(num);
            }
            else
            return true;
        }
        return false;
        
    }
};