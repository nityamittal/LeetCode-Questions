class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) 
    {
        int i=0;
        int n = nums.size();
        int temp = nums[0];
        vector<int> ans;

        while(i<n)
        {
            if(nums[abs(nums[i])-1]<0)
            {
                ans.push_back(abs(nums[i]));
                
            }
            nums[abs(nums[i])-1]*=-1;  
            ++i;          
        }

        return  ans;

        
    }
};