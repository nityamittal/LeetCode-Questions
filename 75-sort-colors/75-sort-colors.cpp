class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zero_p = 0, two_p = nums.size()-1;
        
        
        for(int i=0;i<nums.size();++i)
        {
            while(nums[i]==2 and i<two_p)
            {
                swap(nums[i], nums[two_p]);
                --two_p;
            }
            while(nums[i]==0 and i>zero_p)
            {
                swap(nums[i], nums[zero_p]);
                ++zero_p;
                
            }
            
            
        }        
        
        
    }
};