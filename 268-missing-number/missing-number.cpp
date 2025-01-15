class Solution {
public:
    int missingNumber(vector<int>& nums) 
    {
        int range = nums.size();
        unordered_set<int> s;

        for(auto num:nums)
        {
            s.insert(num);
        }

        for(int i = 1;i<=range;++i)
        {
            if(s.find(i)==s.end())
            return i;
        }

       return 0; 
    }
    
};