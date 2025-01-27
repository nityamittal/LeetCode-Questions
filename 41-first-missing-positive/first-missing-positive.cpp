class Solution {
public:
    int firstMissingPositive(vector<int>& nums) 
    {
        int ans = 1;
        unordered_set<int> s;

        for(int i=0;i<nums.size();++i)
        {
            s.insert(nums[i]);
        }

        for(int i=0;i<nums.size();++i)
        {
            if(s.find(ans)==s.end())
            return ans;
            else
            ++ans;
        }
        return ans;
        
    }
};