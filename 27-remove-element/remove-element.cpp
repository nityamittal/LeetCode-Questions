class Solution {
public:
    int removeElement(vector<int>& nums, int val) 
    {
        int fin = 0;
        int i = 0;

        for(i=0;i<nums.size();++i)
        {
            if(nums[i] != val)
            {
                nums[fin] = nums[i];
                ++fin;
            }
        }

        return fin;       

        
    }
};