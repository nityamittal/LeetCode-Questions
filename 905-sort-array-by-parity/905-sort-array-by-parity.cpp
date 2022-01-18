class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) 
    {
        vector<int> ans(nums);
        for(int i=0,j=0;i<ans.size();++i)
        {
            if(ans[i]%2==0)
            {
                swap(ans[j], ans[i]);
                ++j;
            }
            
        }
        return ans;
        
    }
};