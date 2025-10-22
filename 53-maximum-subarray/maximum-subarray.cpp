class Solution {
public:
    int maxSubArray(vector<int>& nums) 
    {
        if(nums.size()==1)
        return nums[0];
        
        int current_sum = 0;
        int sum=INT_MIN;
        
        for(int i=0;i<nums.size();++i)
        {
            current_sum = max(current_sum+nums[i], nums[i]);
            sum = max(sum, current_sum);

        }

        return sum;
        
    }
};